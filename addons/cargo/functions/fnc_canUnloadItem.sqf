#include "script_component.hpp"
/*
 * Author: Glowbal, ViperMaul
 * Check if item can be unloaded.
 *
 * Arguments:
 * 0: loaded Object <OBJECT>
 * 1: Object <OBJECT>
 * 2: Unloader (player) <OBJECT> (default: objNull)
 *
 * Return Value:
 * Can be unloaded <BOOL>
 *
 * Example:
 * [item, holder] call ace_cargo_fnc_canUnloadItem
 *
 * Public: No
 */

params ["_item", "_vehicle", ["_unloader", objNull]];
TRACE_2("params",_item,_vehicle);

private _loaded = _vehicle getVariable [QGVAR(loaded), []];
private _cargo = getVehicleCargo _vehicle;
private _list = [_cargo, 0, _loaded] call CBA_fnc_insert;
if !(_item in _list) exitWith {false};

private _itemClass = if (_item isEqualType "") then {_item} else {typeOf _item};

private _emptyPos = [_vehicle, _itemClass, _unloader] call EFUNC(common,findUnloadPosition);

(count _emptyPos) == 3
