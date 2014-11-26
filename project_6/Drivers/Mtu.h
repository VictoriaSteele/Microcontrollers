/*!
 * @file
 * @brief Mtu0 driver for the RX210
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef MTU_H
#define MTU_H

void Mtu_Init(void);
uint32_t Mtu_Read(void);
void Mtu_Start(void);
void Mtu_Stop(void);

#endif
