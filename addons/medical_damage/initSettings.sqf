[
    QEGVAR(medical,fatalDamageSource),
    "LIST",
    [LSTRING(fatalDamageSource_DisplayName), LSTRING(fatalDamageSource_Description)],
    [ELSTRING(medical,Category)],
    [[0, 1, 2], [LSTRING(fatalDamageSource_vitalShotsOnly), LSTRING(fatalDamageSource_trauma), LSTRING(fatalDamageSource_both)], 0],
    true
] call CBA_fnc_addSetting;

[
    QEGVAR(medical,playerDamageThreshold),
    "SLIDER",
    [LSTRING(PlayerDamageThreshold_DisplayName), LSTRING(PlayerDamageThreshold_Description)],
    ELSTRING(medical,Category),
    [0, 25, 1, 2],
    true
] call CBA_fnc_addSetting;

[
    QEGVAR(medical,AIDamageThreshold),
    "SLIDER",
    [LSTRING(AIDamageThreshold_DisplayName), LSTRING(AIDamageThreshold_Description)],
    ELSTRING(medical,Category),
    [0, 25, 1, 2],
    true
] call CBA_fnc_addSetting;

[
    QEGVAR(medical,painUnconsciousChance),
    "SLIDER",
    [LSTRING(PainUnconsciousChance_DisplayName), LSTRING(PainUnconsciousChance_Description)],
    ELSTRING(medical,Category),
    [0, 1, 0.1, 2, true],
    true
] call CBA_fnc_addSetting;

[
    QEGVAR(medical,deathChance),
    "SLIDER",
    [LSTRING(deathChance_DisplayName), LSTRING(deathChance_Description)],
    ELSTRING(medical,Category),
    [0, 1, 1, 2, true],
    true
] call CBA_fnc_addSetting;


[
    QEGVAR(medical,LimbWoundLimit),
    "SLIDER",
    ["Limit number of wounds per limb", "Set the maximum number of wounds allowed per limb. By default it will try to add a new wound, then merge, then increase the size"],
    ELSTRING(medical,Category),
    [3, 25, 5, 0],
    true
] call CBA_fnc_addSetting;