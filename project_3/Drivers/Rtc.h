/*!
 * @file
 * @brief Rx210 Real time clock configuration using the Renesas Peripheral Driver Library
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef RTC_H
#define RTC_H

void Rtc_Init(void);
void Rtc_Start(void);
void Rtc_Stop(void);
void Rtc_Read(uint32_t *timeData);
void Rtc_Update(uint32_t timeData);

void SetRtcInterruptCallback(void (*callback)(uint32_t));

#endif
