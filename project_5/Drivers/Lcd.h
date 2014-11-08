/*!
 * @file
 * @brief LCD Methods for the Rx210 Dev kit
 * File originally generated by renesas
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef LCD_H
#define LCD_H

#include <stdint.h>

#define LCD_LINE1_START_POS 0
#define LCD_LINE2_START_POS 16

/*!
 * Initialize the LCD
 */
void Lcd_Init(void);

/*!
 * Display string on LED
 * @param position Position to display string
 * @param string String to display
 */
void Lcd_Display(uint8_t position, const uint8_t * string);

/*!
 * Clear LCD
 */
void Lcd_Clear(void);

#endif
