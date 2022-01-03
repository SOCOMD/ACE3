#include "script_component.hpp"
/*
 * Author: Glowbal, commy2
 * Handling of the open wounds & injuries upon the handleDamage eventhandler.
 *
 * Arguments:
 * 0: Unit That Was Hit <OBJECT>
 * 1: Name Of Body Part <STRING>
 * 2: Amount Of Damage <NUMBER>
 * 3: Type of the damage done <STRING>
 * 4: Weighted array of damaged selections <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "Body", 0.5, "bullet", [1, 1]] call ace_medical_damage_fnc_woundsHandlerSQF
 *
 * Public: No
 */

params ["_unit", "_bodyPart", "_damage", "_typeOfDamage", "_damageSelectionArray"];
TRACE_5("woundsHandlerSQF",_unit,_bodyPart,_damage,_typeOfDamage,_damageSelectionArray);

// Convert the selectionName to a number and ensure it is a valid selection.
private _bodyPartN = ALL_BODY_PARTS find toLower _bodyPart;
if (_bodyPartN < 0) exitWith { ERROR_1("invalid body part %1",_bodyPart); };

if ((_typeOfDamage isEqualTo "") || {isNil {GVAR(allDamageTypesData) getVariable _typeOfDamage}}) then {
    WARNING_1("damage type [%1] not found",_typeOfDamage);
    _typeOfDamage = "unknown";
};

// Get the damage type information. Format: [typeDamage thresholds, selectionSpecific, woundTypes]
// WoundTypes are the available wounds for this damage type. Format [[classID, selections, bleedingRate, pain], ..]
private _damageTypeInfo = [GVAR(allDamageTypesData) getVariable _typeOfDamage] param [0, [[], false, []]];
_damageTypeInfo params ["_thresholds", "_isSelectionSpecific", "_woundTypes"];

// find the available injuries for this damage type and damage amount
private _highestPossibleSpot = -1;
private _highestPossibleDamage = -1;
private _allPossibleInjuries = [];

{
    _x params ["", "_selections", "", "", "_damageExtrema"];
    _damageExtrema params ["_minDamage", "_maxDamage"];

    // Check if the damage is higher as the min damage for the specific injury
    if (_damage >= _minDamage && {_damage <= _maxDamage || _maxDamage < 0}) then {
        // Check if the injury can be applied to the given selection name
        // if ("All" in _selections || {_bodyPart in _selections}) then { // @todo, this is case sensitive! [we have no injuries that use this, disabled for now]

            // Find the wound which has the highest minimal damage, so we can use this later on for adding the correct injuries
            if (_minDamage > _highestPossibleDamage) then {
                _highestPossibleSpot = _forEachIndex;
                _highestPossibleDamage = _minDamage;
            };

            // Store the valid possible injury for the damage type, damage amount and selection
            _allPossibleInjuries pushBack _x;
        // };
    };
} forEach _woundTypes;

// No possible wounds available for this damage type or damage amount.
if (_highestPossibleSpot < 0) exitWith { TRACE_2("no wounds possible",_damage,_highestPossibleSpot); };

// Administration for open wounds and ids
private _openWounds = GET_OPEN_WOUNDS(_unit);

private _numberOfWounds = [0,0,0,0,0,0];
private _headWounds = 0;
private _bodyWounds = 0;
private _leftArmWounds = 0;
private _leftLegWounds = 0;
private _rightArmWounds = 0;
private _rightLegWounds = 0;

// Loop through all current wounds and add up the number of unbandaged wounds on each body part.
{
    _x params ["", "_bodyPart", "_numOpenWounds", "_bloodLoss", ""];

    if(_bloodLoss > 0) then {
        switch (_bodyPart) do {
            // Head
            case 0: {
                _headWounds = _headWounds + _numOpenWounds;
            };

            // Body
            case 1: {
                _bodyWounds = _bodyWounds + _numOpenWounds;
            };

            // Left Arm
            case 2: {
                _leftArmWounds = _leftArmWounds + _numOpenWounds;
            };

            // Right Arm
            case 3: {
                _rightArmWounds = _rightArmWounds + _numOpenWounds;
            };

            // Left Leg
            case 4: {
                _leftLegWounds = _leftLegWounds + _numOpenWounds;
            };

            // Right Leg
            case 5: {
                _rightLegWounds = _rightLegWounds + _numOpenWounds;
            };
        };
    };
} forEach _openWounds;
_numberOfWounds = [_headWounds,_bodyWounds,_leftArmWounds,_rightArmWounds,_leftLegWounds,_rightLegWounds];
private _updateDamageEffects = false;
private _painLevel = 0;
private _critialDamage = false;
private _bodyPartDamage = _unit getVariable [QEGVAR(medical,bodyPartDamage), [0,0,0,0,0,0]];
private _bodyPartVisParams = [_unit, false, false, false, false]; // params array for EFUNC(medical_engine,updateBodyPartVisuals);

{
    _x params ["_thresholdMinDam", "_thresholdWoundCount"];
    if (_damage > _thresholdMinDam) exitWith {
        private _woundDamage = _damage / (_thresholdWoundCount max 1); // If the damage creates multiple wounds
        for "_i" from 1 to _thresholdWoundCount do {
            // Find the injury we are going to add. Format [ classID, allowedSelections, bleedingRate, injuryPain]
            private _oldInjury = if (random 1 < 0.15) then {
                _woundTypes select _highestPossibleSpot
            } else {
                selectRandom _allPossibleInjuries
            };

            _oldInjury params ["_woundClassIDToAdd", "", "_injuryBleedingRate", "_injuryPain", "", "", "", "_causeLimping", "_causeFracture"];

            private _bodyPartNToAdd = if (_isSelectionSpecific) then {_bodyPartN} else {selectRandomWeighted _damageSelectionArray};

            _bodyPartDamage set [_bodyPartNToAdd, (_bodyPartDamage select _bodyPartNToAdd) + _woundDamage];
            _bodyPartVisParams set [[1,2,3,3,4,4] select _bodyPartNToAdd, true]; // Mark the body part index needs updating


            // Damage to limbs/head is scaled higher than torso by engine
            // Anything above this value is guaranteed worst wound possible
            private _worstDamage = [2, 1, 4, 4, 4, 4] select _bodyPartNToAdd;

            // More wounds means more likely to get nasty wound
            private _countModifier = 1 + random(_i - 1);

            // Config specifies bleeding and pain for worst possible wound
            // Worse wound correlates to higher damage, damage is not capped at 1
            private _bleedModifier = linearConversion [0.1, _worstDamage, _woundDamage * _countModifier, 0.25, 1, true];
            private _painModifier = (_bleedModifier * random [0.7, 1, 1.3]) min 1; // Pain isn't directly scaled to bleeding

            private _bleeding = _injuryBleedingRate * _bleedModifier;
            private _pain = _injuryPain * _painModifier;
            _painLevel = _painLevel + _pain;

            // wound category (minor [0.25-0.5], medium [0.5-0.75], large [0.75+])
            private _category = floor linearConversion [0.25, 0.75, _bleedModifier, 0, 2, true];

            private _classComplex = 10 * _woundClassIDToAdd + _category;

            // Create a new injury. Format [0:classComplex, 1:bodypart, 2:amountOf, 3:bleedingRate, 4:woundDamage]
            private _injury = [_classComplex, _bodyPartNToAdd, 1, _bleeding, _woundDamage,CBA_missionTime];

            if (_bodyPartNToAdd == 0 || {_bodyPartNToAdd == 1 && {_woundDamage > PENETRATION_THRESHOLD}}) then {
                _critialDamage = true;
            };
            if ([_unit, _bodyPartNToAdd, _bodyPartDamage, _woundDamage] call FUNC(determineIfFatal)) then {
                if (!isPlayer _unit || {random 1 < EGVAR(medical,deathChance)}) then {
                    TRACE_1("determineIfFatal returned true",_woundDamage);
                    [QEGVAR(medical,FatalInjury), _unit] call CBA_fnc_localEvent;
                };
            };

            #ifdef DEBUG_MODE_FULL
            systemChat format["%1, damage: %2, peneration: %3, bleeding: %4, pain: %5", _bodyPart, _woundDamage toFixed 2, _woundDamage > PENETRATION_THRESHOLD, _bleeding toFixed 3, _pain toFixed 3];
            systemChat format ["Number Of Existing Wounds: %1, Body Part: %2",(_numberOfWounds select _bodyPartNToAdd),  _bodyPartNToAdd];
            #endif

            switch (true) do {
                case (
                    _causeFracture
                    && {EGVAR(medical,fractures) > 0}
                    && {_bodyPartNToAdd > 1}
                    && {_woundDamage > FRACTURE_DAMAGE_THRESHOLD}
                    && {random 1 < EGVAR(medical,fractureChance)}
                ): {
                    private _fractures = GET_FRACTURES(_unit);
                    _fractures set [_bodyPartNToAdd, 1];
                    _unit setVariable [VAR_FRACTURES, _fractures, true];

                    [QEGVAR(medical,fracture), [_unit, _bodyPartNToAdd]] call CBA_fnc_localEvent;
                    TRACE_1("Limb fracture",_bodyPartNToAdd);

                    _updateDamageEffects = true;
                };
                case (
                    _causeLimping
                    && {EGVAR(medical,limping) > 0}
                    && {_bodyPartNToAdd > 3}
                    && {_woundDamage > LIMPING_DAMAGE_THRESHOLD}
                ): {
                    _updateDamageEffects = true;
                };
            };

            // if possible merge into existing wounds
            private _createNewWound = true;
            {
                _x params ["_classID", "_bodyPartN", "_oldAmountOf", "_oldBleeding", "_oldDamage"];
                private _oldType = _classID % 10;
                private _newType = _classComplex % 10;
                if (    (_oldType == _newType) &&
                        {_bodyPartNToAdd == _bodyPartN} &&
                        {(_bodyPartNToAdd != 1) || {(_woundDamage < PENETRATION_THRESHOLD) isEqualTo (_oldDamage < PENETRATION_THRESHOLD)}} && // penetrating body damage is handled differently
                        {(_bodyPartNToAdd > 3) || {!_causeLimping} || {(_woundDamage <= LIMPING_DAMAGE_THRESHOLD) isEqualTo (_oldDamage <= LIMPING_DAMAGE_THRESHOLD)}} // ensure limping damage is stacked correctly
                    ) then {
                        // check if we can upgrade a wound first
                                        
                            TRACE_2("merging with existing wound",_injury,_x);
                            private _newAmountOf = _oldAmountOf + 1;
                            private _newBleeding = (_oldAmountOf * _oldBleeding + _bleeding) / _newAmountOf;
                            private _newDamage = (_oldAmountOf * _oldDamage + _woundDamage) / _newAmountOf;
                            
                            private _newBleedModifier = linearConversion [0.1, _worstDamage, _newDamage * _oldAmountOf, 0.25, 1, true];
                            private _newCategory = floor linearConversion [0.25, 0.75, _newBleedModifier, 0, 2, true];

                            private _newClassComplex = 10 * _woundClassIDToAdd + _newCategory; 

                            #ifdef DEBUG_MODE_FULL
                            systemChat format ["Old Level: %1, New Level: %2",_oldType,  (_newClassComplex % 10)];
                            #endif
                        if (hasInterface && {(_newClassComplex % 10) > _oldType}) exitWith{
                            if ((_numberOfWounds select _bodyPartNToAdd) < EGVAR(medical,LimbWoundLimit) )then {
                               _newAmountOf = _oldAmountOf;
                            };
                            _x set [0, _newClassComplex];
                            _x set [2, _oldAmountOf];
                            _x set [3, _newBleeding];
                            _x set [4, _newDamage];
                            _x set [5,CBA_missionTime];
                            _createNewWound = false;
                        };
                        // Check if we can then merge a wound ignore all previous 
                        if (!hasInterface || (_classComplex == _classID  && {(_numberOfWounds select _bodyPartNToAdd) < EGVAR(medical,LimbWoundLimit)})) exitWith{
                            _numberOfWounds set [_bodyPartNToAdd, ((_numberOfWounds select _bodyPartNToAdd) +1 ) ];
                            _x set [2, _newAmountOf];
                            _x set [3, _newBleeding];
                            _x set [4, _newDamage];
                            _x set [5,CBA_missionTime];
                            _createNewWound = false;
                        };
                };
            } forEach _openWounds;
            
            if ((!hasInterface && _createNewWound) || (_createNewWound && {(_numberOfWounds select _bodyPartNToAdd) < EGVAR(medical,LimbWoundLimit)})) then {
                TRACE_1("adding new wound",_injury);
                _numberOfWounds set [_bodyPartNToAdd, ((_numberOfWounds select _bodyPartNToAdd) +1 ) ];
                _openWounds pushBack _injury;
            };
        };
    };
} forEach _thresholds;

if (_updateDamageEffects) then {
    [_unit] call EFUNC(medical_engine,updateDamageEffects);
};

_unit setVariable [VAR_OPEN_WOUNDS, _openWounds, true];
_unit setVariable [QEGVAR(medical,bodyPartDamage), _bodyPartDamage, true];

[_unit] call EFUNC(medical_status,updateWoundBloodLoss);

_bodyPartVisParams call EFUNC(medical_engine,updateBodyPartVisuals);

[QEGVAR(medical,injured), [_unit, _painLevel]] call CBA_fnc_localEvent;

if (_critialDamage || {_painLevel > PAIN_UNCONSCIOUS}) then {
    [_unit] call FUNC(handleIncapacitation);
};

TRACE_4("exit",_unit,_painLevel,GET_PAIN(_unit),GET_OPEN_WOUNDS(_unit));
