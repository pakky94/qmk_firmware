
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 5
#define MOUSEKEY_INITIAL_SPEED 150
#define MOUSEKEY_MOVE_DELTA 24
#define MOUSEKEY_DECELERATED_SPEED 600
#define MOUSEKEY_ACCELERATED_SPEED 4000

#define _BS 0
#define _NM 1
#define _LO 2
#define _RA 3
#define _FN 4
#define _AD 5
#define _GL 6
#define _GH 7
#define _ML 8
#define _MH 9
#define _OS 10
#define _NP 11

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

// Layer toggle + backspace/enter
#define L_UP LT(2, KC_BSPC)
#define L_DN LT(3, KC_ENT)
#define SPC_FN LT(4, KC_SPC)
