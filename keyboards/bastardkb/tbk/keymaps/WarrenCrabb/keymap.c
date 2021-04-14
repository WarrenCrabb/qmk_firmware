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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//------------------------------------------------------------------------------------------------------------------//
    KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
//-----------------------------------------------------------------------------------------------------//
    KC_ESC,KC_A,LALT_T(KC_S),LCTL_T(KC_D),LSFT_T(KC_F), KC_G,  KC_H,   RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), KC_SCLN, KC_QUOT,
//-----------------------------------------------------------------------------------------------------//
    KC_LSPO, KC_Z, RALT_T(KC_X),  KC_C,    KC_V,       KC_B,    KC_N,    KC_M, KC_COMM,  RALT_T(KC_DOT), KC_SLSH,  KC_RSPC,
//------------------------------------------------------------------------------------------------------------------//
           LT(1, KC_ESC), LT(2, KC_SPC), LT(3,KC_BSPC),      LT(6, KC_DEL), LT(5, KC_ENT),  LT(4, KC_TAB),
                                       XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX
  ),

  [1] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_7,   KC_8,   KC_9, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    XXXXXXX, KC_4,   KC_5,   KC_6, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_1,   KC_2,   KC_3, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                        LT(1,KC_ESC), XXXXXXX, XXXXXXX,      KC_MINS, KC_0, KC_PDOT,
                                       XXXXXXX, RESET,       XXXXXXX, XXXXXXX
  ),

  [2] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_PLUS, KC_AMPR, KC_ASTR, KC_LPRN, KC_MINS, KC_PIPE,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,       KC_GRV, KC_DLR, KC_PERC, KC_CIRC, KC_COLN, KC_DQT,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,       KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_QUES, KC_RPRN,
//-------------------------------------------------------------------------------------------------------------------//
                         XXXXXXX, LT(2, KC_SPC), XXXXXXX,       KC_UNDS, KC_EQL, KC_GT,
                                        XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX
  ),

  [3] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,       KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX, XXXXXXX,       KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                         XXXXXXX, XXXXXXX, LT(3,KC_BSPC),       KC_DEL, KC_ENT, KC_TAB,
                                        XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX
  ),


  [4] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_HOME,   KC_UP,  KC_END, KC_PGUP,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,KC_RIGHT, KC_PGDN,       XXXXXXX, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_INS,       XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                               XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, LT(4, KC_TAB),
                                        XXXXXXX, XXXXXXX,       RESET, XXXXXXX
  ),

  [5] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, S(KC_F2), KC_LCBR, KC_RCBR, XXXXXXX,     XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX,       XXXXXXX, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                               XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, LT(5,KC_ENT), XXXXXXX,
                                        XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX
  ),
  [6] = LAYOUT_split_4x6_5(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, KC_VOLD, KC_MPRV, KC_MNXT, KC_VOLU,       XXXXXXX, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX, KC_RALT, XXXXXXX, XXXXXXX,
//-------------------------------------------------------------------------------------------------------------------//
                               KC_MUTE, KC_MPLY, KC_MSTP,       LT(6,KC_DEL), XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX
  ),
};
