// NAVI keyboard layout by JonasKlueser
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_CAPS,    KC_F1,      KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_CLEAR,
        KC_GRV,     KC_1,       KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,       KC_0,       KC_MINUS,    KC_EQUAL,     KC_BACKSPACE,
        KC_TAB,     KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,   KC_Z,   KC_U,   KC_I,   KC_O,       KC_P,       KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,    KC_ENTER,
        KC_ESC,     KC_A,       KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,       KC_SEMICOLON,    KC_QUOTE,    KC_NONUS_HASH,
        KC_LSFT,    KC_BSLS,    KC_Y,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMMA,    KC_DOT,     KC_SLASH,    KC_UP,      KC_INSERT,
        KC_LWIN,    KC_LALT,    KC_LCTL,            KC_SPACE,                             KC_RIGHT_ALT,    KC_RIGHT_CTRL,    KC_LEFT,    KC_DOWN,    KC_RIGHT
    )

};
