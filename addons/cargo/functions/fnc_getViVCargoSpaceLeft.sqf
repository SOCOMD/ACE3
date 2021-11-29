#include "script_component.hpp"
/*
 * Author: Glowbal
 * Get the tonnage left for ViV compatable Vehicle.
 *
 * Arguments:
 * 0: Object <OBJECT>
 *
 * Return Value:
 * Cargo space left <NUMBER>
 *
 * Example:
 * [object] call ace_cargo_fnc_getViVCargoSpaceLeft
 *
 * Public: No
 */

params ["_object"];
// TRACE_1("params",_object);

private _vehicleMaxCargo = getNumber (configOf _object >> "VehicleTransport" >> "Carrier" >> "maxLoadMass");
private _loadedCargo = getVehicleCargo _object;
private _cargoMass = 0;
{
	_cargoMass = _cargoMass + (getMass _x);
} count _loadedCargo;

format ["(%1t/%2t)",([(_cargoMass/1000),1,2] call CBA_fnc_formatNumber),([(_vehicleMaxCargo/1000),1,2] call CBA_fnc_formatNumber)]