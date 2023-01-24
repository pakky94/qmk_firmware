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
    _NM,
    _LOWER,
    _RAISE,
    _AD,
    _GL,
    _GH,
    _ML,
    _MH,
    _MT,
    _OS,
    _NP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ortho_4x12(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    _______, _______, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,    _______, _______, KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______, _______, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
        _______, _______, _______, _______, L_UP,    KC_SPC,  KC_SPC,  L_DN,    _______, _______, _______, _______
    ),
    [_NM] = LAYOUT_ortho_4x12(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_A,    KC_R,    KC_S,    KC_T,    _______, _______, _______, _______, KC_N,    KC_E,    KC_I,    KC_O,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_LOWER] = LAYOUT_ortho_4x12(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR,
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, KC_F12,  _______, _______, _______, CW_TOGG,
        _______, _______, _______, _______, _______, TO(0),   TO(0),   _______, _______, _______, _______, _______
    ),
    [_RAISE] = LAYOUT_ortho_4x12(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_GRV,  KC_BSPC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_ESC,  KC_TAB,  KC_GRV,  KC_QUOT, KC_DEL,  _______, _______, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC,
        KC_DEL,  KC_RALT,KC_TILD,S(KC_QUOT),_______, _______, _______, KC_PIPE, KC_HOME, KC_END,  KC_PGUP, KC_PGDN,
        _______, _______, _______, TO(_ML), _______, OSL(_OS),OSL(_OS),_______, TO(_GL), _______, _______, _______
    ),
    [_AD] = LAYOUT_ortho_4x12(
        QK_BOOT, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, KC_UP,   _______, _______,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, BL_TOGG, BL_DOWN, BL_UP,   BL_BRTG, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY,
        TO(0),   _______, _______, _______, _______, TO(0),   TO(0),   _______, _______, _______, _______, _______
    ),
    [_GL] = LAYOUT_ortho_4x12(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ESC,  _______, _______, KC_UP,   _______, _______,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, KC_TAB,  MO(_GH), _______, _______, _______, _______, _______, _______, _______
    ),
    [_GH] = LAYOUT_ortho_4x12(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    _______, _______, _______, KC_UP,   _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, _______, _______, TO(0),   TO(0),   _______, _______, _______, _______, _______
    ),
    [_ML] = LAYOUT_ortho_4x12(
        KC_WH_U, KC_BTN1, KC_UP,   KC_BTN2, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
        KC_BTN3, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,
        TO(0),   _______, _______, _______, MO(_MH), _______, _______, _______, _______, _______, _______, _______
    ),
    [_MH] = LAYOUT_ortho_4x12(
        _______, _______, KC_MS_U, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TO(0),   _______, _______, _______, _______, TO(0),   TO(0),   _______, _______, _______, _______, _______
    ),
    [_MT] = LAYOUT_ortho_4x12(
        KC_WH_U, KC_BTN1, KC_UP,   KC_BTN2, _______, _______, _______, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
        KC_BTN3, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_OS] = LAYOUT_ortho_4x12(
        _______, _______, _______, _______, _______, _______, _______, TO(_AD), TO(_GL), TO(_ML), TO(_NM), _______,
        CW_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, TO(_NP),
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, TO(0),   TO(0),   _______, _______, _______, _______, _______
    ),
    [_NP] = LAYOUT_ortho_4x12(
        KC_ESC,  _______, KC_UP,   _______, _______, _______, _______, KC_SLSH, KC_7,    KC_8,    KC_9,    KC_MINS,
        KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PLUS,
        _______, _______, _______, _______, _______, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    KC_ENT,
        _______, _______, _______, _______, _______, TO(0),   TO(0),   KC_DOT,  _______, _______, _______, _______
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _MT);
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(CAPS_INDICATOR_LED, CAPS_INDICATOR_COLOR);
    }

    if (layer_state_is(_AD)) {
        rgb_matrix_set_color(ADJUST_INDICATOR_LED, ADJUST_INDICATOR_COLOR);
    }

    if (layer_state_is(_GL)) {
        rgb_matrix_set_color(GAMING_INDICATOR_LED, GAMING_INDICATOR_COLOR);
    }

    if (layer_state_is(_ML)) {
        rgb_matrix_set_color(MOVEMENT_INDICATOR_LED, MOVEMENT_INDICATOR_COLOR);
    }

    if (layer_state_is(_NM)) {
        rgb_matrix_set_color(NOMODS_INDICATOR_LED, NOMODS_INDICATOR_COLOR);
    }

    return false;
}
