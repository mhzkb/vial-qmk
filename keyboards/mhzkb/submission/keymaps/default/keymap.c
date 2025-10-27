#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_3u(
        KC_Q,         KC_W,         KC_E,         KC_R,         KC_T, KC_Y, KC_U,         KC_I,         KC_O,         KC_P,
        LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G, KC_H, RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_CAPS),
        KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, KC_N, KC_M,                       KC_COMM,
        KC_ESC,                     KC_TAB,       KC_BSPC,                  KC_SPC,       KC_ENT,       KC_DOT,       KC_SLASH

    )
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}