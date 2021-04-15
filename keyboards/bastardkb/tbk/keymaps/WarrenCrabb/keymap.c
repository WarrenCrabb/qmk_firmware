/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define BASE 0 // default layer
#define MODS 1 // nano layer
#define MDIA 2 // media keys


// // Define a type for as many tap dance states as you need
// typedef enum {
//     TD_NONE,
//     TD_UNKNOWN,
//     TD_SINGLE_TAP,
//     TD_SINGLE_HOLD,
//     TD_DOUBLE_TAP
// } td_state_t;

// typedef struct {
//     bool is_press_action;
//     td_state_t state;
// } td_tap_t;

// enum {
//     NPAD_LAYR, // Our custom tap dance key; add any other tap dance keys to this enum
// };

// // Declare the functions to be used with your tap dance key(s)

// // Function associated with all tap dances
// td_state_t cur_dance(qk_tap_dance_state_t *state);

// // Functions associated with individual tap dances
// void ql_finished(qk_tap_dance_state_t *state, void *user_data);
// void ql_reset(qk_tap_dance_state_t *state, void *user_data);



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base layer (QWERTY)

    ┌─────┬─────┬─────┬─────┬─────┬─────┐       ┌─────┬─────┬─────┬─────┬─────┬─────┐
    │  =  │  1  │  2  │  3  │  4  │  5  │       │  6  │  7  │  8  │  9  │  0  │  -  │
    ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
    │ TAB │  Q  │  W  │  E  │  R  │  T  │       │  Y  │  U  │  I  │  O  │  P  │  \  │
    ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
    │ ESC │  A  │  S  │  D  │  F  │  G  │       │  H  │  J  │  K  │  L  │  ;  │  '  │
    ├─────┼─────┼─────┼─────┼─────┼─────┤       ├─────┼─────┼─────┼─────┼─────┼─────┤
    │SFT/(│CTL/Z│  X  │  C  │  V  │  B  │       │  N  │  M  │  ,  │  .  │  /  │SFT/)│
    └─────┴─────┴─────┴─────┴─────┴─────┘       └─────┴─────┴─────┴─────┴─────┴─────┘
                      ┌─────┬─────┬─────┐       ┌─────┬─────┬─────┐
                      │ NUM │ SPC │ BSP │       │ DEL │ ENT │ DIR │
                      └─────┼─────┼─────┤       ├─────┼─────┼─────┘
                            │ GRV │ END │       │HOME │RALT │
                            └─────┴─────┘       └─────┴─────┘
*/

    [BASE] = LAYOUT_split_4x6_5(
    KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
//------------------------------------------------------------------------------------------------------------------//
    KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
//-----------------------------------------------------------------------------------------------------//
    KC_ESC,    KC_A,    KC_S,    KC_D,   KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
//-----------------------------------------------------------------------------------------------------//
    KC_LSPO,LCTL_T(KC_Z), LALT_T(KC_X),  KC_C,    KC_V,       KC_B,    KC_N,    KC_M, KC_COMM,  RALT_T(KC_DOT), RCTL_T(KC_SLSH),  KC_RSPC,
//------------------------------------------------------------------------------------------------------------------//
                          MO(MODS), KC_SPC, KC_BSPC,     KC_DEL,  KC_ENT,  MO(MDIA),
                                        XXXXXXX, KC_LGUI,     KC_RGUI, XXXXXXX

  ),

  [MODS] = LAYOUT_split_4x6_5(
     KC_F12,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,      KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
//-------------------------------------------------------------------------------------------------------------------//
     RESET, XXXXXXX, S(KC_F2), KC_LCBR, KC_RCBR, KC_VOLU,       XXXXXXX,    KC_7,   KC_8,   KC_9, KC_PMNS, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_GRV, KC_LBRC, KC_RBRC, KC_VOLD,         XXXXXXX,   KC_4,   KC_5,   KC_6, KC_PPLS, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY,       XXXXXXX,    KC_1,   KC_2,   KC_3, KC_PENT, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                               _______, _______, _______,      KC_MINS, KC_0, KC_DOT,
                                        RESET, _______,       _______, _______
  ),


  [MDIA] = LAYOUT_split_4x6_5(
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,			KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_HOME,   KC_UP,  KC_END, KC_VOLU,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,KC_RIGHT, KC_VOLD,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                               _______, _______, _______,       _______, _______, _______,
                                        _______, _______,       _______, RESET
  ),

};
/*
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, NPAD, MDIA, OTHR);
}
*/

// // Determine the current tap dance state
// td_state_t cur_dance(qk_tap_dance_state_t *state) {
//     if (state->count == 1) {
//         if (!state->pressed) return TD_SINGLE_TAP;
//         else return TD_SINGLE_HOLD;
//     } else if (state->count == 2) return TD_DOUBLE_TAP;
//     else return TD_UNKNOWN;
// }

// // Initialize tap structure associated with example tap dance key
// static td_tap_t ql_tap_state = {
//     .is_press_action = true,
//     .state = TD_NONE
// };

// // Functions that control what our tap dance key does
// void ql_finished(qk_tap_dance_state_t *state, void *user_data) {
//     ql_tap_state.state = cur_dance(state);
//     switch (ql_tap_state.state) {
//         case TD_SINGLE_TAP:
//             if (layer_state_is(MODS)) {
//                 // If already set, then switch it off
//                 layer_off(MODS);
//             } else {
//                 // If not already set, then switch the layer on
//                 set_oneshot_layer(MODS, ONESHOT_START);
//                 clear_oneshot_layer_state(ONESHOT_PRESSED);
//             }
//             break;
//         case TD_SINGLE_HOLD:
//             layer_on(MODS);
//             break;
//         case TD_DOUBLE_TAP:
//             // Check to see if the layer is already set
//             if (layer_state_is(MODS)) {
//                 // If already set, then switch it off
//                 layer_off(MODS);
//             } else {
//                 // If not already set, then switch the layer on
//                 layer_on(MODS);
//             }
//             break;
//         default:
//             break;
//     }
// }

// void ql_reset(qk_tap_dance_state_t *state, void *user_data) {
//     // If the key was held down and now is released then switch off the layer
//    switch (ql_tap_state.state) {
//         case TD_SINGLE_TAP:
//             break;
//         case TD_SINGLE_HOLD:
//             layer_off(MODS);
//             break;
//         default:
//             break;
//     }
//     ql_tap_state.state = TD_NONE;
// }

// // Associate our tap dance key with its functionality
// qk_tap_dance_action_t tap_dance_actions[] = {
//     [NPAD_LAYR] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ql_finished, ql_reset)
// };

// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {

//   switch (keycode) {
//     case KC_TRNS:
//     case KC_NO:
//       /* Always cancel one-shot layer when another key gets pressed */
//       if (record->event.pressed && is_oneshot_layer_active())
//       clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
//       return true;
//     case RESET:
//       /* Don't allow reset from oneshot layer state */
//       if (record->event.pressed && is_oneshot_layer_active()){
//         clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
//         return false;
//       }
//       return true;
//     default:
//       return true;
//   }
//   return true;
// }
