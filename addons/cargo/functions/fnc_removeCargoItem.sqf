#include "script_component.hpp"
/*
 * Author: 654wak654
 * Removes a cargo item from the vehicle.
 *
 * Arguments:
 * 0: Item <STRING> or <OBJECT>
 * 1: Vehicle <OBJECT>
 * 2: Amount <NUMBER> (default: 1)
 *
 * Return Value:
 * Number of items removed <NUMBER>
 *
 * Example:
 * ["ACE_Wheel", vehicle, 2] call ace_cargo_fnc_removeCargoItem
 * [crate_7, truck] call ace_cargo_fnc_removeCargoItem
 *
 * Public: Yes
 */

params ["_item", "_vehicle", ["_amount", 1]];
TRACE_3("params",_item,_vehicle,_amount);

private _list = _vehicle getVariable [QGVAR(loaded), []];
private _itemIsObject = _item isEqualType objNull;
private _cargo = getVehicleCargo _vehicle;
private _loaded = [_cargo, 0, _list] call CBA_fnc_insert;

private _addedSpace = 0;
private _itemClass = _item;
private _itemsRemoved = 0;
private _continue = if (_itemIsObject) then {
    if !(_item in _loaded) exitWith {false};
    if (_item in _list) then {
        _addedSpace = [_item] call FUNC(getSizeItem);
        _loaded deleteAt (_loaded find _item);
        _itemClass = typeOf _item;
        deleteVehicle _item;
        _itemsRemoved = 1;
    };
    true
} else {
    {
        if (_itemsRemoved == _amount) exitWith {};

        if (
            (_x isEqualType "" && {_x == _item}) || // Check for classname, case-insensitive
            {_x isEqualType objNull && {typeOf _x isEqualTo _item}}
        ) then {
            INC(_itemsRemoved);
            ADD(_addedSpace,[_x] call FUNC(getSizeItem));

            if (_x isEqualType objNull) then {
                deleteVehicle _x;
            };
            _list set [_forEachIndex, nil];
        };
    } forEach _list;

    FILTER(_list,!isNil "_x");
    true
};
if (!_continue) exitWith {0};
_vehicle setVariable [QGVAR(loaded), _list, true];

private _space = [_vehicle] call FUNC(getCargoSpaceLeft);
_vehicle setVariable [QGVAR(space), _space + _addedSpace, true];

// Invoke listenable event
["ace_cargoRemoved", [_itemClass, _vehicle, _amount, _itemsRemoved]] call CBA_fnc_globalEvent;

_itemsRemoved
