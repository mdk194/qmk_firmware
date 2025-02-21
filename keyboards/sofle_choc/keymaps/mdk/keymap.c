/* Copyright 2023 Brian Low
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

const uint16_t PROGMEM combo_up[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM combo_enter[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo_down[] = {KC_M, KC_COMMA, COMBO_END};

const uint16_t PROGMEM combo_pgup[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_pgdn[] = {KC_C, KC_V, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_up, KC_UP),
    COMBO(combo_enter, KC_ENT),
    COMBO(combo_down, KC_DOWN),
    COMBO(combo_pgup, KC_PGUP),
    COMBO(combo_pgdn, KC_PGDN),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,------------------------------------------------.                    ,------------------------------------------------.
 * |  `          |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |     Bspc    |
 * |-------------+------+------+------+------+------|                    |------+------+------+------+------+-------------|
 * | LT(2, Tab)  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |   LT(2, \)  |
 * |-------------+------+------+------+------+------|                    |------+------+------+------+------+-------------|
 * | LAlt_T(Esc) |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  LAtl_T(')  |
 * |-------------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+-------------|
 * |   LS (      |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |    RS )     |
 * `------------------------------------------------/       /    \       \------------------------------------------------'
 *            | LCTL | LGUI |LGui_T(`)|LCtl_T(BSPC)|LT(1, [)/    \LT(1, ])|RCtl_T(SPC)| RGui_T(-) | RGUI | RCTL |
 *            `--------------------------------------------'     '----------------------------------------------'
 */
  [0] = LAYOUT(
      KC_GRV    ,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_BSPC,
   LT(2, KC_TAB),   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    LT(2,KC_BSLS),
  LALT_T(KC_ESC),   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, LALT_T(KC_QUOT),
      SC_LSPO   ,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_MUTE,   KC_MPLY,  KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,
     KC_LCTL, KC_LGUI, LGUI_T(KC_GRV), LCTL_T(KC_BSPC), LT(1, KC_LBRC),  LT(1, KC_RBRC), RCTL_T(KC_SPC), RGUI_T(KC_MINS), KC_RGUI, KC_RCTL
  ),
/*
 * QWERTY
 * ,------------------------------------------------.                    ,------------------------------------------------.
 * |  `          |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |     Bspc    |
 * |-------------+------+------+------+------+------|                    |------+------+------+------+------+-------------|
 * | ~           |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  +          |
 * |-------------+------+------+------+------+------|                    |------+------+------+------+------+-------------|
 * | LAlt_T(Esc) |   1  |   2  |   3  |   4  |   5  |-------.    ,-------|   6  |   7  |   8  |   9  |   0  |  =          |
 * |-------------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+-------------|
 * |   LS (      |   F1 |  F2  |  F3  |  F4  |  F5  |-------|    |-------|  F6  |   F7 |  F8  |  F9  |  F10 |    RS )     |
 * `------------------------------------------------/       /    \       \------------------------------------------------'
 *            | LCTL | LGUI |LGui_T(`)|LCtl_T(BSPC)|LT(1, [)/    \LT(1, ])|RCtl_T(SPC)| RGui_T(-) | RGUI | RCTL |
 *            `--------------------------------------------'     '----------------------------------------------'
 */
  [1] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
      _______,    KC_1,    KC_2,    KC_3,   KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,  _______,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
                        _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______
  ),
/*
 * QWERTY
 * ,----------------------------------------------------.                    ,-----------------------------------------------.
 * |  `          |    1  |   2   |   3   |   4  |   5   |                    |   6  |   7  |   8  |   9  |   0  |     Bspc   |
 * |-------------+-------+-------+-------+------+-------|                    |------+------+------+------+------+------------|
 * | LT(2, Tab)  |   _  |KC_WSCH|MS_BTN5|MS_BTN4|  _    |                    |MS_WHLL|MS_WHLD|MS_WHLU|MS_WHLR|MS_BTN1|KC_PGUP|
 * |-------------+------+--------+------+-------+-------|                    |-------+------+------+------+------+-----------|
 * | LAlt_T(Esc) |   _  |MS_BTN2|MS_BTN3|MS_BTN1|  _    |-------.    ,-------|KC_LEFT|KC_DOWN|KC_UP | KC_RGHT|MS_BTN3|KC_PGDN|
 * |-------------+------+--------+------+------+--------|  Mute |    | Pause |-------+-------+------+------+------+----------|
 * |   LS (      |   _  |KC_UNDO |KC_PSTE|KC_COPY|KC_CUT|-------|    |-------|MS_LEFT|MS_DOWN|MS_UP|MS_RGHT|MS_BTN2|KC_DEL   |
 * `---------------------------------------------------/       /     \       \-----------------------------------------------'
 *              | LCTL | LGUI |LGui_T(`)|LCtl_T(BSPC)|LT(1, [)/       \LT(1, ])|RCtl_T(SPC)| RGui_T(-) | RGUI | RCTL |
 *              `--------------------------------------------'        '----------------------------------------------'
 */
  [2] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, _______,
      _______, _______, KC_WSCH, MS_BTN5, MS_BTN4, _______,                    MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, MS_BTN1, KC_PGUP,
      _______, _______, MS_BTN2, MS_BTN3, MS_BTN1, _______,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, MS_BTN3, KC_PGDN,
      _______, _______, KC_UNDO, KC_PSTE, KC_COPY, KC_CUT , _______,  _______, MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, MS_BTN2, KC_DEL,
                        _______, _______, _______, _______, _______,  _______, _______,  _______,  _______, _______
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLR, MS_WHLL), ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
    [1] = { ENCODER_CCW_CW(MS_WHLR, MS_WHLL), ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
    [2] = { ENCODER_CCW_CW(MS_WHLR, MS_WHLL), ENCODER_CCW_CW(MS_WHLD, MS_WHLU) },
};
#endif

#ifdef SWAP_HANDS_ENABLE

__attribute__ ((weak))
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] =
    // The LAYOUT macro could work for this, but it was harder to figure out the
    // identity using it.

    // This is the identity layout.
/*
{ \
    { {0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0} }, \
    { {0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1} }, \
    { {0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2} }, \
    { {0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3} }, \
    { {0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4} }, \
    \
    { {0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5} }, \
    { {0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6} }, \
    { {0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7} }, \
    { {0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8} }, \
    { {0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9} }, \
};
*/

    // This is the mirror, q <-> p, w <-> o, etc...
{ \
 { {0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5} }, \
 { {0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6} }, \
 { {0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7} }, \
 { {0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8} }, \
 { {0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9} }, \
                                                     \
 { {0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0} }, \
 { {0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1} }, \
 { {0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2} }, \
 { {0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3} }, \
 { {0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4} }, \
};

#    ifdef ENCODER_MAP_ENABLE
const uint8_t PROGMEM encoder_hand_swap_config[NUM_ENCODERS] = {1, 0};
#    endif

#endif
