#include QMK_KEYBOARD_H
#include "keymap_spanish.h"
// #include "wsplit.h"
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layers {
    BASE  // default layer
    // GAME,
    // VLR,
    // SYMB,  // symbols
};

// enum my_keycodes {
//   FOO = SAFE_RANGE,
// };

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

#define LOWSPC LT(_LOWER, KC_SPC)
#define RAISPC LT(_RAISE, KC_SPC)
#define HYPER HYPR(KC_NO)
#define META MEH(KC_NO)
#define CTRLT MT(MOD_LCTL, KC_TAB)
#define LOWERESC MT(MOD_HYPR, KC_ESC)
#define SWSPC MT(SH_MON, KC_SPC)

// Fillers to make layering more clear
// #define _______ KC_TRNS
// #define XXXXXXX KC_NO
// #define ZZZZZZZ KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Neo
 * ,-----------------------------------------------------------------------------------.
 * |  SH  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  SH  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | TAB  |   X  |   V  |   L  |   C  |   W  |   K  |   H  |   G  |   F  |   Q  | ENTER|
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | ESC  |   U  |   I  |   A  |   E  |   O  |   S  |   N  |   R  |   T  |   D  |  Y   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |SHIFT |   =  |   -  |   /  |   P  |   Z  |   B  |   M  |   N  |   ,  |   .  | SHIFT|
 * `-----------------------------------------------------------------------------------'
 *                      | GAME | BKSP |  NAV | SPEC | SPC  |  NUM |
 *                      `-----------------------------------------`
*/

[BASE] = LAYOUT_orthocustom(
  // left hand                                                                                 //RIGHT HAND

  ES_MORD,     KC_1,        KC_2,       KC_3,        KC_4,       KC_5,       ES_LCBR,           ES_RCBR,      KC_6,          KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
  KC_TAB,      KC_Q,        KC_W,       KC_E,        KC_R,       KC_T,       ES_LPRN,           ES_RPRN,      KC_Y,          KC_U,       KC_I,       KC_O,       KC_P,       ES_CCED,
  KC_ESC,      KC_A,        KC_S,       KC_D,        KC_F,       KC_G,       ES_LBRC,           ES_RBRC,      KC_H,          KC_J,       KC_K,       KC_L,       ES_NTIL,    ES_ACUT,
  KC_LSFT,     KC_Z,        KC_X,       KC_C,        KC_V,       KC_B,                                        KC_N,          KC_M,       KC_COMM,    KC_DOT,     ES_MINS,    ES_GRV,
  KC_LCTRL,    KC_LGUI,     KC_LALT,    KC_LEFT,     KC_LALT,    KC_HOME,    TG(VLR),           KC_0,         KC_END,        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_SPACE,
                                        KC_SPACE,    KC_DEL,     TG(GAME),   KC_DEL,            KC_CAPS,      TT(SYMB),      KC_BSPC,    KC_ENTER

),
};

// [SYMB] = LAYOUT_orthocustom(
//   // left hand                                                                                 //RIGHT HAND

//   KC_ESC,      KC_F1,       KC_F2,         KC_F3,       KC_F4,    KC_F5,       XXXXXXX,         XXXXXXX,      KC_F6,     KC_F7,    KC_F8,    KC_F9,    KC_F10,         KC_F11,
//   _______,     ES_EXLM,     ES_AT,         ES_HASH,     ES_PIPE,  ES_QUOT,     ES_LPRN,         _______,      _______,   KC_KP_7,     KC_KP_8,     KC_KP_9,     ES_ASTR,        KC_F12,
//   _______,     ES_LABK,     ES_RABK,       ES_EURO,     ES_TILD,  ES_BSLS,     ES_LBRC,         _______,      ES_MINS,   KC_KP_4,     KC_KP_5,     KC_KP_6,     ES_PLUS,        XXXXXXX,
//   _______,     ES_IQUE,     ES_QUES,       _______,     _______,  KC_B,        KC_NO,           KC_NO,        _______,   KC_KP_1,     KC_KP_2,     KC_KP_3,     ES_MINS,        XXXXXXX,
//   _______,     KC_LGUI,     KC_LALT,       KC_LEFT,     _______,  KC_HOME,     RESET,           _______,      _______,   KC_0,     _______,  KC_DOT,   KC_KP_SLASH,    XXXXXXX,
//   KC_NO,       KC_NO,       KC_NO,         KC_SPACE,    KC_DEL,   KC_NUMLOCK,  KC_DEL,          _______,      KC_TRNS,   KC_BSPC,  KC_ENTER, KC_EQL,   KC_NO,          KC_NO
// ),


// [GAME] = LAYOUT_orthocustom(
//   // left hand                                                                                 //RIGHT HAND

//   ES_MORD,     KC_1,        KC_2,       KC_3,        KC_4,       KC_5,       KC_MPLY,           ES_RCBR,      KC_6,          KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
//   KC_TAB,      KC_Q,        KC_W,       KC_E,        KC_R,       KC_T,       KC_PAUSE,          ES_RPRN,      KC_Y,          KC_U,       KC_I,       KC_O,       KC_P,       ES_CCED,
//   KC_ESC,      KC_A,        KC_S,       KC_D,        KC_F,       KC_G,       ES_LBRC,           ES_RBRC,      KC_H,          KC_J,       KC_K,       KC_L,       ES_NTIL,    ES_ACUT,
//   KC_LSFT,     KC_Z,        KC_X,       KC_C,        KC_V,       KC_B,       ZZZZZZZ,           ZZZZZZZ,      KC_N,          KC_M,       KC_COMM,    KC_DOT,     ES_MINS,    ES_GRV,
//   KC_LCTRL,    KC_LGUI,     KC_LALT,    KC_LEFT,     KC_RGHT,    KC_HOME,    RESET,             RESET,        KC_END,        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_SPACE,
//   ZZZZZZZ,     ZZZZZZZ,     ZZZZZZZ,    KC_SPACE,    KC_DEL,     TG(GAME),   KC_DEL,            KC_CAPS,      KC_TRNS,      KC_BSPC,    KC_ENTER,   ZZZZZZZ,    ZZZZZZZ,    ZZZZZZZ

// ),

// [VLR] = LAYOUT_orthocustom(
//   // left hand                                                                                 //RIGHT HAND

//   ES_MORD,     KC_1,        KC_2,       KC_3,        KC_4,       KC_5,       KC_MPLY,           ES_RCBR,      KC_6,          KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
//   KC_TAB,      KC_Q,        KC_W,       KC_E,        KC_R,       KC_T,       KC_PAUSE,          ES_RPRN,      KC_Y,          KC_U,       KC_I,       KC_O,       KC_P,       ES_CCED,
//   KC_ESC,      KC_A,        KC_S,       KC_D,        KC_F,       KC_G,       ES_LBRC,           ES_RBRC,      KC_H,          KC_J,       KC_K,       KC_L,       ES_NTIL,    ES_ACUT,
//   KC_LSFT,     KC_Z,        KC_X,       KC_C,        KC_V,       KC_B,       ZZZZZZZ,           ZZZZZZZ,      KC_N,          KC_M,       KC_COMM,    KC_DOT,     ES_MINS,    ES_GRV,
//   KC_LCTRL,    KC_LGUI,     XXXXXXX,    XXXXXXX,     XXXXXXX,    KC_HOME,    TG(VLR),           XXXXXXX,      KC_END,        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_SPACE,
//   ZZZZZZZ,     ZZZZZZZ,     ZZZZZZZ,    KC_SPACE,    KC_DEL,     TG(GAME),   KC_DEL,            KC_CAPS,      KC_TRNS,      KC_BSPC,    KC_ENTER,   ZZZZZZZ,    ZZZZZZZ,    ZZZZZZZ

// ),
// };

// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 1, HSV_RED},       // Light first led from left hand
//     {13, 1, HSV_RED}       // Light last led from right hand
// );

// const rgblight_segment_t PROGMEM num_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 1, HSV_GREEN},       // Light first led from left hand
//     {13, 1, HSV_GREEN}       // Light last led from right hand
// );

// const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 14, 185, 240, 255}
// );

// const rgblight_segment_t PROGMEM symb_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 14, HSV_BLUE}
// );

// const rgblight_segment_t PROGMEM game_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 14, HSV_RED}
// );

// const rgblight_segment_t PROGMEM vlr_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {0, 14, HSV_GREEN}
// );

// const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     base_layer,
//     game_layer,
//     vlr_layer,
//     symb_layer,
//     num_lock_layer,
//     my_capslock_layer
// );

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // switch (keycode) {
//     //     case KC_LSHIFT:
//     //         shift_held = record->event.pressed;
//     //         return true;
//     //         break;
//     //     case
//     // }
//     return true;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(5, led_state.caps_lock);

//     if (IS_LAYER_ON(SYMB)) {
//         rgblight_set_layer_state(4, led_state.num_lock);
//     } else {
//         rgblight_set_layer_state(4, false);
//     }

//     return true;
// }

// layer_state_t default_layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(0, layer_state_cmp(state, BASE));
//     return state;
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(3, layer_state_cmp(state, SYMB));
//     rgblight_set_layer_state(1, layer_state_cmp(state, GAME));
//     rgblight_set_layer_state(2, layer_state_cmp(state, VLR));
//     return state;
// }


// // Runs just one time when the keyboard initializes.
// void keyboard_post_init_user(void) {
//     rgblight_layers = my_rgb_layers;
//     default_layer_state_set_user(0);

//     //debug_enable=true;
//     //debug_matrix=true;
//     //debug_keyboard=true;
//     //debug_mouse=true;
// }
