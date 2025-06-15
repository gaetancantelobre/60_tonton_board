// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


#define KC_FR_Q KC_A
#define KC_FR_E KC_E 
#define KC_FR_I KC_I 
#define KC_FR_SEMICOLON KC_M 
#define KC_FR_O KC_O 
#define KC_FR_P KC_P 
#define KC_FR_A KC_Q 
#define KC_FR_R KC_R 
#define KC_FR_S KC_S 
#define KC_FR_T KC_T 
#define KC_FR_U KC_U 
#define KC_FR_Z KC_W 
#define KC_FR_X KC_X 
#define KC_FR_Y KC_Y 
#define KC_FR_W KC_Z 

#define KC_FR_AMP KC_1 
#define KC_FR_EACU KC_2 
#define KC_FR_QUOT KC_3 
#define KC_FR_APOS KC_4 
#define KC_FR_LPRN KC_5 
#define KC_FR_MINS KC_6 
#define KC_FR_EGRV KC_7 
#define KC_FR_UNDS KC_8 
#define KC_FR_CCED KC_9 
#define KC_FR_AGRV KC_0 

#define KC_FR_RPRN KC_MINS 
#define KC_FR_EQL KC_EQL  
#define KC_FR_CIRC KC_LBRC 
#define KC_FR_DLR KC_RBRC 
#define KC_FR_ASTR KC_BSLS 
#define KC_FR_M KC_SCLN 
#define KC_FR_UGRV KC_QUOT 
#define KC_FR_SUP2 KC_GRV  
#define KC_FR_COMMA KC_COMM 
#define KC_FR_DOT KC_DOT  
#define KC_FR_LABK KC_NUBS  

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_FR_AMP, KC_FR_EACU, KC_FR_QUOT, KC_FR_APOS, KC_FR_LPRN, KC_FR_MINS, KC_FR_EGRV, KC_FR_UNDS, KC_FR_CCED, KC_FR_AGRV, KC_FR_RPRN, KC_FR_EQL,  KC_BSPC,
        KC_TAB,  KC_FR_A, KC_FR_Z, KC_FR_E, KC_FR_R, KC_FR_T, KC_FR_Y, KC_FR_U, KC_FR_I, KC_FR_O, KC_FR_P, KC_FR_CIRC, KC_FR_DLR,  KC_ENT,
        KC_CAPS, KC_FR_Q, KC_FR_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_FR_M, KC_FR_UGRV, KC_FR_ASTR, KC_NO,
        KC_LSFT,KC_NUBS , KC_FR_W, KC_FR_X, KC_C, KC_V, KC_B, KC_N, KC_FR_SEMICOLON, KC_FR_COMMA, KC_FR_DOT, KC_SLASH, KC_NO,KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO,  KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,KC_NO,   KC_ALGR,  MO(1),  KC_RCTL, KC_RCTL
    ),

    [1] = LAYOUT(
        KC_ESC,  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BSPC,
        KC_TAB,  KC_FR_A, KC_FR_Z, KC_FR_E, KC_FR_R, KC_FR_T, KC_FR_Y, KC_FR_U, KC_FR_I, KC_FR_O, KC_FR_P, KC_FR_CIRC, KC_FR_DLR,  KC_ENT,
        KC_CAPS, KC_FR_Q, KC_FR_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_FR_M, KC_FR_UGRV, KC_FR_ASTR, KC_NO,
        KC_LSFT,KC_NUBS , KC_FR_W, KC_FR_X, KC_C, KC_V, KC_B, KC_N, KC_FR_SEMICOLON, KC_FR_COMMA, KC_FR_DOT, KC_SLASH, KC_RSFT,KC_NO,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO,  KC_NO,   KC_NO,   KC_SPC,  KC_NO,   KC_NO,KC_NO,   KC_ALGR,  MO(1),  KC_RCTL, KC_RCTL
    )

};
