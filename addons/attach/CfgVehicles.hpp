
#define MACRO_ATTACHTOVEHICLE \
    class ACE_Actions { \
        class ACE_MainActions { \
            class GVAR(AttachVehicle) { \
                displayName = CSTRING(AttachDetach); \
                condition = QUOTE(_this call FUNC(canAttach)); \
                insertChildren = QUOTE(_this call FUNC(getChildrenActions)); \
                exceptions[] = {"isNotSwimming"}; \
                showDisabled = 0; \
                icon = QPATHTOF(UI\attach_ca.paa); \
            }; \
            class GVAR(DetachVehicle) { \
                displayName = CSTRING(Detach); \
                condition = QUOTE(_this call FUNC(canDetach)); \
                statement = QUOTE(_this call FUNC(detach) ); \
                exceptions[] = {"isNotSwimming"}; \
                showDisabled = 0; \
                icon = QPATHTOF(UI\detach_ca.paa); \
            }; \
        }; \
    };

class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        MACRO_ATTACHTOVEHICLE
    };

    class Tank: LandVehicle {
        MACRO_ATTACHTOVEHICLE
    };

    class Air;
    class Helicopter: Air {
        MACRO_ATTACHTOVEHICLE
    };

    class Plane: Air {
        MACRO_ATTACHTOVEHICLE
    };

    class Ship;
    class Ship_F: Ship {
        MACRO_ATTACHTOVEHICLE
    };

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(Attach) {
                    displayName = CSTRING(AttachDetach);
                    condition = QUOTE(_this call FUNC(canAttach));
                    insertChildren = QUOTE(_this call FUNC(getChildrenActions));
                    exceptions[] = {"isNotDragging", "isNotSwimming"};
                    showDisabled = 0;
                    icon = QPATHTOF(UI\attach_ca.paa);
                };
                class GVAR(Detach) {
                    displayName = CSTRING(Detach);
                    condition = QUOTE(_this call FUNC(canDetach));
                    statement = QUOTE(_this call FUNC(detach));
                    exceptions[] = {"isNotDragging", "isNotSwimming"};
                    showDisabled = 0;
                    icon = QPATHTOF(UI\detach_ca.paa);
                };
            };
        };
    };

    class All;
    class ACE_IR_Strobe_Effect: All {
        scope = 1;
        displayName = "IR Strobe";
        model = "\A3\Weapons_F\empty.p3d";
        simulation = "nvmarker";

        class NVGMarker {
            diffuse[]={0.015,0.015,0.015};
            ambient[]={0.001,0.001,0.001};
            brightness=0.45;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {1,0.1};
        };

        side = 7;//-1=NO_SIDE yellow box,3=CIV grey box,4=NEUTRAL yellow box,6=FRIENDLY green box,7=LOGIC no radar signature
        accuracy = 1000;
        cost = 0;
        armor = 500;
        threat[] = {0,0,0};
        nameSound = "";
        type = 0;
        weapons[] = {};
        magazines[] = {};
        nvTarget = 1;
        destrType = "DestructNo";
        brightness = 10;
    };
    class ACE_IR_Strobe_one_Effect: All {
        scope = 1;
        displayName = "IR Strobe";
        model = "\A3\Weapons_F\empty.p3d";
        simulation = "nvmarker";

        class NVGMarker {
            diffuse[]={0.015,0.015,0.015};
            ambient[]={0.001,0.001,0.001};
            brightness=0.45;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {1,0.1};
        };

        side = 7;//-1=NO_SIDE yellow box,3=CIV grey box,4=NEUTRAL yellow box,6=FRIENDLY green box,7=LOGIC no radar signature
        accuracy = 1000;
        cost = 0;
        armor = 500;
        threat[] = {0,0,0};
        nameSound = "";
        type = 0;
        weapons[] = {};
        magazines[] = {};
        nvTarget = 1;
        destrType = "DestructNo";
        brightness = 10;
    };
    class ACE_IR_Strobe_one_medium_Effect:ACE_IR_Strobe_one_Effect{
        brightness = 5;
        class NVGMarker {
            diffuse[]={0.003,0.003,0.003};
            ambient[]={0.005,0.005,0.005};
            brightness=0.2;
            name = "pozicni blik";
            activeLight = 1;
            blinking=1;
            dayLight = 1;
            onlyInNvg = 0;
            useFlare = 0;
            blinkingPattern[] = {1,0.1};
        };
    };
    class ACE_IR_Strobe_one_low_Effect:ACE_IR_Strobe_one_Effect{
        brightness = 2;
        class NVGMarker {
            diffuse[]={0.0015,0.0015,0.0015};
            ambient[]={0.0001,0.0001,0.0001};
            brightness=0.1;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {1,0.1};
        };
    };
    
    class ACE_IR_Strobe_two_Effect: All {
        scope = 1;
        displayName = "IR Strobe";
        model = "\A3\Weapons_F\empty.p3d";
        simulation = "nvmarker";

        class NVGMarker {
            diffuse[]={0.015,0.015,0.015};
            ambient[]={0.001,0.001,0.001};
            brightness=0.45;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {1,0.1,0.1,0.1};
        };

        side = 7;//-1=NO_SIDE yellow box,3=CIV grey box,4=NEUTRAL yellow box,6=FRIENDLY green box,7=LOGIC no radar signature
        accuracy = 1000;
        cost = 0;
        armor = 500;
        threat[] = {0,0,0};
        nameSound = "";
        type = 0;
        weapons[] = {};
        magazines[] = {};
        nvTarget = 1;
        destrType = "DestructNo";
        brightness = 10;
    };
    class ACE_IR_Strobe_two_medium_Effect:ACE_IR_Strobe_two_Effect{
        brightness = 5;
        class NVGMarker {
            diffuse[]={0.003,0.003,0.003};
            ambient[]={0.005,0.005,0.005};
            brightness=0.2;
            name = "pozicni blik";
            activeLight = 1;
            blinking=1;
            dayLight = 1;
            onlyInNvg = 0;
            useFlare = 0;
            blinkingPattern[] = {1,0.1,0.1,0.1};
        };
    };
    class ACE_IR_Strobe_two_low_Effect:ACE_IR_Strobe_two_Effect{
        brightness = 2;
        class NVGMarker {
            diffuse[]={0.0015,0.0015,0.0015};
            ambient[]={0.0001,0.0001,0.0001};
            brightness=0.1;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {1,0.1,0.1,0.1};
        };
    };

    
    class ACE_IR_Strobe_three_Effect: All {
        scope = 1;
        displayName = "IR Strobe";
        model = "\A3\Weapons_F\empty.p3d";
        simulation = "nvmarker";

        class NVGMarker {
            diffuse[]={0.015,0.015,0.015};
            ambient[]={0.001,0.001,0.001};
            brightness=0.45;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.1,0.1,0.1};
        };

        side = 7;//-1=NO_SIDE yellow box,3=CIV grey box,4=NEUTRAL yellow box,6=FRIENDLY green box,7=LOGIC no radar signature
        accuracy = 1000;
        cost = 0;
        armor = 500;
        threat[] = {0,0,0};
        nameSound = "";
        type = 0;
        weapons[] = {};
        magazines[] = {};
        nvTarget = 1;
        destrType = "DestructNo";
        brightness = 10;
    };

    class ACE_IR_Strobe_three_medium_Effect:ACE_IR_Strobe_three_Effect {
        brightness = 5;
        class NVGMarker {
            diffuse[]={0.003,0.003,0.003};
            ambient[]={0.005,0.005,0.005};
            brightness=0.2;
            name = "pozicni blik";
            activeLight = 1;
            blinking=1;
            dayLight = 1;
            onlyInNvg = 0;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.1,0.1,0.1};
        };
    };

    class ACE_IR_Strobe_three_low_Effect: ACE_IR_Strobe_three_Effect {
        brightness = 2;
        class NVGMarker {
            diffuse[]={0.0015,0.0015,0.0015};
            ambient[]={0.0001,0.0001,0.0001};
            brightness=0.1;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.1,0.1,0.1};
        };
    };

    

    
    class ACE_IR_Strobe_four_Effect: All {
        scope = 1;
        displayName = "IR Strobe";
        model = "\A3\Weapons_F\empty.p3d";
        simulation = "nvmarker";

        class NVGMarker {
            diffuse[]={0.015,0.015,0.015};
            ambient[]={0.001,0.001,0.001};
            brightness=0.45;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.2,0.7,0.1,0.1,0.1};
        };

        side = 7;//-1=NO_SIDE yellow box,3=CIV grey box,4=NEUTRAL yellow box,6=FRIENDLY green box,7=LOGIC no radar signature
        accuracy = 1000;
        cost = 0;
        armor = 500;
        threat[] = {0,0,0};
        nameSound = "";
        type = 0;
        weapons[] = {};
        magazines[] = {};
        nvTarget = 1;
        destrType = "DestructNo";
        brightness = 10;
    };

    class ACE_IR_Strobe_four_medium_Effect:ACE_IR_Strobe_four_Effect {
        brightness = 5;
        class NVGMarker {
            diffuse[]={0.003,0.003,0.003};
            ambient[]={0.005,0.005,0.005};
            brightness=0.2;
            name = "pozicni blik";
            activeLight = 1;
            blinking=1;
            dayLight = 1;
            onlyInNvg = 0;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.2,0.7,0.1,0.1,0.1};
        };
    };

    class ACE_IR_Strobe_four_low_Effect: ACE_IR_Strobe_four_Effect {
        brightness = 2;
        class NVGMarker {
            diffuse[]={0.0015,0.0015,0.0015};
            ambient[]={0.0001,0.0001,0.0001};
            brightness=0.1;
            name = "pozicni blik";
            activeLight = 0;
            blinking=1;
            dayLight = 0;
            onlyInNvg = 1;
            useFlare = 0;
            blinkingPattern[] = {0.7,0.2,0.7,0.2,0.7,0.1,0.1,0.1};
        };
    };

    

    class NATO_Box_Base;
    class Box_NATO_Support_F: NATO_Box_Base {
        class TransportItems {
            MACRO_ADDITEM(ACE_IR_Strobe_Item,12);
        };
    };

    class EAST_Box_Base;
    class Box_East_Support_F: EAST_Box_Base {
        class TransportItems {
            MACRO_ADDITEM(ACE_IR_Strobe_Item,12);
        };
    };

    class IND_Box_Base;
    class Box_IND_Support_F: IND_Box_Base {
        class TransportItems {
            MACRO_ADDITEM(ACE_IR_Strobe_Item,12);
        };
    };

    class FIA_Box_Base_F;
    class Box_FIA_Support_F: FIA_Box_Base_F {
        class TransportItems {
            MACRO_ADDITEM(ACE_IR_Strobe_Item,12);
        };
    };

    class ACE_Box_Misc: Box_NATO_Support_F {
        class TransportItems {
            MACRO_ADDITEM(ACE_IR_Strobe_Item,12);
        };
    };
};
