// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ a │ b │ c │ d │
     * ├───┼───┼───┼───┤
     * │ e │ f │ g │ h │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_2x4(
        KC_a,   KC_b,   KC_c,   KC_d,
        KC_e,   KC_f,   KC_g,   KC_h,
    )
};
