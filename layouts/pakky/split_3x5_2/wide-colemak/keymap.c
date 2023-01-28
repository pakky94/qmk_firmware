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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BS] = LAYOUT_split_3x5_2(
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                      KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
        HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,                      KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                      KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
                                            L_UP,    SPC_FN,  SPC_FN,  L_DN
    ),
    [_NM] = LAYOUT_split_3x5_2(
        _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
        KC_A,    KC_R,    KC_S,    KC_T,    _______,                   _______, KC_N,    KC_E,    KC_I,    KC_O,
        _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
                                            _______, KC_SPC,  KC_SPC,  _______
    ),
    [_LO] = LAYOUT_split_3x5_2(
        _______, _______, _______, _______, _______,                   KC_SLSH, KC_7,    KC_8,    KC_9,    KC_MINS,
        KC_ESC,  KC_TAB,  _______, _______, _______,                   KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PLUS,
        KC_DEL,  KC_RALT, CW_TOGG, _______, _______,                   KC_DOT,  KC_1,    KC_2,    KC_3,    KC_ENT,
                                            _______, TO(_BS), TO(_BS), KC_0
    ),
    [_RA] = LAYOUT_split_3x5_2(
        KC_UNDS, KC_PLUS, KC_LPRN, KC_RPRN, _______,                   KC_BSLS, KC_AMPR, KC_ASTR, _______, KC_GRV,
        KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, _______,                   KC_PIPE, KC_DLR,  KC_PERC, KC_CIRC, KC_QUOT,
        _______, KC_RALT, KC_LBRC, KC_RBRC, _______,                   KC_TILD, KC_EXLM, KC_AT,   KC_HASH, S(KC_QUOT),
                                            _______, OSL(_OS),OSL(_OS),_______
    ),
    [_FN] = LAYOUT_split_3x5_2(
        KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______,                   _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   _______, KC_F4,   KC_F5,   KC_F6,   KC_F11,
        _______, _______, _______, _______, _______,                   _______, KC_F1,   KC_F2,   KC_F3,   KC_F12,
                                            _______, _______, _______, _______
    ),
    [_AD] = LAYOUT_split_3x5_2(
        QK_BOOT, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,                   _______, _______, KC_UP,   _______, _______,
        _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,                   _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, BL_TOGG, BL_DOWN, BL_UP,   BL_BRTG,                   _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY,
                                            _______, TO(_BS), TO(_BS), _______
    ),
    [_GL] = LAYOUT_split_3x5_2(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                      _______, _______, KC_UP,   _______, _______,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,                      _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                      _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______
    ),
    [_GH] = LAYOUT_split_3x5_2(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      _______, _______, KC_UP,   _______, _______,
        _______, _______, _______, _______, _______,                   _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,
        _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
                                            _______, TO(_BS), TO(_BS), _______
    ),
    [_ML] = LAYOUT_split_3x5_2(
        KC_WH_U, KC_BTN1, KC_UP,   KC_BTN2, _______,                   KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______,
        KC_BTN3, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, _______,
        KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,                   KC_WH_D, KC_ACL0, KC_ACL1, KC_ACL2, _______,
                                            _______, _______, _______, _______
    ),
    [_MH] = LAYOUT_split_3x5_2(
        _______, _______, KC_MS_U, _______, _______,                   _______, _______, _______, _______, _______,
        _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,                   _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
                                            _______, TO(_BS), TO(_BS), _______
    ),
    [_OS] = LAYOUT_split_3x5_2(
        _______, _______, _______, _______, _______,                   TO(_AD), TO(_GL), TO(_ML), TO(_NM), _______,
        CW_TOGG, _______, _______, _______, _______,                   _______, _______, _______, _______, TO(_NP),
        KC_CAPS, _______, _______, _______, _______,                   _______, _______, _______, _______, _______,
                                            _______, TO(_BS), TO(_BS), _______
    ),
    [_NP] = LAYOUT_split_3x5_2(
        KC_ESC,  _______, KC_UP,   _______, _______,                   KC_SLSH, KC_7,    KC_8,    KC_9,    KC_MINS,
        KC_TAB,  KC_LEFT, KC_DOWN, KC_RGHT, _______,                   KC_ASTR, KC_4,    KC_5,    KC_6,    KC_PLUS,
        _______, _______, _______, _______, _______,                   KC_DOT,  KC_1,    KC_2,    KC_3,    KC_ENT,
                                            _______, TO(_BS), TO(_BS), KC_0
    )
};

#ifdef KEYBOARD_ymdk_ymd40_air40
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
#endif
