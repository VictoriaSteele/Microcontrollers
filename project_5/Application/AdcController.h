/*!
 * @file
 * @brief Adc Module Controller
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef ADCCONTROLLER_H_
#define ADCCONTROLLER_H_

typedef struct
{
   uint16_t min;
   uint16_t max;
}Adc_MinMax_t;

uint16_t Adc_ReadCurrent(void);
uint16_t Adc_ReadAvg(void);
uint16_t Adc_ReadStd(void);
void Adc_ReadMnmx(Adc_MinMax_t *minMaxRead);

#endif
