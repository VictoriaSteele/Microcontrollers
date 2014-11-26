/*!
 * @file
 * @brief Mtu0 driver for the RX210
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef MTU_H
#define MTU_H

/*!
 * Initialize the MTU2 Module
 * This initializes both cascaded mode for MTU1 and MTU2 and
 * A PWM for MTIOC2A on P26
 */
void Mtu_Init(void);

/*!
 * Read the current value of TCNT in cascaded mode
 * @return The combined TCNT value for MTU1 and MTU2
 */
uint32_t Mtu_Read(void);

/*!
 * Start the cascaded timer
 */
void Mtu_Start(void);

/*!
 * Stop the cascaded timer
 */
void Mtu_Stop(void);

#endif
