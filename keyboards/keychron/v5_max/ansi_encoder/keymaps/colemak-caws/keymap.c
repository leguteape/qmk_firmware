/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_98(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,     KC_MPLY,     KC_MNXT,     KC_MUTE,     KC_VOLD,  KC_VOLU,            KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_BSLS,  KC_7,        KC_8,        KC_9,        KC_0,        KC_EQL,   KC_CAPS,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,        KC_U,        KC_Y,        KC_QUOT,     KC_MINS,  KC_SCLN,            KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_BSPC,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,        KC_E,        KC_I,        KC_O,                  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_SLSH,  KC_K,        KC_H,        KC_COMM,     KC_DOT,                KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                       MO(MAC_FN),  KC_RCMMD,    KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT          ),

    [MAC_FN] = LAYOUT_ansi_98(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,   KC_F12,             NK_TOGG,  BAT_LVL,  RGB_RMOD, RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,     _______,     _______,     _______,     _______,  RGB_TOG,            _______,  _______,  _______,  _______,
        _______,  KC_INS,   KC_HOME,  KC_UP,    KC_END,   KC_PGUP,  _______,  KC_WH_U,  KC_MS_BTN1,  KC_MS_UP,    KC_MS_BTN2,  _______,     _______,  _______,            _______,  _______,  _______,  _______,
        _______,  KC_DEL,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  _______,  KC_WH_D,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT, KC_MS_BTN3,            _______,            _______,  _______,  _______,
        _______,            KC_ESC,   KC_MCTRL, KC_SNAP,  _______,  _______,  KC_WH_L,  KC_WH_R,     KC_MS_BTN4,  _______,     KC_MS_BTN5,            _______,  RGB_SAI,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                      _______,     _______,     _______,  RGB_HUI,  RGB_SAD,  RGB_HUD,  _______,  _______          ),

    [WIN_BASE] = LAYOUT_ansi_98(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,   KC_F12,             KC_DEL,   KC_HOME,  KC_END,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_BSLS,  KC_7,        KC_8,        KC_9,        KC_0,        KC_EQL,   KC_CAPS,            KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,     KC_LBRC,  KC_J,     KC_L,        KC_U,        KC_Y,        KC_QUOT,     KC_MINS,  KC_SCLN,            KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_BSPC,  KC_A,     KC_R,     KC_S,     KC_T,     KC_G,     KC_RBRC,  KC_M,     KC_N,        KC_E,        KC_I,        KC_O,                  KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_X,     KC_C,     KC_D,     KC_V,     KC_Z,     KC_SLSH,  KC_K,        KC_H,        KC_COMM,     KC_DOT,                KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LALT,  KC_LWIN,                                KC_SPC,                                       MO(WIN_FN),  KC_RALT,     KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT          ),

    [WIN_FN] = LAYOUT_ansi_98(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,     KC_MPLY,     KC_MNXT,     KC_MUTE,     KC_VOLD,  KC_VOLU,            NK_TOGG,  BAT_LVL,  RGB_RMOD, RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,     _______,     _______,     _______,     _______,  RGB_TOG,            _______,  _______,  _______,  _______,
        _______,  KC_INS,   KC_HOME,  KC_UP,    KC_END,   KC_PGUP,  _______,  KC_WH_U,  KC_MS_BTN1,  KC_MS_UP,    KC_MS_BTN2,  _______,     _______,  _______,            _______,  _______,  _______,  _______,
        _______,  KC_DEL,   KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_PGDN,  _______,  KC_WH_D,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT, KC_MS_BTN3,            _______,            _______,  _______,  _______,
        _______,            KC_ESC,   KC_APP,   KC_PSCR,  _______,  _______,  KC_WH_L,  KC_WH_R,     KC_MS_BTN4,  _______,     KC_MS_BTN5,            _______,  RGB_SAI,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                      _______,     _______,     _______,  RGB_HUI,  RGB_SAD,  RGB_HUD,  _______,  _______          ),
 };

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
