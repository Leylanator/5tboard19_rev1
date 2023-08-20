//home/leyla/Pictures/Screenshot_20230819_193005.png/ Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │   │   │ W │   │ A │ Y │ U │ I │ O │← ←│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ A │ S │ D │ D │ H │ J │ K │ L │ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │   │   │   │Ctl│ W │   │   │   │   │   │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x10(
        KC_NO,    KC_NO,    KC_W,    KC_NO,    KC_A,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_D,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_ENT,
        KC_NO,    KC_NO,    KC_NO,    KC_LCTL,    KC_W,    KC_NO,    KC_NO,    KC_NO, KC_NO,  KC_NO
    )
};
