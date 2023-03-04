
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

#define _CM 0
#define _NM 1
#define _QW 2
#define _LO 3
#define _RA 4
#define _FN 5
#define _AD 6
#define _GL 7
#define _GH 8
#define _ML 9
#define _MH 10
#define _NP 11
#define _OS 12

// Left-hand home row mods
#define A_LGUI LGUI_T(KC_A)
#define R_LALT LALT_T(KC_R)
#define S_LSFT LSFT_T(KC_S)
#define T_LCTL LCTL_T(KC_T)

// Right-hand home row mods
#define N_LCTL RCTL_T(KC_N)
#define E_RSFT RSFT_T(KC_E)
#define I_LALT LALT_T(KC_I)
#define O_RGUI RGUI_T(KC_O)

// QWERTY home row mods
#define S_LALT LALT_T(KC_S)
#define D_LSFT LSFT_T(KC_D)
#define F_LCTL LCTL_T(KC_F)
#define J_LCTL RCTL_T(KC_J)
#define K_RSFT RSFT_T(KC_K)
#define L_LALT LALT_T(KC_L)
#define SCLN_RGUI RGUI_T(KC_SCLN)

// Layer toggle + backspace/enter
#define L_DN LT(_LO, KC_BSPC)
#define L_UP LT(_RA, KC_ENT)
#define SPC_FN LT(_FN, KC_SPC)


#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

#define COMBO_COUNT 4
