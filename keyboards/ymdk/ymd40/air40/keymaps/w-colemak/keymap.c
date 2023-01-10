/* Copyright 2021 James Young (@noroadsleft)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
    _GAMING_LO,
    _GAMING_HI,
    _MOVEMENT_LO,
    _MOVEMENT_HI,
    _MOVEMENT_TRANSIENT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_4x12(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_ESC,  KC_BSPC, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,    KC_TAB,  KC_QUOT, KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_LSFT, KC_ENT,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_CAPS, KC_LCTL, KC_LALT, KC_TAB,  L_UP,    KC_SPC,  KC_SPC,  L_DN,    KC_RALT, KC_DOWN, KC_UP,   KC_RGHT
    ),
    [_LOWER] = LAYOUT_ortho_4x12(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_TILD, KC_BSPC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_DEL,  KC_PIPE, KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,
        _______, _______, TO(4),   TO(6),   _______, _______, _______, _______, KC_MNXT,    KC_VOLD,    KC_VOLU, KC_MPLY
    ),
    [_RAISE] = LAYOUT_ortho_4x12(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_BSPC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_ESC,  KC_F2,   KC_GRV,  KC_QUOT, KC_DEL,  _______, _______, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_DEL,  KC_F8,  KC_TILD,S(KC_QUOT),_______, _______, _______, _______, KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, TO(3)
    ),
    [_ADJUST] = LAYOUT_ortho_4x12(
        QK_BOOT, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, KC_UP,   _______, _______,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, AG_NORM, AG_SWAP, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, BL_TOGG, BL_DOWN, BL_UP,   BL_BRTG, _______, _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_GAMING_LO] = LAYOUT_ortho_4x12(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, KC_UP,   _______, _______,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    AG_SWAP, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, KC_TAB,  MO(5),   _______, _______, _______, _______, _______, _______, _______
    ),
    [_GAMING_HI] = LAYOUT_ortho_4x12(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    _______, _______, _______, KC_UP,   _______, _______,
        _______, _______, _______, _______, _______, _______, AG_SWAP, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_MOVEMENT_LO] = LAYOUT_ortho_4x12(
        KC_WH_U, KC_BTN1, KC_UP,   KC_BTN2, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
        KC_BTN3, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,
        TO(0),   _______, _______, _______, MO(7),   _______, _______, _______, _______, _______, _______, _______
    ),
    [_MOVEMENT_HI] = LAYOUT_ortho_4x12(
        _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_MOVEMENT_TRANSIENT] = LAYOUT_ortho_4x12(
        KC_WH_U, KC_BTN1, KC_UP,   KC_BTN2, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
        KC_BTN3, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _MOVEMENT_TRANSIENT);
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(CAPS_INDICATOR_LED, CAPS_INDICATOR_COLOR);
    }

    if (layer_state_is(_ADJUST)) {
        rgb_matrix_set_color(ADJUST_INDICATOR_LED, ADJUST_INDICATOR_COLOR);
    }

    if (layer_state_is(_GAMING_LO)) {
        rgb_matrix_set_color(GAMING_INDICATOR_LED, GAMING_INDICATOR_COLOR);
    }

    if (layer_state_is(_MOVEMENT_LO)) {
        rgb_matrix_set_color(MOVEMENT_INDICATOR_LED, MOVEMENT_INDICATOR_COLOR);
    }

    return false;
}
