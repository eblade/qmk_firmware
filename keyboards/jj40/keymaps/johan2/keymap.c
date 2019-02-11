#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _SPACE  3
#define MSPACE LT(_SPACE, KC_SPACE)
#define _BL 4 // Backlight
// #define _ADJUST 3
#define TG_NKRO MAGIC_TOGGLE_NKRO


enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | -_   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  | =+   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |(Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |  '"  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |  GUI | Alt  | RAlt |Lower | Space|Space |Raise |   [  |   {  |  }   |  ]   |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12( \
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINUS, \
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_EQL, \
  KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT, \
  KC_LCTL, KC_LGUI, KC_LALT, KC_RALT, MO(_LOWER),MSPACE,MSPACE,  MO(_RAISE),   KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |  7   |  8   |  9   |  0   | Back |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   ~  |      | PrScr|      |      |      |   ,  |  4   |  5   |  6   |  \|  | Ret  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  \|  | Del  |      |      |      |   .  |  1   |  2   |  3   |   |  | Ins  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  0   | Home | PgDn | PgUp | End  |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12( \
  KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,  KC_BSPC, \
  KC_TILDE, _______, KC_PSCR, _______, _______, _______, KC_COMM,    KC_4,    KC_5,    KC_6,  KC_BSLS,  KC_ENTER, \
   _______, KC_BSLS,  KC_DEL, _______, _______, _______,  KC_DOT,    KC_1,    KC_2,    KC_3,  KC_PIPE,  KC_INS, \
   _______, _______, _______, _______, _______,  KC_SPC,  KC_SPC,    KC_0, KC_HOME, KC_PGDN,  KC_PGUP,  KC_END \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F9  | F10  | F11  | F12  |      |      |      |      |      | Mute | Play |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Lower |      |      |Raise | Prev | Vol- | Vol+ | Next |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12( \
  _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, \
  _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, _______, _______, _______, _______, _______, _______, _______, \
  _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, _______, _______, _______, _______, KC_MUTE, KC_MPLY, \
  _______, _______, _______, _______, _______,  KC_SPC,  KC_SPC, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT \
),

/* Space
 * ,-----------------------------------------------------------------------------------.
 * |   {  |  !   |  @   |   #  |  $   |  %   |   ^  |  &   |  *   |   (  |  )   |  }   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   [  |      |      |      |      |      |   (  |  )   |  [   |  ]   |      |  ]   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   (  |      |      |      |      |      |      |      |      |      |      |  )   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Lower |      |      |Raise | Left | Down | Up   | Right|
 * `-----------------------------------------------------------------------------------'
 */

[_SPACE] = LAYOUT_ortho_4x12( \
  KC_LCBR, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RCBR, \
  KC_LBRC, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, _______, KC_RBRC, \
  KC_LPRN, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RPRN, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT \
)

/* Adjust
 G = git
 M = mail
 * ,-----------------------------------------------------------------------------------.
 * | gAdd |gStash|      | const|      | Clog |      |      | Mstk | Mrad |Mgmail|      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | gPush|      |      | if() |      | Clog2|      |      |      |      |Mcity |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | gPull|      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Lower |      |      |Raise |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */


/* Empty
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |Lower |      |      |Raise |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
};

// Macro actions for each corresponding ID.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
      backlight_step();
#endif
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};

// Loop
void matrix_scan_user(void) {
  // Empty
};
