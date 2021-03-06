/*!
 * @file
 * @brief Rx210 Real time clock configuration using the Renesas Peripheral Driver Library
 * Methods originally generated by Renesas RTC tutorial
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "r_pdl_cgc.h"
#include "r_pdl_io_port.h"
#include "r_pdl_rtc.h"
#include "r_pdl_definitions.h"
#include "Rtc.h"

uint32_t timeData = 0x0;
void (*UpdateTimeCallback)(uint32_t) = NULL;

void ClockInterrupt()
{
   bool err = true;
   uint8_t rtcStatus = 0x0;

   err &= R_RTC_Read
      (
         PDL_RTC_READ_CURRENT,
         &rtcStatus,
         &timeData,
         PDL_NO_PTR
         );

   // Skip processing the day of the week
   timeData &= 0x00FFFFFF;

   // Check if the periodic interrupt flag was raised and if the clock is
   // running in normal operation
   if((rtcStatus & 0x01) && (UpdateTimeCallback))
   {
      UpdateTimeCallback(timeData);
   }

   while(!err)
      ;
}

void Rtc_Start()
{
   bool err = true;

   err &= R_RTC_Control(
      PDL_RTC_CLOCK_START,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA
      );

   while(!err)
      ;
}

void Rtc_Stop()
{
   bool err = true;

   err &= R_RTC_Control(
      PDL_RTC_CLOCK_STOP,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA
      );

   while(!err)
      ;
}

void Rtc_Read(uint32_t *timeData)
{
   bool err = true;
   uint8_t rtcStatus = 0x0;

   err &= R_RTC_Read
      (
         PDL_RTC_READ_CURRENT,
         &rtcStatus,
         timeData,
         PDL_NO_PTR
         );

   *timeData &= 0x00FFFFFF;
   while(!err)
      ;
}

void Rtc_Update(uint32_t timeData)
{
   bool err = true;

   err &= R_RTC_Control(
      PDL_NO_DATA,
      PDL_RTC_UPDATE_CURRENT_TIME,
      timeData,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA,
      PDL_NO_DATA
      );

   while(!err)
      ;
}

void Rtc_SetInterruptCallback(void (*callback)(uint32_t))
{
   UpdateTimeCallback = callback;
}

void Rtc_Init()
{
   bool err = true;

   err &= R_RTC_Create(
      PDL_RTC_24_HOUR_MODE| PDL_RTC_OUTPUT_DISABLE,
      PDL_NO_DATA,            // Capture pin selection
      0xFF000000,// Automatic day of week
      0x20141002,// 18-May-2011
      PDL_NO_DATA,// Capture 0
      PDL_NO_DATA,// Capture 1
      PDL_NO_DATA,// Capture 2
      PDL_RTC_PERIODIC_1_HZ,// Periodic Setup
      PDL_NO_DATA,// Alarm time
      PDL_NO_DATA,// Alarm date
      PDL_NO_FUNC,// Alarm callback
      PDL_NO_DATA,// Alarm priority
      ClockInterrupt,// Periodic callback
      7// Periodic priority
      );

   Rtc_Stop();

   while(!err)
      ;
}

