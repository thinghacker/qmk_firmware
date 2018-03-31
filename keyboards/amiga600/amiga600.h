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
#ifndef AMIGA600_H
#define AMIGA600_H

#include "quantum.h"
/* Amiga 600 key ID (http://www.amigawiki.org/dnl/schematics/A600_R1.5.pdf)
   The modifier keys (shift/alt/control/amiga) effectively has a separate 1 row * 7 column matrix
   This has been added to the main matrix extending the matrix size
 ,---. ,----.----.----.----.----.,----.----.----.----.----.,----.
 | 01| | 02 | 03 | 04 | 05 | 06 || 07 | 08 | 09 | 10 | 11 || 28 |
 `---' `----'----'----'----'----'`----'----'----'----'----'`----'
 ,--------------------------------------------------------------.
 | 12| 13| 14| 15| 16| 17| 18| 19| 20| 21| 22| 23| 24|25| 26| 27|
 |--------------------------------------------------------------'
 | 33 | 34| 35| 36| 37| 38| 39| 40| 41| 42| 43| 44| 55|  50 |
 |-------------------------------------------------------.  |
 | 51| 52| 53| 54| 55| 56| 57| 58| 59| 60| 61| 62| 63| 64|  |
 |----------------------------------------------------------.
 | 70 |71 | 72| 73| 74| 75| 76| 77| 78| 79| 80| 81|  82 | 65|
 |--------------------------------------------------------------.
   | 90| 91  |              92          | 93  | 94|| 83 | 84| 85|
   `------------------------------------------------------------'

 ,---. ,----.----.----.----.----.,----.----.----.----.----.,----.
 |Esc| | F1 | F2 | F3 | F4 | F5 || F6 | F7 | F8 | F9 | F10||Help|
 `---' `----'----'----'----'----'`----'----'----'----'----'`----'
 ,--------------------------------------------------------------.
 |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| \| BS|Del|
 |--------------------------------------------------------------'
 |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]| Ent|
 |-------------------------------------------------------. e|
 |Ctl|Cap|  A|  S|  D|  F|  G|  H|  J|  k|  L|  ;|  #| **| r|
 |----------------------------------------------------------.
 |Shift| *|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift| Up|
 |--------------------------------------------------------------.
   |Alt|Amiga|            Space         |Amiga|Alt||Left|Dwn|Rgt|
   `------------------------------------------------------------'
 *  is Blank key next to Left Shift
 ** is Blank key next to Enter

 */
#define KEYMAP( \
      k01,          k02,   k03,   k04,   k05,   k06,          k07,          k08,   k09,   k10,   k11,   k28, \
      k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k20,   k21,   k22,   k23,   k24,   k25,   k65, \
      k33,   k34,   k35,   k36,   k37,   k38,   k39,   k40,   k41,   k42,   k43,   k44,   k45,   k50,   k83, \
      k52,   k53,   k54,   k55,   k56,   k57,   k58,   k59,   k60,   k61,   k62,   k63,   k64,   k27,   k85, \
      k71,   k72,   k73,   k74,   k75,   k76,   k77,   k78,   k79,   k80,   k81,          k92,   k26,   k84, \
                                                                                                               k82,   k94,   k93,   k51,   k70,   k90,    k91 \
) \
{ \
    { k01,   KC_NO, k02,   k03,   k04,   k05,   k06,   KC_NO, k07,   KC_NO, k08,   k09,   k10,   k11,   k28,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k20,   k21,   k22,   k23,   k24,   k25,   k65,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k33,   k34,   k35,   k36,   k37,   k38,   k39,   k40,   k41,   k42,   k43,   k44,   k45,   k50,   k83,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k52,   k53,   k54,   k55,   k56,   k57,   k58,   k59,   k60,   k61,   k62,   k63,   k64,   k27,   k85,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k71,   k72,   k73,   k74,   k75,   k76,   k77,   k78,   k79,   k80,   k81,   KC_NO, k92,   k26,   k84,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k82,   k94,   k93,   k51,   k70,   k90,   k91 } \
}

#endif
