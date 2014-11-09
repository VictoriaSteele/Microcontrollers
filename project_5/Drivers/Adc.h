/*!
 * @file
 * @brief Adc Driver
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef ADC_H
#define ADC_H

#include <stdint.h>

uint16_t Adc_Read(void);
uint16_t Adc_ReadVref(void);
void Adc_ConfigureContinuous(void);
void Adc_ConfigureForVref(void);
void Adc_ConfigureForVref0(void);
void Adc_ConfigureForContinuousFast(void);
void Adc_ConfigureForContinuousSlow(void);
void Adc_Init(void);

#endif
