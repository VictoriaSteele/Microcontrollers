/*!
 * @file
 * @brief Adc Driver
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "r_pdl_io_port.h"
#include "r_pdl_adc_12.h"
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "iodefine_RPDL.h"
#include "Adc.h"

uint16_t Adc_Read(void)
{
   uint16_t read = 0;
   bool err = true;

   err &= R_ADC_12_Read
      (
         0,
         &read,
         PDL_NO_PTR
         );

   while(!err)
      ;

   return read;
}

uint16_t Adc_ReadVref(void)
{
   uint16_t read = 0;
   bool err = true;

   err &= R_ADC_12_Read
      (
         0,
         PDL_NO_PTR,
         &read
         );

   while(!err)
      ;

   return (read & 0x0FFF);
}

void Adc_ConfigureContinuous(void)
{
   bool err = true;

   err &= R_ADC_12_Destroy(0);

   // Configure the port pin P40 as analog channel input AN000
   err &= R_ADC_12_Set
      (
         PDL_ADC_12_PIN_AN000_P40
         );

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SCAN_CONTINUOUS,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Configure the ADC channel AN000
   // Use the sampling time as 5 uS
   err &= R_ADC_12_CreateChannel
      (
         0,
         0,
         PDL_ADC_12_CH_GROUP_A,
         5E-6
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

void Adc_ConfigureForVref(void)
{
   bool err = true;

   //Destroy the previous unit
   err &= R_ADC_12_Destroy(0);

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SELF_DIAGNOSTIC_VREFH0_FULL,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

void Adc_ConfigureForVref0(void)
{
   bool err = true;

   //Destroy the previous unit
   err &= R_ADC_12_Destroy(0);

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SELF_DIAGNOSTIC_VREFH0_ZERO,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

void Adc_ConfigureForContinuousFast(void)
{
   bool err = true;

   err &= R_ADC_12_Destroy(0);

   // Configure the port pin P40 as analog channel input AN000
   err &= R_ADC_12_Set
      (
         PDL_ADC_12_PIN_AN000_P40
         );

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SCAN_CONTINUOUS|PDL_ADC_12_ADSHCR_SPECIFY,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         4,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Configure the ADC channel AN000
   // Use the sampling time as 5 uS
   err &= R_ADC_12_CreateChannel
      (
         0,
         0,
         PDL_ADC_12_CH_GROUP_A|PDL_ADC_12_CH_SAMPLE_AND_HOLD_ENABLE,
         5E-6
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

void Adc_ConfigureForContinuousSlow(void)
{
   bool err = true;

   err &= R_ADC_12_Destroy(0);

   // Configure the port pin P40 as analog channel input AN000
   err &= R_ADC_12_Set
      (
         PDL_ADC_12_PIN_AN000_P40
         );

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SCAN_CONTINUOUS|PDL_ADC_12_ADSHCR_SPECIFY,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         255,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Configure the ADC channel AN000
   // Use the sampling time as 5 uS
   err &= R_ADC_12_CreateChannel
      (
         0,
         0,
         PDL_ADC_12_CH_GROUP_A|PDL_ADC_12_CH_SAMPLE_AND_HOLD_ENABLE,
         5E-6
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

void Adc_Init(void)
{
   bool err = true;

   // Configure the port pin P40 as analog channel input AN000
   err &= R_ADC_12_Set
      (
         PDL_ADC_12_PIN_AN000_P40
         );

   // Configure the ADC in continuous scan mode
   err &= R_ADC_12_CreateUnit
      (
         0,
         PDL_ADC_12_SCAN_CONTINUOUS,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA,
         PDL_NO_FUNC,
         PDL_NO_DATA
         );

   // Configure the ADC channel AN000
   // Use the sampling time as 5 uS
   err &= R_ADC_12_CreateChannel
      (
         0,
         0,
         PDL_ADC_12_CH_GROUP_A,
         5E-6
         );

   // Start the ADC conversion
   err &= R_ADC_12_Control
      (
         PDL_ADC_12_0_ON
         );

   while(!err)
      ;
}

