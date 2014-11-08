/*!
 * @file
 * @brief Rx210 Real time clock configuration using the Renesas Peripheral Driver Library
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef RTC_H
#define RTC_H

/*!
 * Initialize the Real Time Clock
 */
void Rtc_Init(void);

/*!
 * Start the Real Time Clock
 */
void Rtc_Start(void);

/*!
 * Stop the Real Time Clock
 */
void Rtc_Stop(void);

/*!
 * Read the Real Time Clock
 * @param timeData The buffer to read the time into
 */
void Rtc_Read(uint32_t *timeData);

/*!
 * Update the Real Time Clock
 * @param timeData The time to update the Real Time Clock to
 */
void Rtc_Update(uint32_t timeData);

/*!
 * Set the Real Time Clock periodic update callback method
 * @param callback Method to be called when the period callback is triggered
 */
void Rtc_SetInterruptCallback(void (*callback)(uint32_t));

#endif
