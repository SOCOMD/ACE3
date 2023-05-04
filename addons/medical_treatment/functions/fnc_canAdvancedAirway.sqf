#include "script_component.hpp"
/*
 * Author: Slatery
 * Checks if an advanced airway can be applied to the patient.
 *
 * Arguments:
 * 0: Medic (not used) <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * Can use advanced airway <BOOL>
 *
 * Example:
 * [player, cursorObject] call ace_medical_treatment_fnc_canChestseal
 *
 * Public: No
 */

params ["", "_patient"];

IS_UNCONSCIOUS(_patient) 
&& {!GET_AIRWAY_BLOCKED(_patient)}
&&{GET_AIRWAY_TREATMENT_LVL(_patient)  < 3}
&& {isNull (_patient getVariable [QEGVAR(medical,air_provider), objNull])}