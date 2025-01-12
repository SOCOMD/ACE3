#define COMPONENT medical_feedback
#define COMPONENT_BEAUTIFIED Medical Feedback
#include "\z\ace\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MEDICAL_FEEDBACK
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MEDICAL_FEEDBACK
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MEDICAL_FEEDBACK
#endif

#include "\a3\ui_f\hpp\defineCommonGrids.inc"
#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

#define EMPTY_SOUND {"A3\Sounds_F\dummysound.wss",1,1}
#define NAMESPACE_NULL locationNull

#define DISABLE_VANILLA_SCREAMS
#define DISABLE_VANILLA_MOANS
#define DISABLE_VANILLA_HEARTBEAT
#define DISABLE_VANILLA_BLOOD_TEXTURES
#define DISABLE_VANILLA_DAMAGE_EFFECTS

#define FX_PAIN_FADE_IN   0.3
#define FX_PAIN_FADE_OUT  0.7
#define FX_PNEUMO_FADE_IN  0.7
#define FX_PNEUMO_FADE_OUT  1.5
#define FX_UNCON_FADE_IN  2.0
#define FX_UNCON_FADE_OUT 5.0

#define SND_HEARBEAT_FAST   (selectRandom ["ACE_heartbeat_fast_1", "ACE_heartbeat_fast_2", "ACE_heartbeat_fast_3"])
#define SND_HEARBEAT_NORMAL (selectRandom ["ACE_heartbeat_norm_1", "ACE_heartbeat_norm_2"])
#define SND_HEARBEAT_SLOW   (selectRandom ["ACE_heartbeat_slow_1", "ACE_heartbeat_slow_2"])
#define SND_FRACTURE        (selectRandom ["ACE_fracture_1", "ACE_fracture_2", "ACE_fracture_3", "ACE_fracture_4"])

#define VOL_UNCONSCIOUS 0.25

#define FX_PAIN_WHITE_FLASH 0
#define FX_PAIN_PULSATING_BLUR 1
#define FX_PAIN_CHROMATIC_ABERRATION 2
#define FX_PAIN_ONLY_BASE 3

#define FX_BLOODVOLUME_COLOR_CORRECTION 0
#define FX_BLOODVOLUME_ICON 1
#define FX_BLOODVOLUME_BOTH 2

#define ICON_BLOODVOLUME_IDX_MIN 0
#define ICON_BLOODVOLUME_IDX_MAX 6
#define ICON_BLOODVOLUME_PATH(num) format [QPATHTOF(data\bloodVolume_%1.paa), num]
#define ICON_BLOODVOLUME_COLOR_NONE [0, 0, 0, 0]
#define ICON_BLOODVOLUME_COLOR_WHITE [1, 1, 1, 1]
#define ICON_BLOODVOLUME_COLOR_ORANGE [1, 0.6, 0, 1]
#define ICON_BLOODVOLUME_COLOR_RED [0.8, 0.2, 0, 1]

#define ICON_TOURNIQUET_PATH QPATHTOF(data\tourniquet.paa)
#define ICON_PNEUMO_PATH QPATHTOF(data\pneumo.paa)
#define ICON_SPLINT_PATH QPATHTOF(data\splint.paa)
#define ICON_FRACTURE_PATH QPATHTOF(data\fracture.paa)
