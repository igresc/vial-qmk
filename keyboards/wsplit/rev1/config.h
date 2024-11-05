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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x3060
#define DEVICE_VER      0x0001
#define MANUFACTURER    igresc
#define PRODUCT         SergoSplit

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_PINS { D3, D2, D4, C6, E6, B4, B5}

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
// #define SOFT_SERIAL_PIN D0
#define SOFT_SERIAL_PIN D1

// FUNCIONA!!!!!!! Needed for clone pro micro to work with split setup
#define SPLIT_USB_DETECT

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

#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0

/* ws2812 RGB LED */
// #define RGB_DI_PIN D7
// #define RGBLED_NUM 14   // Number of LEDs
// // #define RGBLIGHT_LIMIT_VAL 128
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_SPLIT
// #define RGBLIGHT_SLEEP
// #define RGBLED_SPLIT { 7, 7 }
// #define RGBLIGHT_LAYERS
// #define RGBLIGHT_LED_MAP { 0, 1, 2, 3, 4, 5, 6, 13, 12, 11, 10, 9, 8, 7}

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

#define TAPPING_TERM 200
#define TAPPING_TOGGLE 2
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
