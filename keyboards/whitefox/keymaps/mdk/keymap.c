/*
Copyright 2021 Khoa Mai <mdk194@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

enum whitefox_layers {
  _QWERTY,
  _FUNC,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |GRV|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| |Backs|Ins|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|Del|
     * |---------------------------------------------------------------|
     * | ESC |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Alt |Gui |Ctrl |         Space         |Ctrl |FN0|  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
    [_QWERTY] = KEYMAP( \
      KC_GRV,         KC_1,   KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,   KC_0,   KC_MINS,KC_EQL, KC_NO, KC_BSPC, KC_INS, \
      KC_TAB,         KC_Q,   KC_W,    KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,        KC_DEL, \
      LALT_T(KC_ESC), KC_A,   KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,   KC_SCLN,KC_QUOT,KC_NO,  KC_ENT,         KC_PGUP,\
      KC_LSPO,        KC_NO,  KC_Z,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_RSPC,        KC_UP,  KC_PGDN,\
      KC_LALT,        KC_LGUI,KC_LCTL,                 KC_SPC,             KC_RCTL,MO(_FUNC),KC_NO,          KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    /* Function
     * ,----------------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |    |
     * |----------------------------------------------------------------|
     * |     |  |MS_U|   |   |   |   |BTN1|BTN3|BTN2|   |   |   |    |  |
     * |----------------------------------------------------------------|
     * |     |MS_L|MS_D|MS_R|   |   |   |   |   |   |   |   |       |   |
     * |----------------------------------------------------------------|
     * |    |   |   |   |   |   |   |   |   |   |   |   |     |VOLU|    |
     * |----------------------------------------------------------------|
     * |    |    |    |                |    |    |    |  |MPRV|VOLD|MNXT|
     * `----------------------------------------------------------------'
     */
    [_FUNC] = KEYMAP( \
      KC_NO,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,KC_NO,KC_NO,KC_NO,\
      KC_NO,KC_NO,KC_MS_U,KC_NO,KC_NO,KC_NO,KC_NO,KC_BTN1,KC_BTN3,KC_BTN2,KC_NO,KC_NO,KC_NO,KC_NO,        KC_NO,\
      KC_NO,KC_MS_L,KC_MS_D,KC_MS_R,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,        KC_HOME,\
      KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,        KC_VOLU, KC_END,\
      KC_NO,KC_NO,KC_NO,                   KC_NO,                     KC_NO,KC_NO,KC_NO,        KC_MPRV,KC_VOLD,KC_MNXT \
    ),
};
