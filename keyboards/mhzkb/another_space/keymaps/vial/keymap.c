// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───────────┬───┬───┬───┬───┬───┐
     * │ Q │ W │ E │ R │ T               Y │ U │ I │ O │ P │
     * ├───┼───┼───┼───┼───┼───────────┼───┼───┼───┼───┼───┤
     * │ A │ S │ D │ F │ G               H │ J │ K │ L │ BS│
     * ├───┼───┼───┼───┼───┼───────────┼───┼───┼───┼───┼───┤
     * │ Z │ X │ C │ V │ B               N │ M │ , │ . │ / │
     * ├───┼───┼───┼───┼───┼───────────┼───┼───┼───┼───┼───┤
     * │GUI│CTL│SFT│ALT│       SPACE       │TAB│ENT│DEL│ESC│
     * └───┴───┴───┴───┴───┴───────────┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x11(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_SPC,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_SPC,  KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LGUI, KC_LCTL, KC_LSFT, KC_LALT, XXXXXXX, KC_SPC,  XXXXXXX, KC_TAB,  KC_ENT,  KC_DEL,  KC_ESC
    )
};

#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};

#endif

