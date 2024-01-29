/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define CTL_Z       LCTL_T(KC_Z)
#define CTL_ENT     LCTL_T(KC_ENT)
#define ALT_X       LALT_T(KC_X)
#define ALT_DOT     LALT_T(KC_DOT)
#define FN1_BSPC    LT(1, KC_BSPC)
#define FN2_TAB     LT(2, KC_TAB)
#define FN3_ESC     LT(3, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_LBRC,                      KC_RBRC,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_EQL,                       KC_SCLN,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      CTL_Z,   ALT_X,   KC_C,    KC_V,    KC_B,   KC_BSLS,                      KC_SLSH,  KC_N,    KC_M,   KC_COMM,  ALT_DOT, CTL_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         FN3_ESC, KC_LGUI, KC_LSFT,   FN1_BSPC, KC_RALT, FN2_TAB
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_HOME,                      KC_END,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_INS,  KC_DEL, KC_PGUP,  KC_PGDN, KC_MINUS,                    KC_COLON,KC_LEFT, KC_DOWN,  KC_UP,  KC_RIGHT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV,                      KC_DEL,  XXXXXXX, XXXXXXX, _______, _______, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC, _______, _______,    KC_BSPC,  _______, KC_TAB
                                      //`--------------------------'  `--------------------------'

  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, KC_VOLD, KC_VOLU, KC_MUTE,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC, _______, _______,    KC_BSPC,  _______, KC_TAB
                                      //`--------------------------'  `--------------------------'

  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______,    KC_7,    KC_8,    KC_9,KC_MINUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      KC_COLON,   KC_4,    KC_5,    KC_6, KC_PLUS, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                         KC_0,    KC_1,    KC_2,    KC_3, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC, _______, _______,    KC_BSPC,  _______, KC_TAB
                                      //`--------------------------'  `--------------------------'
  )
};

//const uint16_t PROGMEM escape_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM backtick_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM tilde_combo[] = {KC_W, KC_R, COMBO_END};

const uint16_t PROGMEM lprn_combo[] = {KC_LBRC, KC_T, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {KC_LBRC, KC_R, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_RBRC, KC_Y, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_RBRC, KC_U, COMBO_END};

const uint16_t PROGMEM plus_combo[] = {KC_EQL, KC_G, COMBO_END};
const uint16_t PROGMEM minus_combo[] = {KC_EQL, KC_F, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {KC_EQL, KC_D, COMBO_END};
const uint16_t PROGMEM colon_combo[] = {KC_SCLN, KC_H, COMBO_END};
const uint16_t PROGMEM quote_combo[] = {KC_SCLN, KC_J, COMBO_END};
const uint16_t PROGMEM double_quote__combo[] = {KC_SCLN, KC_K, COMBO_END};

const uint16_t PROGMEM pipe_combo[] = {KC_BSLS, KC_B, COMBO_END};
const uint16_t PROGMEM question_combo[] = {KC_SLSH, KC_N, COMBO_END};

const uint16_t PROGMEM f1_combo[] = {KC_Q, KC_A, COMBO_END};
const uint16_t PROGMEM f2_combo[] = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM f3_combo[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM f4_combo[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM f5_combo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM f6_combo[] = {KC_LBRC, KC_EQL, COMBO_END};
const uint16_t PROGMEM f7_combo[] = {KC_RBRC, KC_SCLN, COMBO_END};
const uint16_t PROGMEM f8_combo[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM f9_combo[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM f10_combo[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM f11_combo[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM f12_combo[] = {KC_P, KC_SPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
//    COMBO(escape_combo, KC_ESC),
    COMBO(backtick_combo, KC_GRV), // `
    COMBO(tilde_combo, KC_TILD), // ~

    COMBO(lprn_combo, KC_LPRN), // (
    COMBO(lcbr_combo, KC_LCBR), // {
    COMBO(rprn_combo, KC_RPRN), // )
    COMBO(rcbr_combo, KC_RCBR), // }

    COMBO(plus_combo, KC_PLUS), // +
    COMBO(minus_combo, KC_MINUS), // -
    COMBO(underscore_combo, KC_UNDERSCORE), // _
    COMBO(colon_combo, KC_COLON), // :
    COMBO(quote_combo, KC_QUOTE), // '
    COMBO(double_quote__combo, KC_DOUBLE_QUOTE), // "

    COMBO(pipe_combo, KC_PIPE), // |
    COMBO(question_combo, KC_QUESTION), // ?

    COMBO(f1_combo, KC_F1),
    COMBO(f2_combo, KC_F2),
    COMBO(f3_combo, KC_F3),
    COMBO(f4_combo, KC_F4),
    COMBO(f5_combo, KC_F5),
    COMBO(f6_combo, KC_F6),
    COMBO(f7_combo, KC_F7),
    COMBO(f8_combo, KC_F8),
    COMBO(f9_combo, KC_F9),
    COMBO(f10_combo, KC_F10),
    COMBO(f11_combo, KC_F11),
    COMBO(f12_combo, KC_F12),
};
