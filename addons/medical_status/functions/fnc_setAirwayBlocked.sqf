#include "script_component.hpp"
params ["_unit","_state"];
if (_state) then {
	playsound3D [selectRandom [QPATHTOF(sounds\puking1.wav),QPATHTOF(sounds\puking2.wav),QPATHTOF(sounds\puking3.wav)], _unit, false, eyePos _unit, 8, 1, 15];
};
_unit setVariable [VAR_AIRWAY_BLOCKED, _state, true];