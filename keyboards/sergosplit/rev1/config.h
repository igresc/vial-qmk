/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_PINS { D3, D2, D4, C6, E6, B4, B5}

// FUNCIONA!!!!!!! Needed for clone pro micro to work with split setup
//#define SPLIT_USB_DETECT

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)


/* ws2812 RGB LED */
#define WS2812_DI_PIN D7
#define RGBLED_NUM 14   // Number of LEDs
// // #define RGBLIGHT_LIMIT_VAL 128
#define RGBLIGHT_SPLIT
#define RGBLIGHT_SLEEP
#define RGBLED_SPLIT { 7, 7 }
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4, 5, 6, 13, 12, 11, 10, 9, 8, 7}
#define RGBLIGHT_MAX_LAYERS 8

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

// Prevent normal rollover on alphas from accidentally triggering mods.
// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define TAPPING_FORCE_HOLD
// #define PREVENT_STUCK_MODIFIERS
#define FORCE_NKRO

// Apply the modifier on keys that are tapped during a short hold of a modtap
//#define PERMISSIVE_HOLD
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define LAYER_STATE_8BIT
