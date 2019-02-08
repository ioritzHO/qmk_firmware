/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"
#include "keymap_es_es.h"

enum preonic_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _MOVE,
};

enum preonic_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  MOVE,
  BACKLIT
};

#define SPC_SFT MT(MOD_LSFT, KC_SPC)
#define MS_LCLK KC_MS_BTN1
#define MS_RCLK KC_MS_BTN2
#define MS_UP   KC_MS_UP
#define MS_DOWN KC_MS_DOWN
#define MS_LEFT KC_MS_LEFT
#define MS_RGHT KC_MS_RIGHT
#define MS_WHUP KC_MS_WH_UP
#define MS_WHDW KC_MS_WH_DOWN
#define KC_XWIN LALT(KC_F4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Ñ  |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   -  |Shift |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | Win  | Alt  | Move |Lower |Space(shift) |Raise | Move | Caps |Brite |Menu  |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_preonic_grid( \
  KC_ESC,  ES_1,    ES_2,    ES_3,    ES_4,    ES_5,    ES_6,    ES_7,    ES_8,    ES_9,    ES_0,    KC_DEL,  \
  KC_TAB,  ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,    ES_Y,    ES_U,    ES_I,    ES_O,    ES_P,    KC_BSPC, \
  KC_ESC,  ES_A,    ES_S,    ES_D,    ES_F,    ES_G,    ES_H,    ES_J,    ES_K,    ES_L,    ES_NN,   KC_ENT,  \
  KC_LSFT, ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,    ES_N,    ES_M,    ES_COMM, ES_DOT,  ES_MINS, KC_RSFT, \
  KC_LCTL, KC_LGUI, KC_LALT, MOVE,    LOWER,   SPC_SFT, SPC_SFT, RAISE,   MOVE,    KC_CAPS, BACKLIT, KC_APP   \
),

/* Rise
 * ,-----------------------------------------------------------------------------------.
 * |      |  F11 |  F12 |      |      |      |      |      |      |      |      |      |
 * ,-----------------------------------------------------------------------------------.
 * |  +   |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  "   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |  -   |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  @   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |  *   |   <  |   >  |   (  |   )  |   /  |   \  |   [  |   ]  |   {  |   }  |  %   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  /   |   =  |      | Move |Lower |Space(shift) | Rise | Move | Caps |      |  $   |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_preonic_grid( \
  XXXXXXX, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  ES_PLUS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  ES_QUOT, \
  ES_MINS, ES_1,    ES_2,    ES_3,    ES_4,    ES_5,    ES_6,    KC_7,    KC_8,    KC_9,    KC_0,    ES_AT,   \
  ES_ASTR, ES_LESS, ES_GRTR, ES_LPRN, ES_RPRN, ES_SLSH, ES_BSLS, ES_LBRC, ES_RBRC, ES_LCBR, ES_RCBR, ES_PERC, \
  ES_SLSH, ES_EQL,  XXXXXXX, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, ES_DOLL  \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |   |  |   &  |   º  |   ª  |   ¨  |   ^  |   ~  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   @  |   +  |   -  |   *  |   =  |   #  |   %  |   "  |   '  |   `  |   ´  |   ç  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |   <  |   >  |   &  |   |  |   €  |   $  |   ¿  |   ?  |   ¡  |   !  |   €  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | Move |Lower |Space(shift) | Rise | Move | Caps |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_preonic_grid( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ES_PIPE, ES_AMPR, ES_OVRR, ES_ASML, ES_UMLT, ES_CIRC, ES_TILD, \
  ES_AT,   ES_PLUS, ES_MINS, ES_ASTR, ES_EQL,  ES_HASH, ES_PERC, ES_QUOT, ES_APOS, ES_GRV,  ES_ACUT, ES_CCED, \
  XXXXXXX, ES_LESS, ES_GRTR, ES_AMPR, ES_PIPE, ES_EURO, ES_DOLL, ES_IQUE, ES_QUES, ES_IEXL, ES_EXCL, ES_EURO, \
  XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX  \
),

/* Move
 * ,-----------------------------------------------------------------------------------.
 * | PtScr|      |      |      |      |      |      |      |      |      |      |      |
 * ,-----------------------------------------------------------------------------------.
 * | Brigh|lClick|  Up  |rClick|      |      |  <<  | Vol- | Vol+ |  >>  |      | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |  Lf  |  Dw  |  Rg  |      |      |  Lf  |  Dw  |  Up  |  Rg  |      |Enter |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|ScrUp |      |ScrDw |      |      | Home | PgDn | PgUp | End  |      |Insert|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Midi | Win  | Alt  | Move |Lower |Space(shift) | Rise | Move | Caps |      |Alt+F4|
 * `-----------------------------------------------------------------------------------'
 */
[_MOVE] = LAYOUT_preonic_grid( \
  KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   \
  BACKLIT, MS_LCLK, MS_UP,   MS_RCLK, XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, KC_DELETE, \
  _______, MS_LEFT, MS_DOWN, MS_RGHT, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_ENT,    \
  _______, MS_WHUP, XXXXXXX, MS_WHDW, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, KC_INS,    \
  MU_TOG,  _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, KC_XWIN    \
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
              layer_on(_LOWER);
          } else {
              layer_off(_LOWER);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
              layer_on(_RAISE);
          } else {
              layer_off(_RAISE);
          }
          return false;
          break;
        case MOVE:
          if (record->event.pressed) {
              layer_on(_MOVE);
          } else {
              layer_off(_MOVE);
          }
          return false;
          break;
        case BACKLIT:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
            #ifdef __AVR__
            PORTE &= ~(1<<6);
            #endif
          } else {
            unregister_code(KC_RSFT);
            #ifdef __AVR__
            PORTE |= (1<<6);
            #endif
          }
          return false;
          break;
      }
    return true;
};

