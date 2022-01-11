#include QMK_KEYBOARD_H

#define SFT_A       LSFT_T(KC_A)
#define CTL_Z       LCTL_T(KC_Z)
#define GUI_X       LGUI_T(KC_X)
#define ALT_C       LALT_T(KC_C)
#define AGR_V       ALGR_T(KC_V)

#define FN1_B       LT(1, KC_B)
#define FN2_N       LT(2, KC_N)

#define SFT_SPC     LSFT_T(KC_SPC)
#define CTL_ENT     LCTL_T(KC_ENT)
#define GUI_DOT     LGUI_T(KC_DOT)
#define ALT_COMM    LALT_T(KC_COMM)

#define FN_LAYER    OLS(3)

// Program:
// make 40percentclub/gherkin:johan
// reset keyboard (check DFU bootloader available with lsusb)
// then as root:
// dfu-programmer atmega32u4 erase --force
// dfu-programmer atmega32u4 flash 40percentclub_gherkin_johan.hex
// dfu-programmer atmega32u4 reset

// Also, it's rotated 180 degrees
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // DEFAULT LAYER
  [0] = LAYOUT_ortho_3x10(
    CTL_ENT, GUI_DOT, ALT_COMM,KC_M,    FN2_N,   FN1_B,   AGR_V,   ALT_C,   GUI_X,   CTL_Z,
    SFT_SPC, KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_D,    KC_S,    SFT_A,
    KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q
  ),

  // FN1 (Left FN key)
  [1] = LAYOUT_ortho_3x10(
    _______, _______, _______, _______, XXXXXXX, XXXXXXX, KC_RALT, KC_LALT, KC_LGUI, KC_LCTL,
    _______, KC_RIGHT,KC_UP,   KC_DOWN, KC_LEFT, _______, _______, _______, _______, KC_LSFT,
    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1
  ),

  // FN2 (Right FN key)
  [2] = LAYOUT_ortho_3x10(
    KC_MUTE, KC_VOLU, KC_VOLD, XXXXXXX, XXXXXXX, KC_BSPC, KC_RALT, KC_LALT, KC_LGUI, KC_LCTL,
    _______, KC_END,  KC_PGUP, KC_PGDN, KC_HOME, KC_INS,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, OSL(3),  XXXXXXX, XXXXXXX
  ),

  // Fx/Special One-off layer (Right FN key + E)
  [3] = LAYOUT_ortho_3x10(
    TO(0),   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI, KC_LCTL,
    KC_F12,  KC_F11,  XXXXXXX, XXXXXXX, XXXXXXX, EEP_RST, DEBUG,   RESET,   KC_PSCR, KC_LSFT,
    KC_F10,  KC_F9,   KC_F8,   KC_F7,   KC_F6,   KC_F5,   KC_F4,   KC_F3,   KC_F2,   KC_F1
  )
};

void keyboard_pre_init_user(void) {
}

void led_set_user(uint8_t usb_led) {
}

const uint16_t PROGMEM backspace_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM delete_combo[] = {KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM escape_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {SFT_A, KC_S, COMBO_END};
const uint16_t PROGMEM shift_tab_combo[] = {SFT_A, KC_D, COMBO_END};

const uint16_t PROGMEM backslash_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM pipe_combo[] = {KC_S, KC_F, COMBO_END};
const uint16_t PROGMEM dash_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM underscore_combo[] = {KC_D, KC_G, COMBO_END};
const uint16_t PROGMEM equal_combo[] = {KC_F, KC_G, COMBO_END};
const uint16_t PROGMEM plus_combo[] = {KC_F, KC_H, COMBO_END};
const uint16_t PROGMEM colon_combo[] = {KC_H, KC_J, COMBO_END};
const uint16_t PROGMEM semicolon_combo[] = {KC_H, KC_K, COMBO_END};
const uint16_t PROGMEM singlequote_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM doublequote_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM slash_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM question_combo[] = {KC_K, SFT_SPC, COMBO_END};

const uint16_t PROGMEM backtick_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM tilde_combo[] = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_E, KC_T, COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_Y, KC_I, COMBO_END};
const uint16_t PROGMEM lcbr_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_U, KC_O, COMBO_END};

const uint16_t PROGMEM n1_combo[] = {KC_Q, KC_S, COMBO_END};
const uint16_t PROGMEM n2_combo[] = {KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM n3_combo[] = {KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM n4_combo[] = {KC_R, KC_G, COMBO_END};
const uint16_t PROGMEM n5_combo[] = {KC_T, KC_H, COMBO_END};
const uint16_t PROGMEM n6_combo[] = {KC_Y, KC_G, COMBO_END};
const uint16_t PROGMEM n7_combo[] = {KC_U, KC_H, COMBO_END};
const uint16_t PROGMEM n8_combo[] = {KC_I, KC_J, COMBO_END};
const uint16_t PROGMEM n9_combo[] = {KC_O, KC_K, COMBO_END};
const uint16_t PROGMEM n0_combo[] = {KC_P, KC_L, COMBO_END};

const uint16_t PROGMEM f1_combo[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM f2_combo[] = {KC_W, KC_S, COMBO_END};
const uint16_t PROGMEM f3_combo[] = {KC_E, KC_D, COMBO_END};
const uint16_t PROGMEM f4_combo[] = {KC_R, KC_F, COMBO_END};
const uint16_t PROGMEM f5_combo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM f6_combo[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM f9_combo[] = {KC_U, KC_J, COMBO_END};
const uint16_t PROGMEM f10_combo[] = {KC_I, KC_K, COMBO_END};
const uint16_t PROGMEM f11_combo[] = {KC_O, KC_L, COMBO_END};
const uint16_t PROGMEM f12_combo[] = {KC_P, SFT_SPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(backspace_combo, KC_BSPC),
    COMBO(delete_combo, KC_DEL),
    COMBO(escape_combo, KC_ESC),
    COMBO(tab_combo, KC_TAB),
    COMBO(shift_tab_combo, S(KC_TAB)),

    COMBO(backslash_combo, KC_BSLS),
    COMBO(pipe_combo, KC_PIPE),
    COMBO(dash_combo, KC_MINS),
    COMBO(underscore_combo, KC_UNDS),
    COMBO(equal_combo, KC_EQL),
    COMBO(plus_combo, KC_PLUS),
    COMBO(colon_combo, KC_COLN),
    COMBO(semicolon_combo, KC_SCLN),
    COMBO(singlequote_combo, KC_QUOT),
    COMBO(doublequote_combo, KC_DQT),
    COMBO(slash_combo, KC_SLSH),
    COMBO(question_combo, KC_QUES),

    COMBO(backtick_combo, KC_GRV),
    COMBO(tilde_combo, KC_TILD),
    COMBO(lprn_combo, KC_LPRN),
    COMBO(rprn_combo, KC_RPRN),
    COMBO(lbrc_combo, KC_LBRC),
    COMBO(rbrc_combo, KC_RBRC),
    COMBO(lcbr_combo, KC_LCBR),
    COMBO(rcbr_combo, KC_RCBR),

    COMBO(n1_combo, KC_1),
    COMBO(n2_combo, KC_2),
    COMBO(n3_combo, KC_3),
    COMBO(n4_combo, KC_4),
    COMBO(n5_combo, KC_5),
    COMBO(n6_combo, KC_6),
    COMBO(n7_combo, KC_7),
    COMBO(n8_combo, KC_8),
    COMBO(n9_combo, KC_9),
    COMBO(n0_combo, KC_0),

    COMBO(f1_combo, KC_F1),
    COMBO(f2_combo, KC_F2),
    COMBO(f3_combo, KC_F3),
    COMBO(f4_combo, KC_F4),
    COMBO(f5_combo, KC_F5),
    COMBO(f6_combo, KC_F6),
    COMBO(f9_combo, KC_F9),
    COMBO(f10_combo, KC_F10),
    COMBO(f11_combo, KC_F11),
    COMBO(f12_combo, KC_F12),
};
