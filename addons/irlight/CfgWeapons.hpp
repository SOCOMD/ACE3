class SlotInfo;
class PointerSlot: SlotInfo {
    compatibleItems[] += {
        "ACE_DBAL_A3_Red",
        "ACE_DBAL_A3_Red_IP",
        "ACE_DBAL_A3_Red_II",
        "ACE_DBAL_A3_Red_VP",
        "ACE_DBAL_A3_Green",
        "ACE_DBAL_A3_Green_IP",
        "ACE_DBAL_A3_Green_II",
        "ACE_DBAL_A3_Green_VP",
        "ACE_SPIR",
        "ACE_SPIR_Medium",
        "ACE_SPIR_Narrow"
    };
};
class PointerSlot_Rail: PointerSlot {
    class compatibleItems {
        ACE_DBAL_A3_Red = 1;
        ACE_DBAL_A3_Red_IP = 1;
        ACE_DBAL_A3_Red_II = 1;
        ACE_DBAL_A3_Red_VP = 1;
        ACE_DBAL_A3_Green = 1;
        ACE_DBAL_A3_Green_IP = 1;
        ACE_DBAL_A3_Green_II = 1;
        ACE_DBAL_A3_Green_VP = 1;
        ACE_SPIR = 1;
        ACE_SPIR_Medium = 1;
        ACE_SPIR_Narrow = 1;
    };
};

class CfgWeapons {
    class ItemCore;
    class acc_pointer_IR: ItemCore {
        class ItemInfo;
    };

    class acc_flashlight: ItemCore {
        class ItemInfo;
    };

    // DBAL A3 (red pointer)
    class ACE_DBAL_A3_Red: acc_pointer_IR {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(DBAL_A3_Red);
        descriptionUse = CSTRING(DBAL_A3_DescriptionUse);
        descriptionShort = CSTRING(DBAL_A3_DescriptionShort);

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Red_IP";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Red_VP";
        MRT_SwitchItemHintText = CSTRING(Mode_IRDual);

        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                innerAngle = 7.5;
                outerAngle = 10;
                position = "laser pos";
                direction = "laser dir";
                useFlare = 1;
                flareSize = 1;
                flareMaxDistance = 20;
                scale[] = {0};
                coneFadeCoef = 8;
                intensity = 10000;
                irLight = 1;

                class Attenuation {
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    start = 0;
                    hardLimitStart = 27;
                    hardLimitEnd = 900;
                };
            };
        };
    };

    class ACE_DBAL_A3_Red_IP: ACE_DBAL_A3_Red {
        scope = 1;

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Red_II";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Red";
        MRT_SwitchItemHintText = CSTRING(Mode_IRPointer);

        class ItemInfo: ItemInfo {
            class Flashlight {};
        };
    };

    class ACE_DBAL_A3_Red_II: ACE_DBAL_A3_Red {
        scope = 1;

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Red_VP";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Red_IP";
        MRT_SwitchItemHintText = CSTRING(Mode_IRIlluminator);

        class ItemInfo: ItemInfo {
            class Pointer {};
        };
    };

    class ACE_DBAL_A3_Red_VP: ACE_DBAL_A3_Red {
        scope = 1;
        ACE_laserpointer = 1;

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Red";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Red_II";
        MRT_SwitchItemHintText = CSTRING(Mode_VisiblePointer);

        class ItemInfo: ItemInfo {
            class Pointer {};
            class Flashlight: Flashlight {
                color[] = {0, 0, 0, 0};
                ambient[] = {0, 0, 0, 0};
                size = 0;
                innerAngle = 0;
                outerAngle = 0;
                useFlare = 0;
                intensity = 0;
                irLight = 0;

                class Attenuation: Attenuation {
                    hardLimitStart = 0;
                    hardLimitEnd = 0;
                };
            };
        };
    };

    // DBAL A3 (green pointer)
    class ACE_DBAL_A3_Green: ACE_DBAL_A3_Red {
        scope = 2;
        displayName = CSTRING(DBAL_A3_Green);

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Green_IP";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Green_VP";
        MRT_SwitchItemHintText = CSTRING(Mode_IRDual);
    };

    class ACE_DBAL_A3_Green_IP: ACE_DBAL_A3_Red_IP {
        scope = 1;
        displayName = CSTRING(DBAL_A3_Green);

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Green_II";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Green";
        MRT_SwitchItemHintText = CSTRING(Mode_IRPointer);
    };

    class ACE_DBAL_A3_Green_II: ACE_DBAL_A3_Red_II {
        scope = 1;
        displayName = CSTRING(DBAL_A3_Green);

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Green_VP";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Green_IP";
        MRT_SwitchItemHintText = CSTRING(Mode_IRIlluminator);
    };

    class ACE_DBAL_A3_Green_VP: ACE_DBAL_A3_Red_VP {
        scope = 1;
        displayName = CSTRING(DBAL_A3_Green);
        ACE_laserpointer = 2;

        MRT_SwitchItemNextClass = "ACE_DBAL_A3_Green";
        MRT_SwitchItemPrevClass = "ACE_DBAL_A3_Green_II";
        MRT_SwitchItemHintText = CSTRING(Mode_VisiblePointer);
    };

    // M300V
    class ACE_M300V: acc_flashlight {
        author = ECSTRING(common,ACETeam);
        displayName = "Surefire M300V Dual-head";
        descriptionUse = CSTRING(SPIR_DescriptionUse);
        descriptionShort = CSTRING(SPIR_DescriptionShort);
        MRT_SwitchItemNextClass = "ACE_M300V_STRONG";
        MRT_SwitchItemPrevClass = "ACE_M300V_STRONG2";
        MRT_SwitchItemHintText = CSTRING(Mode_Wide);


        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                innerAngle = 25;
                outerAngle = 32;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 20;
                scale[] = {0};
                coneFadeCoef = 8;
                intensity = 10000;
                irLight = 1;

                class Attenuation {
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    start = 0;
                    hardLimitStart = 10;
                    hardLimitEnd = 1800;
                };
            };
        };
    };

    class ACE_M300V_STRONG: acc_flashlight {
        scope = 1;

        author = ECSTRING(common,ACETeam);
        displayName = "Surefire M300V Dual-head";
        descriptionUse = CSTRING(SPIR_DescriptionUse);
        descriptionShort = CSTRING(SPIR_DescriptionShort);
        MRT_SwitchItemNextClass = "ACE_M300V_STRONG2";
        MRT_SwitchItemPrevClass = "ACE_M300V_STRONG";
        MRT_SwitchItemHintText = "High hardLimitEnd";


        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                innerAngle = 25;
                outerAngle = 32;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 20;
                scale[] = {0};
                coneFadeCoef = 8;
                intensity = 1000;
                irLight = 1;

                class Attenuation {
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    start = 0;
                    hardLimitStart = 27;
                    hardLimitEnd = 9000;
                };
            };
        };
    };

    class ACE_M300V_STRONG2: acc_flashlight {
        scope = 1;

        author = ECSTRING(common,ACETeam);
        displayName = "Surefire M300V Dual-head";
        descriptionUse = CSTRING(SPIR_DescriptionUse);
        descriptionShort = CSTRING(SPIR_DescriptionShort);
        MRT_SwitchItemNextClass = "ACE_M300V";
        MRT_SwitchItemPrevClass = "ACE_M300V_STRONG";
        MRT_SwitchItemHintText = "High intensity";


        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                innerAngle = 25;
                outerAngle = 32;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 20;
                scale[] = {0};
                coneFadeCoef = 8;
                intensity = 10000;
                irLight = 1;

                class Attenuation {
                    constant = 0.5;
                    linear = 0.1;
                    quadratic = 0.2;
                    start = 0;
                    hardLimitStart = 27;
                    hardLimitEnd = 900;
                };
            };
        };
    };

    // SPIR
    class ACE_SPIR: acc_flashlight {
        author = ECSTRING(common,ACETeam);
        displayName = "SPIR";
        descriptionUse = CSTRING(SPIR_DescriptionUse);
        descriptionShort = CSTRING(SPIR_DescriptionShort);

        MRT_SwitchItemNextClass = "ACE_SPIR_Medium";
        MRT_SwitchItemPrevClass = "ACE_SPIR_Narrow";
        MRT_SwitchItemHintText = CSTRING(Mode_Wide);

        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                innerAngle = 25;
                outerAngle = 32;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 200;
                scale[] = {0};
                coneFadeCoef = 6;
                intensity = 100;
                irLight = 1;

                class Attenuation {
                    constant = 1;
                    linear = 0;
                    quadratic = 0;
                    start = 200;
                    hardLimitStart = 1;
                    hardLimitEnd = 200;
                };
            };
        };
    };

    class ACE_SPIR_Medium: ACE_SPIR {
        scope = 1;

        MRT_SwitchItemNextClass = "ACE_SPIR_Narrow";
        MRT_SwitchItemPrevClass = "ACE_SPIR";
        MRT_SwitchItemHintText = CSTRING(Mode_Medium);

        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 200;
                scale[] = {0};
                coneFadeCoef = 6;
                intensity = 100;
                irLight = 1;
                innerAngle = 10;
                outerAngle = 12;

                class Attenuation {
                    constant = 1;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 1;
                    start = 350;
                    hardLimitEnd = 350;
                };
            };
        };
    };

    class ACE_SPIR_Narrow: ACE_SPIR {
        scope = 1;

        MRT_SwitchItemNextClass = "ACE_SPIR";
        MRT_SwitchItemPrevClass = "ACE_SPIR_Medium";
        MRT_SwitchItemHintText = CSTRING(Mode_Narrow);

        class ItemInfo: ItemInfo {
            class Flashlight {
                color[] = {1, 1, 1, 1};
                ambient[] = {1, 1, 1, 1};
                size = 1;
                position = "flash dir";
                direction = "flash";
                useFlare = 1;
                flareSize = 1.4;
                flareMaxDistance = 200;
                scale[] = {0};
                coneFadeCoef = 6;
                intensity = 100;
                irLight = 1;
                innerAngle = 5;
                outerAngle = 6;

                class Attenuation {
                    constant = 1;
                    linear = 0;
                    quadratic = 0;
                    hardLimitStart = 1;
                    start = 500;
                    hardLimitEnd = 500;
                };
            };
        };
    };
};
