#include QMK_KEYBOARD_H

#define SFT_A       LSFT_T(KC_A)
#define CTL_Z       LCTL_T(KC_Z)
#define GUI_X       LGUI_T(KC_X)
#define ALT_C       LALT_T(KC_C)
#define AGR_V       ALGR_T(KC_V)

#define FN1_B       LT(1, KC_B)
#define FN2_N       LT(2, KC_N)

#define SFT_ESC     LSFT_T(KC_ESC)
#define CTL_SPC     LCTL_T(KC_SPC)
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
    CTL_SPC, GUI_DOT, ALT_COMM,KC_M,    FN2_N,   FN1_B,   AGR_V,   ALT_C,   GUI_X,   CTL_Z,
    SFT_ESC, KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_D,    KC_S,    SFT_A,
    KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q
  ),

  // FN1 (Left FN key)
  [1] = LAYOUT_ortho_3x10(
    KC_SLSH, KC_DOT,  KC_COMM, KC_QUOT, KC_DEL,  XXXXXXX, KC_RALT, KC_LALT, KC_LGUI, KC_LCTL,
    KC_ENT,  KC_RIGHT,KC_UP,   KC_DOWN, KC_LEFT, XXXXXXX, XXXXXXX, KC_GRV,  KC_BSLS, KC_LSFT,
    KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1
  ),

  // FN2 (Right FN key)
  [2] = LAYOUT_ortho_3x10(
    KC_MFFD, KC_VOLU, KC_VOLD, KC_MRWD, XXXXXXX, KC_BSPC, KC_RALT, KC_LALT, KC_LGUI, KC_LCTL,
    KC_TAB,  KC_SCLN, KC_COLN, KC_RCBR, KC_LCBR, KC_EQL,  KC_MINS, KC_RBRC, KC_LBRC, KC_LSFT,
    KC_RPRN, KC_LPRN, KC_PGUP, KC_PGDN, KC_END,  KC_HOME, KC_INS,  OSL(3),  KC_TILD, KC_GRV
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
