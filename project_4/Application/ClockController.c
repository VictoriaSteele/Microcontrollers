/*!
 * @file
 * @brief Methods for the Rx210 Dev kit clock
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "Lcd.h"
#include "Rtc.h"
#include "SwitchSlewController.h"
#include "Wdt.h"

#define SECONDS_MASK (0x000000FF)
#define MINUTES_MASK (0x0000FF00)
#define HOURS_MASK   (0x00FF0000)
#define SECONDS_KEY_MASK (0x00000001)
#define MINUTES_KEY_MASK (0x00000002)
#define HOURS_KEY_MASK   (0x00000004)
#define MINUTESOFFSET (8)
#define HOURSOFFSET   (16)
#define SECONDS_MAX   (60)
#define MINUTES_MAX   (60)
#define HOURS_MAX     (24)
#define INITIAL_DISPLAY_TIME (0x00000000)
#define HOURS_COLON_INDEX   (5)
#define MINUTES_COLON_INDEX (2)
#define BITS_PER_BCD_DIGIT  (4)

static uint8_t ConvertNumberToBCDChar(uint32_t number)
{
   return (uint8_t)(0x30 + (number % 16));
}

static void ConvertNumberToBCDString(uint8_t * outputString, uint8_t startPosition, uint32_t number)
{
   uint8_t stringIndex = 0;
   uint8_t digitIndex = 6;
   uint8_t stringBuffer[6] = "000000";

   while(digitIndex--)
   {
      stringBuffer[digitIndex] = ConvertNumberToBCDChar(number);

      number >>= BITS_PER_BCD_DIGIT;
   }

   digitIndex = 0;

   while(stringIndex < 6)
   {
      outputString[digitIndex + startPosition] = stringBuffer[stringIndex];

      digitIndex++;
      stringIndex++;

      if((digitIndex == HOURS_COLON_INDEX) || (digitIndex == MINUTES_COLON_INDEX))
      {
         outputString[digitIndex + startPosition] = ':';
         digitIndex++;
      }
   }
}

static void Clock_DisplayUpdate(uint32_t time)
{
   uint8_t stringBuffer[9];
   ConvertNumberToBCDString(stringBuffer, 0, time);
   Lcd_Display(LCD_LINE2_START_POS, stringBuffer);
}

uint32_t ConvertBCDToDecimal(uint32_t bcdNumber)
{

   return (((bcdNumber & 0xF0) >> 4) * 10) + (bcdNumber & 0x0F);
}

uint32_t ConvertDecimalToBCD(uint32_t decimal)
{
   return (((decimal / 10) << 4) | (decimal % 10));
}

void CalculateTimeInBCD(uint32_t *timeData, uint32_t mask)
{
   uint32_t seconds = ConvertBCDToDecimal((*timeData & SECONDS_MASK)) + (mask & SECONDS_KEY_MASK);
   uint32_t minutes = ConvertBCDToDecimal((*timeData & MINUTES_MASK) >> MINUTESOFFSET) + ((mask & MINUTES_KEY_MASK) >> 1);
   uint32_t hours = ConvertBCDToDecimal((*timeData & HOURS_MASK) >> HOURSOFFSET) + ((mask & HOURS_KEY_MASK) >> 2);

   seconds = ConvertDecimalToBCD(seconds % SECONDS_MAX);
   minutes = ConvertDecimalToBCD((minutes % MINUTES_MAX)) << MINUTESOFFSET;
   hours = ConvertDecimalToBCD((hours % HOURS_MAX)) << HOURSOFFSET;

   *timeData = (seconds | minutes | hours);
}

static void Switch_Update(uint8_t mask)
{
   uint32_t timeData;

   Rtc_Stop();
   Rtc_Read(&timeData);
   CalculateTimeInBCD(&timeData, (uint32_t)mask);
   Rtc_Update(timeData);
   Clock_DisplayUpdate(timeData);
   Rtc_Start();
}

void ClockController_Init()
{
   Lcd_Init();
   Lcd_Display(LCD_LINE1_START_POS, " CLOCK ");
   Clock_DisplayUpdate(INITIAL_DISPLAY_TIME);

   SwitchSlewController_Init();
   SwitchSlewController_SetUpdateCallback(Switch_Update);

   Rtc_SetInterruptCallback(Clock_DisplayUpdate);
   Rtc_Start();

   Wdt_Kick();
}

