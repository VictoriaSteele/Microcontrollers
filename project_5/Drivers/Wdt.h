/*!
 * @file
 * @brief Wathdog configuration for the Rx210
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef WDT_H
#define WDT_H

/*!
 * Initialize the watchdog
 */
void Wdt_Init(void);

/*!
 * Update the watchdog
 */
void Wdt_Kick(void);

#endif
