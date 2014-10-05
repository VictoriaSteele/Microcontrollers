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

extern volatile bool gSwitchStandbyReady;

/* Switch flag global variable. Switch status bits:
		b7 : Switch 1 press complete flag*
		b6 : Switch 2 press complete flag*
		b5 : Switch 3 press complete flag*
		b4 : Unused
		b3 : Switch 1 held-down status flag
		b2 : Switch 2 held-down status flag
		b1 : Switch 3 held-down status flag
		b0 : Unused	
		 * Switch press complete flags must be cleared manually     */
extern volatile uint8_t switchFlag;

void InitialiseSwitchInterrupts(void);
void ControlSwitchInterrupts(bool);
void SetSwitchPressCallback(void(*callBack)(uint8_t));
void SetSwitchReleaseCallback(void(*callBack)(uint8_t));

#endif
