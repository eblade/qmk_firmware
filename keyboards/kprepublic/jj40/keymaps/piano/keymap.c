/* Copyright 2019
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

enum layers {
  _ALPHA1 = 0,
  _ALPHA2,
  _ALPHA3,
  _NUM,
  _FN,
  _SYM1,
  _SYM2,
  _SYM3,
};

#define NUM     OSL(_NUM)
#define ALPHA1  OSL(_ALPHA1)
#define ALPHA2  OSL(_ALPHA2)
#define ALPHA3  OSL(_ALPHA3)
#define FN      OSL(_FN)
#define SYM1    OSL(_SYM1)
#define SYM2    OSL(_SYM2)
#define SYM3    OSL(_SYM3)

#define TNUM     TO(_NUM)
#define TALPHA1  TO(_ALPHA1)
#define TALPHA2  TO(_ALPHA2)
#define TALPHA3  TO(_ALPHA3)
#define TFN      TO(_FN)
#define TSYM1    TO(_SYM1)
#define TSYM2    TO(_SYM2)
#define TSYM3    TO(_SYM3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_ALPHA1] = LAYOUT_planck_mit(
  KC_ESC,     KC_N,    KC_P,    KC_R, _______, QK_BOOT, _______, _______,    KC_T,    KC_I,    KC_O, KC_BSPC,
  KC_A, LCTL_T(KC_S), LGUI_T(KC_D), ALT_T(KC_E), _______, _______, _______, _______,
                                                       ALT_T(KC_H), RGUI_T(KC_J), RCTL_T(KC_K), RSFT_T(KC_L),
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,     NUM,  ALPHA2, _______,   LSFT_T(KC_SPC),    SYM1, _______, _______, _______
),
[_ALPHA2] = LAYOUT_planck_mit(
    KC_M,     KC_Q,    KC_W,    KC_Y, _______, _______, _______, _______,
                                                                 RALT(KC_Q), RALT(KC_W), RALT(KC_P),  KC_DEL,
  KC_Z, LCTL_T(KC_X), LGUI_T(KC_C), ALT_T(KC_V), _______, _______, _______, _______,
                                                       ALT_T(KC_F), RGUI_T(KC_G), RCTL_T(KC_U), RSFT_T(KC_B),
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,     NUM, TALPHA3, _______,   LSFT_T(KC_ENT),    SYM1, _______, _______, _______
),
[_ALPHA3] = LAYOUT_planck_mit(
    KC_M,     KC_Q,    KC_W,    KC_Y, _______, _______, _______, _______,
                                                                  RALT(KC_Q), RALT(KC_W), RALT(KC_P), KC_DEL,
  KC_Z, LCTL_T(KC_X), LGUI_T(KC_C), ALT_T(KC_V), _______, _______, _______, _______,
                                                       ALT_T(KC_F), RGUI_T(KC_G), RCTL_T(KC_U), RSFT_T(KC_B),
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,     NUM, TALPHA1, _______,   LSFT_T(KC_ENT),    SYM1, _______, _______, _______
),
[_NUM] = LAYOUT_planck_mit(
  _______,    KC_1,    KC_2,    KC_3, _______, _______, _______, _______,    KC_4,    KC_5,    KC_6, _______,
  KC_MINS, LCTL_T(KC_7), LGUI_T(KC_8), ALT_T(KC_9), _______, _______, _______, _______,
                                                        ALT_T(KC_0), RGUI_T(KC_DOT), RCTL_T(KC_COMM), KC_EQL,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,    TNUM, TALPHA1, _______,   LSFT_T(KC_SPC),      FN, _______, _______, _______
),
[_FN] = LAYOUT_planck_mit(
  _______,   KC_F1,   KC_F2,   KC_F3, _______, _______, _______, _______,   KC_F4,   KC_F5,   KC_F6, KC_VOLU,
  KC_LSFT, LCTL_T(KC_F7), LGUI_T(KC_F8), ALT_T(KC_F9), _______, _______, _______, _______,
                                                      ALT_T(KC_F10), RGUI_T(KC_F11), RCTL_T(KC_F12), KC_VOLD,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,     NUM, TALPHA1, _______,   LSFT_T(KC_MUTE),    TFN, _______, _______, _______
),
[_SYM1] = LAYOUT_planck_mit(
 KC_TILDE, KC_QUES, KC_LPRN, KC_RPRN, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_COLN, KC_ASTR,
  KC_TAB, LCTL_T(KC_SLSH), LGUI_T(KC_BSLS), ALT_T(KC_GRAVE), _______, _______, _______, _______,
                                                 ALT_T(KC_LBRC), RGUI_T(KC_RBRC), RCTL_T(KC_SCLN), S(KC_TAB),
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,    SYM3, TALPHA1, _______,             SYM2,   TSYM1, _______, _______, _______
),
[_SYM2] = LAYOUT_planck_mit(
  KC_EXLM, KC_PIPE,   KC_LT,   KC_GT, _______, _______, _______, _______, KC_QUOT,  KC_DQT, KC_PLUS, _______,
  KC_LSFT, KC_LCTL, KC_LGUI, KC_LALT, _______, _______, _______, _______, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,    SYM3, TALPHA1, _______,            TSYM2,    SYM1, _______, _______, _______
),
[_SYM3] = LAYOUT_planck_mit(
  _______,   KC_AT, KC_HASH,  KC_DLR, _______, _______, _______, _______, KC_AMPR, KC_PERC, KC_CIRC, _______,
  KC_LSFT, KC_LCTL, KC_LGUI, ALT_T(KC_INS), _______, _______, _______, _______,
                                                                    ALT_T(KC_HOME), KC_PGDN, KC_PGUP, KC_END,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______,   TSYM3, TALPHA1, _______,             SYM2,    SYM1, _______, _______, _______
)
};

//layer_state_t layer_state_set_user(layer_state_t state) {
//  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
//}
