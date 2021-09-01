class Display3DEN {
    class ContextMenu: ctrlMenu {
        class Items {
            class Socomd_Arsenal {
                items[]= {"aceSocomdArsenal", "virtualArsenal"};
            };
            class virtualArsenal {
                text = "BI Virtual Socomd_Arsenal";
                action = QUOTE(['Socomd_Arsenal'] call bis_fnc_3DENEntityMenu);
                value = 0;
                data = "Socomd_Arsenal";
                opensNewWindow = 1;
            };
            class aceSocomdArsenal: virtualArsenal {
                text = "ACE Socomd_Arsenal";
                action = QUOTE(call DFUNC(open3DEN));
            };
        };
    };
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {QGVAR(portVALoadouts)};
                };
                class GVAR(portVALoadouts) {
                    text = CSTRING(portLoadoutsText);
                    picture = QPATHTOEF(common,data\logo_ace3_ca.paa);
                    action = QUOTE(call DFUNC(portVALoadouts););
                };
            };
        };
    };
};
