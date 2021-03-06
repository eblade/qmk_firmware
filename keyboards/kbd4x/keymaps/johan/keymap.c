/* Copyright 2018 sevenseacat
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

#define ___ KC_TRNS

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  KBD4X = SAFE_RANGE,
  CS_LAMBDA,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// STANDARD
  [0] = LAYOUT_planck_mit(
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_ENTER,
    KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH, KC_QUOT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_RALT, MO(1),   LT(3, KC_SPACE),  MO(2),   KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT
  ),

// LOWER (LEFT)
  [1] = LAYOUT_planck_mit(
    KC_GRAVE, KC_1,    KC_2,   KC_3, KC_4, KC_5, KC_6,    KC_7,    KC_8,    KC_9,      KC_0,     ___,
    KC_TILDE, RGB_TOG, ___,    ___,  ___,  ___,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,  KC_MINUS, KC_EQL,
    ___,      KC_BSLS, KC_DEL, ___,  ___,  ___,  ___,     ___,    ___,      CS_LAMBDA, KC_MINUS, KC_INS,
    ___,      ___,     ___,    ___,  ___,  KC_SPACE,      ___,    KC_HOME,  KC_PGDN,   KC_PGUP,  KC_END
  ),

// UPPER (RIGHT)
  [2] = LAYOUT_planck_mit(
    KC_GRAVE, KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_F5, KC_F6, KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TILDE, KC_F5, KC_F6,  KC_F7,  KC_F8,  ___,   ___,   ___,     ___,     ___,     ___,     RESET,
    ___,      KC_F9, KC_F10, KC_F11, KC_F12, ___,   ___,   ___,     ___,     ___,     KC_MUTE, KC_MPLY,
    ___,      ___,   ___,    ___,    ___,    KC_SPACE,     ___,     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
  ),

// FUNCTION (SPACE)
  [3] = LAYOUT_planck_mit(
    KC_LCBR, KC_1, KC_2,    KC_3, KC_4, KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_RCBR,
    KC_LBRC, ___,  KC_PSCR, ___,  ___,  KC_LPRN, KC_RPRN, ___,     ___,     KC_LBRC,  KC_RBRC, KC_RBRC,
    KC_LPRN, ___,  KC_DEL,  ___,  ___,  ___,     ___,     ___,     ___,     ___,      ___,     KC_RPRN,
    ___,     ___,  ___,     ___,  ___,  ___,              ___,     ___,     ___,      ___,     ___
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case CS_LAMBDA:
        SEND_STRING("=>");
        return false;
    }
  }
  return true;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {
}
