/*!
 * @file
 * @brief Adc Module Controller
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#ifndef ADCCONTROLLER_H
#define ADCCONTROLLER_H

typedef struct
{
   uint16_t min;
   uint16_t max;
} Adc_MinMax_t;

/*!
 * Function to read the current adc value
 * @return the current reading
 */
uint16_t Adc_ReadCurrent(void);

/*!
 * Function to read the average of 10,000 adc readings
 * @return the average
 */
uint16_t Adc_ReadAvg(void);

/*!
 * Function to read the standard deviation of 10,000 adc readings
 * @return The standard deviation by a multiplier of 10
 */
uint16_t Adc_ReadStd(void);

/*!
 * Function to read the min and max of 10,000 adc readings
 * @param minMaxRead The buffer to read the min and max into
 */
void Adc_ReadMnmx(Adc_MinMax_t *minMaxRead);

#endif
