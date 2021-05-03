class LandVehicle;
class StaticWeapon: LandVehicle {
    class ACE_Actions {
        class ACE_MainActions;
    };
};

// M2 Browning - High
class StaticMGWeapon: StaticWeapon {};
class vn_static_m2_high_base: StaticMGWeapon {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            selection = "mg1_otochlaven";
        };
    };

    class ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_m2_v_01);
        magazineLocation = "_target selectionPosition 'mg1_magazine'";
        disassembleWeapon = QGVAR(m2_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 100;
    };
};

// M2 Browning - Low
class vn_static_m2_low_base: vn_static_m2_high_base {
    class ACE_CSW: ACE_CSW {
        disassembleTurret = QEGVAR(csw,m3TripodLow);
    };
};

// M1919A6 - No tripod
class vn_static_m1919a6_base: vn_static_m2_low_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "";
            selection = "mg1_otochlaven_recoil";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_m1919_v_01);
        magazineLocation = "_target selectionPosition 'mg1_magazine'";
        disassembleTo = QGVAR(m1919A6_carry);
        disassembleWeapon = "";
        disassembleTurret = "";
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 250;
    };
};

// M1919A4 - High
class vn_static_m1919a4_high_base: vn_static_m1919a6_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "";
            selection = "mg1_otochlaven_recoil";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_m1919_v_01);
        magazineLocation = "_target selectionPosition 'mg1_magazine'";
        disassembleTo = "";
        disassembleWeapon = QGVAR(m1919A4_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 250;
    };
};

// M1919A4 - Low
class vn_static_m1919a4_low_base: vn_static_m1919a4_high_base {
    class ACE_CSW: ACE_CSW {
        disassembleTurret = QEGVAR(csw,m3TripodLow);
    };
};

// M60 - High
class vn_static_m60_high_base: vn_static_m2_low_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.15, 0.532, -1.06]";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_m60_v_01);
        magazineLocation = "_target selectionPosition 'mg1_trigger'";
        disassembleTo = "";
        disassembleWeapon = QGVAR(m60_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 250;
    };
};

// M60 - Low
class vn_static_m60_low_base: vn_static_m60_high_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.25, 0.15, -1.06]";
        };
    };

    class ACE_CSW: ACE_CSW {
        magazineLocation = "_target selectionPosition 'mg1_otochlaven_recoil'";
        disassembleTurret = QEGVAR(csw,m3TripodLow);
    };
};

// TOW
class vn_static_at3_base: StaticMGWeapon {};
class vn_static_tow_base: vn_static_at3_base {
    EGVAR(draggin,canCarry) = 0;

    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.22, 0.28, -0.85]";
        };
    };

    class ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_missile_tow_launcher);
        magazineLocation = "[-0.22, 0.28, -0.5]";
        disassembleWeapon = QGVAR(tow_carry);
        disassembleTurret = QEGVAR(csw,m220Tripod);
        ammoLoadTime = 8;
        ammoUnloadTime = 5;
        desiredAmmo = 1;
    };
};

// DShKM - High
class vn_static_dp28_high_base: vn_static_m2_high_base {};
class vn_static_dshkm_high_01_base: vn_static_dp28_high_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.15, 0.532, -1.06]";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_dshkm_v_01);
        magazineLocation = "_target selectionPosition 'mg1_boxmag'";
        disassembleWeapon = QGVAR(dshkm_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 50;
    };
};

// DShKM - High, with AA sight
class vn_static_dshkm_high_02_base: vn_static_dshkm_high_01_base {
    class ACE_CSW: ACE_CSW {
        disassembleWeapon = QGVAR(dshkm_AA_carry);
    };
};

// DShKM - Low, with shield
class vn_static_dshkm_low_01_base: vn_static_dshkm_high_01_base {
    EGVAR(draggin,canCarry) = 0;

    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.3, 0.75, -1]";
        };
    };

    class ACE_CSW: ACE_CSW {
        disassembleWeapon = QGVAR(dshkm_shield_carry);
        disassembleTurret = QEGVAR(csw,m3TripodLow);
    };
};

// DShKM - Low
class vn_static_dshkm_low_02_base: vn_static_dshkm_low_01_base {
    class ACE_CSW: ACE_CSW {
        disassembleWeapon = QGVAR(dshkm_carry);
    };
};

// RPD - High
class vn_static_dp28_high_base: vn_static_m2_high_base {};
class vn_static_rpd_high_base: vn_static_dp28_high_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.158, 0.745, -0.7]";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_rpd_v_01);
        magazineLocation = "_target selectionPosition 'mg1_otochlaven_recoil'";
        disassembleWeapon = QGVAR(rpd_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 100;
    };
};

// PK - High
class vn_static_pk_high_base: vn_static_rpd_high_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.156, 0.755, -1.05]";
        };
    };

    class ACE_CSW: ACE_CSW {
        enabled = 1;
        proxyWeapon = QGVAR(vn_pk_v_01);
        magazineLocation = "_target selectionPosition 'mg1_otochlaven_recoil'";
        disassembleWeapon = QGVAR(pk_carry);
        disassembleTurret = QEGVAR(csw,m3Tripod);
        ammoLoadTime = 10;
        ammoUnloadTime = 8;
        desiredAmmo = 100;
    };
};

// PK - Low
class vn_static_pk_low_base: vn_static_pk_high_base {
    class ACE_Actions: ACE_Actions {
        class ACE_MainActions: ACE_MainActions {
            position = "[-0.35, 0.43, -0.9]";
        };
    };

    class ACE_CSW: ACE_CSW {
        disassembleTurret = QEGVAR(csw,m3TripodLow);
    };
};