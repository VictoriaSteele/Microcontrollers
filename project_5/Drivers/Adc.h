/*!
 * @file
 * @brief Adc Driver
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef ADC_H
#define ADC_H

#include <stdint.h>

/*!
 * Read the current adc value
 * @return The current adc value
 */
uint16_t Adc_Read(void);

/*!
 * Read the selected reference voltage
 * @return The self diagnostics reference voltage
 */
uint16_t Adc_ReadVref(void);

/*!
 * Configure the adc to run continuously with
 * default settings
 */
void Adc_ConfigureContinuous(void);

/*!
 * Configure the adc to read the high reference voltage
 * in self diagnostics mode
 */
void Adc_ConfigureForVref(void);

/*!
 * Configure the adc to read the low reference voltage
 * in self diagnostics mode
 */
void Adc_ConfigureForVref0(void);

/*!
 * Configure the adc to use the independent sample and
 * hold circuits with the shortest sampling time
 */
void Adc_ConfigureForContinuousFast(void);

/*!
 * Configure the adc to use the independent sample and
 * hold circuits with the longest sampling time
 */
void Adc_ConfigureForContinuousSlow(void);

/*!
 * Initialize the adc module
 */
void Adc_Init(void);

#endif
