/* Copyright 2018 Adam Booth (https://github.com/thinghacker)
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
 *
 * No claims to the name or any trademarks associated with Amiga are asserted here
 */
#include "amiga600.h"

#define _BASE 0
#define _FNKPD 1
#define _MEDIA 2

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BASE - the Default Keyboard Layer */
[_BASE] = KEYMAP(
    KC_ESCAPE,  KC_F1,   KC_F2,         KC_F3,    KC_F4,     KC_F5,   KC_F6,      KC_F7,   KC_F8,    KC_F9,     KC_F10,      KC_F1, \
    KC_GRAVE,   KC_1,    KC_2,          KC_3,     KC_4,      KC_5,    KC_6,       KC_7,    KC_8,     KC_9,      KC_0,        KC_MINUS,    KC_EQUAL,        KC_BSLASH,             KC_UP, \
    KC_TAB,     KC_Q,    KC_W,          KC_E,     KC_R,      KC_T,    KC_Y,       KC_U,    KC_I,     KC_O,      KC_P,        KC_LBRC,     KC_RBRC,         KC_ENTER,              KC_LEFT, \
    KC_CAPS,    KC_A,    KC_S,          KC_D,     KC_F,      KC_G,    KC_H,       KC_J,    KC_K,     KC_L,      KC_SCOLON,   KC_QUOTE,    MO(_MEDIA),      KC_DELETE,             KC_RIGHT, \
    MO(_FNKPD), KC_Z,    KC_X,          KC_C,     KC_V,      KC_B,    KC_N,       KC_M,    KC_COMMA, KC_DOT,    KC_SLASH,    KC_SPACE,    KC_BSPACE,       KC_DOWN, \
    KC_RSHIFT,  KC_RALT, KC_RGUI,       KC_LCTRL, KC_LSHIFT, KC_LALT, KC_LGUI \
),

/* Keymap _FNKPD -  Used to Provide F11/F12 and Keypad keys */
[_FNKPD] = KEYMAP(
    _______,    KC_F11,  KC_F12,        _______,  _______,   _______, _______,    _______, _______,  _______,   _______,     KC_MUTE, \
    KC_PAST,    KC_KP_1, KC_KP_2,       KC_KP_3,  KC_KP_4,   KC_KP_5, KC_KP_6,    KC_KP_7, KC_KP_8,  KC_KP_9,   KC_KP_0,     KC_KP_MINUS, KC_KP_PLUS,      _______,               KC_PGUP, \
    _______,    _______, _______,       _______,  _______,   _______, _______,    _______, _______,  _______,   KC_PSCREEN,  _______,     _______,         KC_KP_ENTER,           KC_HOME, \
    _______,    _______, KC_SCROLLLOCK, _______,  _______,   _______, KC_PAUSE,   _______, _______,  _______,   _______,     _______,     KC_NO,           KC_INSERT,             KC_END, \
    _______,    _______, _______,       _______,  _______,   _______, KC_NUMLOCK, _______, _______,  KC_KP_DOT, KC_KP_SLASH, _______,     _______,         KC_PGDN, \
    _______,    _______, _______,       _______,  _______,   _______, _______ \
),

/* keymap _MEDIA - Used to Provide Media Keys */
[_MEDIA] = KEYMAP(
    _______,    _______, _______,       _______,  _______,   _______, _______,    _______, _______,  _______,   _______,     KC_MUTE, \
    _______,    _______, _______,       _______,  _______,   _______, _______,    _______, _______,  _______,   _______,     _______,                 _______,         _______,               KC_AUDIO_VOL_UP, \
    _______,    _______, _______,       _______,  _______,   _______, _______,    _______, _______,  _______,   _______,     _______,                 _______,         KC_MEDIA_SELECT,       KC_MEDIA_PREV_TRACK, \
    _______,    _______, _______,       _______,  _______,   _______, _______,    _______, _______,  _______,   _______,     _______,                 _______,         KC_MEDIA_FAST_FORWARD, KC_MEDIA_NEXT_TRACK, \
    KC_NO,      _______, _______,       KC_CALC,  _______,   _______, _______,    _______, _______,  _______,   _______,     KC_MEDIA_PLAY_PAUSE,     KC_MEDIA_REWIND, KC_AUDIO_VOL_DOWN, \
    _______,    _______, _______,       _______,  _______,   _______, _______ \
)

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
