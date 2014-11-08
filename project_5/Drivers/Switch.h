/*!
 * @file
 * @brief Methods to control the switches for the Rx210 Dev Kit
 * File originally generated by Renesas
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef SWITCH_H
#define SWITCH_H

#include <stdbool.h>
#include <stdint.h>

/*!
 * Initialize Switch
 */
void Switch_Init(void);

/*!
 * Turn on and off switch interrupts
 * @param bool State to turn switch interrupts to
 */
void Switch_ControlInterrupts(bool);

/*!
 * Set the method to be called when the switch is pressed
 * @param callBack The method to be called when the switch is released
 */
void Switch_SetPressCallback(void(*callBack)(uint8_t));

/*!
 * Set the method to be called when the switch is released
 * @param callBack The method to be called when the switch is released
 */
void Switch_SetReleaseCallback(void(*callBack)(uint8_t));

#endif