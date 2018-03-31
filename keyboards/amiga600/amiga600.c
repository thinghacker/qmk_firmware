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

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

        //  Caplock Cathode D0 Set to Low (J1 30Pin ZIF Pin 4)
        DDRD |= (1<<0);
        PORTD &= ~(1<<0);

        // Power LED C7 Set to High (J2 LED Connector PIN 2) 
        DDRC |= (1<<7);
        PORTC |= (1<<7);

	matrix_init_user();
}

void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        //  Caplock Anode B2 Set to High (J1 30Pin ZIF Pin 9)
        DDRB |= (1<<2);
        PORTB |= (1<<2);
    } else {
        //  Caplock Anode B2 Set to Low (J1 30Pin ZIF Pin 9)
        DDRB |= (1<<2);
        PORTB &= ~(1<<2);

    }
    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        // Floppy LED C6 Set to High (J2 LED Connector Pin 3)
        DDRC |= (1<<6);
        PORTC |= (1<<6);
    } else {
        // Floppy LED C6 Set to Low (J2 LED Connector Pin 3)
        DDRC |= (1<<6);
        PORTC &= ~(1<<6);
    }
    if (usb_led & (1<<USB_LED_SCROLL_LOCK)) {
        // HDD LED C5 Set to High (J2 LED Connector Pin 4)
        DDRC |= (1<<5);
        PORTC |= (1<<5);
    } else {
        // HDD LED C5 Set to Low (J2 LED Connector Pin 4)
        DDRC |= (1<<5);
        PORTC &= ~(1<<5);
    }
    led_set_user(usb_led);
};
