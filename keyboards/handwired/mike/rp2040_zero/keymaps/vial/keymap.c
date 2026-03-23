/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H
#include "keymap_swiss_de.h"
#include "sendstring_swiss_de.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        CH_1, CH_2,
        CH_3, CH_4
    ),

    [1] = LAYOUT(
        CH_A, CH_B,
        CH_C, CH_D
    )
};
