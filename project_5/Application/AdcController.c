/*!
 * @file
 * @brief Adc Module Controller
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <stdint.h>
#include <math.h>
#include "Adc.h"
#include "AdcController.h"

static int32_t readValues[10000];

static void ReadArrayOfValues()
{
   uint32_t index;
   for(index = 0; index < 10000; index++)
   {
      readValues[index] = Adc_Read();
   }
}

static uint16_t AverageOfValues()
{
   uint64_t sum = 0;
   uint32_t index;

   for(index = 0; index < 10000; index++)
   {
      sum += readValues[index];
   }

   return (uint16_t)(sum/10000);
}

void FindSquareOfDifferenceX10(uint32_t avg)
{
   uint32_t index;

   for(index = 0; index < 10000; index++)
   {
      readValues[index] =
         ((readValues[index]*10 - avg*10)*(readValues[index]*10 - avg*10));
   }
}

static uint16_t FindMaxOfArray()
{
   uint16_t max = readValues[0];
   uint32_t index;


   for(index = 1; index < 10000; index++)
   {
      if(readValues[index] > max)
      {
         max = readValues[index];
      }
   }

   return max;
}

static uint16_t FindMinOfArray()
{
   uint16_t min = readValues[0];
   uint32_t index;


   for(index = 1; index < 10000; index++)
   {
      if(readValues[index] < min)
      {
         min = readValues[index];
      }
   }

   return min;
}

uint16_t Adc_ReadCurrent(void)
{
   return Adc_Read();
}

uint16_t Adc_ReadAvg(void)
{
   ReadArrayOfValues();
   return AverageOfValues();
}

uint16_t Adc_ReadStd(void)
{
   uint32_t avg;
   ReadArrayOfValues();
   avg = AverageOfValues();
   FindSquareOfDifferenceX10(avg);
   avg = AverageOfValues();

   return (uint16_t)sqrt((double)avg);
}

void Adc_ReadMnmx(Adc_MinMax_t *minMaxRead)
{
   ReadArrayOfValues();

   minMaxRead->max = FindMaxOfArray();
   minMaxRead->min = FindMinOfArray();
}


