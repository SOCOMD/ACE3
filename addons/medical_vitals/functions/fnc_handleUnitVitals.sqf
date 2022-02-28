#include "script_component.hpp"
/*
 * Author: Glowbal
 * Updates the vitals. Called from the statemachine's onState functions.
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * Return Value:
 * Update Ran (at least 1 second between runs) <BOOL>
 *
 * Example:
 * [player] call ace_medical_vitals_fnc_handleUnitVitals
 *
 * Public: No
 */

params ["_unit"];
private _updateDamageEffects = false;
private _lastTimeUpdated = _unit getVariable [QGVAR(lastTimeUpdated), 0];
private _deltaT = (CBA_missionTime - _lastTimeUpdated) min 10;
if (_deltaT < 1) exitWith { false }; // state machines could be calling this very rapidly depending on number of local units

BEGIN_COUNTER(Vitals);

_unit setVariable [QGVAR(lastTimeUpdated), CBA_missionTime];
private _lastTimeValuesSynced = _unit getVariable [QGVAR(lastMomentValuesSynced), 0];
private _syncValues = (CBA_missionTime - _lastTimeValuesSynced) >= (10 + floor(random 10));

if (_syncValues) then {
    _unit setVariable [QGVAR(lastMomentValuesSynced), CBA_missionTime];
};

private _bloodVolume = GET_BLOOD_VOLUME(_unit) + ([_unit, _deltaT, _syncValues] call EFUNC(medical_status,getBloodVolumeChange));
_bloodVolume = 0 max _bloodVolume min DEFAULT_BLOOD_VOLUME;

// @todo: replace this and the rest of the setVariable with EFUNC(common,setApproximateVariablePublic)
_unit setVariable [VAR_BLOOD_VOL, _bloodVolume, _syncValues];

// Set variables for synchronizing information across the net
private _hemorrhage = switch (true) do {
    case (_bloodVolume < BLOOD_VOLUME_CLASS_4_HEMORRHAGE): { 4 };
    case (_bloodVolume < BLOOD_VOLUME_CLASS_3_HEMORRHAGE): { 3 };
    case (_bloodVolume < BLOOD_VOLUME_CLASS_2_HEMORRHAGE): { 2 };
    case (_bloodVolume < BLOOD_VOLUME_CLASS_1_HEMORRHAGE): { 1 };
    default {0};
};

if (_hemorrhage != GET_HEMORRHAGE(_unit)) then {
    _unit setVariable [VAR_HEMORRHAGE, _hemorrhage, true];
};

private _woundBloodLoss = GET_WOUND_BLEEDING(_unit);

private _inPain = GET_PAIN_PERCEIVED(_unit) > 0;
if (_inPain isNotEqualTo IS_IN_PAIN(_unit)) then {
    _unit setVariable [VAR_IN_PAIN, _inPain, true];
};

// Handle pain due tourniquets, that have been applied more than 120 s ago
private _tourniquetPain = 0;
private _tourniquets = GET_TOURNIQUETS(_unit);
{
    if (_x > 0 && {CBA_missionTime - _x > 120}) then {
        _tourniquetPain = _tourniquetPain max (CBA_missionTime - _x - 120) * 0.001;
    };
} forEach _tourniquets;
if (_tourniquetPain > 0) then {
    [_unit, _tourniquetPain] call EFUNC(medical_status,adjustPainLevel);
};

// Get Medication Adjustments:
private _hrTargetAdjustment = 0;
private _painSupressAdjustment = 0;
private _peripheralResistanceAdjustment = 0;
private _adjustments = _unit getVariable [VAR_MEDICATIONS,[]];

if (_adjustments isNotEqualTo []) then {
    private _deleted = false;
    {
        _x params ["_medication", "_timeAdded", "_timeTillMaxEffect", "_maxTimeInSystem", "_hrAdjust", "_painAdjust", "_flowAdjust"];
        private _timeInSystem = CBA_missionTime - _timeAdded;
        if (_timeInSystem >= _maxTimeInSystem) then {
            _deleted = true;
            _adjustments set [_forEachIndex, objNull];
        } else {
            private _effectRatio = (((_timeInSystem / _timeTillMaxEffect) ^ 2) min 1) * (_maxTimeInSystem - _timeInSystem) / _maxTimeInSystem;
            if (_hrAdjust != 0) then { _hrTargetAdjustment = _hrTargetAdjustment + _hrAdjust * _effectRatio; };
            if (_painAdjust != 0) then { _painSupressAdjustment = _painSupressAdjustment + _painAdjust * _effectRatio; };
            if (_flowAdjust != 0) then { _peripheralResistanceAdjustment = _peripheralResistanceAdjustment + _flowAdjust * _effectRatio; };
        };
    } forEach _adjustments;

    if (_deleted) then {
        _unit setVariable [VAR_MEDICATIONS, _adjustments - [objNull], true];
        _syncValues = true;
    };
};

// Close random small wounds after time period
private _openWounds = GET_OPEN_WOUNDS(_unit);
if (_openWounds isNotEqualTo []) then {
    private _updated = false;
    {        
        _x params ["_class","","","","","_lastChecked"];
        if ((_class % 10 < 1) && {(CBA_missionTime - _lastChecked) > 30}) exitWith{
            if ((random 1) > 0.5) then {
                _openWounds set [_forEachIndex, objNull];
            } else {
                _x set [5,CBA_missionTime];
            };
            _updated = true;
        }; // skip if wound is not small, or was checked less than 150 seconds ago
    } forEach _openWounds;
    if (_updated) then {
        _unit setVariable [VAR_OPEN_WOUNDS, _openWounds - [objNull], true];
        [_unit] call EFUNC(medical_engine,updateDamageEffects);
        [_unit] call EFUNC(medical_status,updateWoundBloodLoss);
    };
};

private _heartRate = [_unit, _hrTargetAdjustment, _deltaT, _syncValues] call FUNC(updateHeartRate);
[_unit, _painSupressAdjustment, _deltaT, _syncValues] call FUNC(updatePainSuppress);
[_unit, _peripheralResistanceAdjustment, _deltaT, _syncValues] call FUNC(updatePeripheralResistance);

private _bloodPressure = GET_BLOOD_PRESSURE(_unit);
_unit setVariable [VAR_BLOOD_PRESS, _bloodPressure, _syncValues];


_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

private _spo2 = GET_SPO2(_unit);
if (EGVAR(medical,airway) > 0) then {
    private _blocked = GET_AIRWAY_BLOCKED(_unit);
    private _collapsed = GET_AIRWAY_COLLAPSED(_unit);
    private _pneumo = GET_PNEUMO(_unit);
    private _inCrdc = IN_CRDC_ARRST(_unit);
    private _maximumDrop = (EGVAR(medical,pneumoMultiplier) + EGVAR(medical,collapsedMultiplier) + EGVAR(medical,blockageMultiplier));
    private _receivingAir = alive (_unit getVariable [QEGVAR(medical,air_provider), objNull]);
    private _airSupliment = _unit getVariable [QEGVAR(medical,air_supliment), 0];// TODO - Airways - implements a bag valve mask/mouth to mouth
    if(_blocked || _collapsed || _pneumo || _inCrdc) then {
        
        private _newSpo2 = _spo2;
        private _adjustment = 0;
        if(_inCrdc) then {
            _adjustment = [-0.3 , _airSupliment] select (_receivingAir);
            _multiplier = [EGVAR(medical,airwayDegradationMultiplier), EGVAR(medical,airwayRecoveryMultiplier)] select (_receivingAir);
            _adjustment = _adjustment * _multiplier;            
        } else {
            private _blockedAdjustment = [0, 1] select _blocked;
            private _collapsedAdjustment = [0, 1] select _collapsed;
            private _pneumoAdjustment = [0, 1] select _pneumo;
            private _degredationSum = (_pneumoAdjustment * EGVAR(medical,pneumoMultiplier)) + (_collapsedAdjustment * EGVAR(medical,collapsedMultiplier)) + (_blockedAdjustment * EGVAR(medical,blockageMultiplier));
            _adjustment = linearConversion [0, _maximumDrop ,_degredationSum, 0, 0.3, true];
            _adjustment =  _adjustment * -EGVAR(medical,airwayDegradationMultiplier);
        };
        _newSpo2 = ((_spo2 + _adjustment)  max 65) min 100;
        if((_spo2 > 95 &&  _newSpo2 < 95) || {_spo2 > 85 &&  _newSpo2 < 85} || {_newSpo2 > 95 &&  _spo2 < 95} || {_newSpo2 > 85 &&  _spo2 < 85}) then {
            _updateDamageEffects = true;
        };
        _unit setVariable [VAR_SPO2, _newSpo2 , true];
    } else {
       // nothing impairing breathing
        if(_spo2 < 100 &&  !_inCrdc ) then {
            private _increaseValue = 2 * EGVAR(medical,airwayRecoveryMultiplier);
            private _newSpo2 = (_spo2 + _increaseValue ) min 100;
            if((_newSpo2 > 95 &&  _spo2 < 95) || {_newSpo2 > 85 &&  _spo2 < 85}) then {
                _updateDamageEffects = true;
            };
            _unit setVariable [VAR_SPO2,_newSpo2, true];
        };
    };
};
// Statements are ordered by most lethal first.
switch (true) do {
    case (_bloodVolume < BLOOD_VOLUME_FATAL): {
        TRACE_3("BloodVolume Fatal",_unit,BLOOD_VOLUME_FATAL,_bloodVolume);
        [QEGVAR(medical,Bleedout), _unit] call CBA_fnc_localEvent;
    };
    case (IN_CRDC_ARRST(_unit)): {}; // if in cardiac arrest just break now to avoid throwing unneeded events
    case (_hemorrhage == 4): {
        TRACE_3("Class IV Hemorrhage",_unit,_hemorrhage,_bloodVolume);
        [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_heartRate < 20 || {_heartRate > 220}): {
        TRACE_2("heartRate Fatal",_unit,_heartRate);
        [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_bloodPressureH < 50 && {_bloodPressureL < 40} && {_heartRate < 40}): {
        TRACE_4("bloodPressure (H & L) + heartRate Fatal",_unit,_bloodPressureH,_bloodPressureL,_heartRate);
        [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_bloodPressureL >= 190): {
        TRACE_2("bloodPressure L above limits",_unit,_bloodPressureL);
        [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_heartRate < 30): {  // With a heart rate below 30 but bigger than 20 there is a chance to enter the cardiac arrest state
        private _nextCheck = _unit getVariable [QGVAR(nextCheckCriticalHeartRate), CBA_missionTime];
        private _enterCardiacArrest = false;
        if (CBA_missionTime >= _nextCheck) then {
            _enterCardiacArrest = random 1 < (0.4 + 0.6*(30 - _heartRate)/10);  // Variable chance of getting into cardiac arrest.
            _unit setVariable [QGVAR(nextCheckCriticalHeartRate), CBA_missionTime + 5];
        };
        if (_enterCardiacArrest) then {
            TRACE_2("Heart rate critical. Cardiac arrest",_unit,_heartRate);
            [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
        } else {
            TRACE_2("Heart rate critical. Critical vitals",_unit,_heartRate);
            [QEGVAR(medical,CriticalVitals), _unit] call CBA_fnc_localEvent;
        };
    };
    case(_spo2 <= 75) : { 
        if(_spo2 <= 65) then {
            TRACE_2("Oxygen critical. Cardiac arrest",_unit,_spo2);
            [QEGVAR(medical,FatalVitals), _unit] call CBA_fnc_localEvent;
        } else {           
            TRACE_2("Oxygen critical. Critical vitals",_unit,_spo2);
            [QEGVAR(medical,CriticalVitals), _unit] call CBA_fnc_localEvent;
        };
    };
    case (_woundBloodLoss > BLOOD_LOSS_KNOCK_OUT_THRESHOLD): {
        [QEGVAR(medical,CriticalVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_woundBloodLoss > 0): {
        [QEGVAR(medical,LoweredVitals), _unit] call CBA_fnc_localEvent;
    };
    case (_inPain): {
        [QEGVAR(medical,LoweredVitals), _unit] call CBA_fnc_localEvent;
    };
};

if (_updateDamageEffects) then {
    [_unit] call EFUNC(medical_engine,updateDamageEffects);
};
#ifdef DEBUG_MODE_FULL
private _cardiacOutput = [_unit] call EFUNC(medical_status,getCardiacOutput);
if (!isPlayer _unit) then {
    private _painLevel = _unit getVariable [VAR_PAIN, 0];
    hintSilent format["blood volume: %1, blood loss: [%2, %3]\nhr: %4, bp: %5, pain: %6", round(_bloodVolume * 100) / 100, round(_woundBloodLoss * 1000) / 1000, round((_woundBloodLoss / (0.001 max _cardiacOutput)) * 100) / 100, round(_heartRate), _bloodPressure, round(_painLevel * 100) / 100];
};
#endif

END_COUNTER(Vitals);

true
