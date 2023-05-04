#include "script_component.hpp"
/*
 * Author: Slatery
 * Checks if a basic airway can be applied to the patient.
 *
 * Arguments:
 * 0: Medic (not used) <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * Can use basic airway <BOOL>
 *
 * Example:
 * [player, cursorObject] call ace_medical_treatment_fnc_canChestseal
 *
 * Public: No
 */

params ["", "_patient"];

IS_UNCONSCIOUS(_patient) && {
	!GET_AIRWAY_BLOCKED(_patient)
}&&{
	GET_AIRWAY_TREATMENT_LVL(_patient)  < 2
}
&& {isNull (_patient getVariable [QEGVAR(medical,air_provider), objNull])}