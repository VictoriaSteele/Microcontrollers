/*!
 * @file
 * @brief Application Controller
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <string.h>
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "Lcd.h"
#include "Mtu.h"

#define BITS_IN_DIGIT (0x04)

static void U16ToString(uint8_t *outputString, uint8_t pos, uint16_t inputNumber)
{
   uint8_t tempStorage = 0x00;
   uint8_t bitShift = 12;
   uint16_t mask = 0xF000;

   while(bitShift < 30)
   {
      tempStorage = (uint8_t)((inputNumber & mask) >> bitShift);
      outputString[pos] = (uint8_t)(
         (tempStorage < 0x0A) ? (tempStorage + 0x30) : (tempStorage + 0x37));
      mask = (uint16_t)(mask >> BITS_IN_DIGIT);
      bitShift -= BITS_IN_DIGIT;
      pos++;
   }
}

static void CalculateAndDisplayFloat(void)
{
   uint8_t lcdBuffer[10] = "00000000";
   uint32_t count;
   uint16_t index;

   Mtu_Start();

   for(index = 1; index < 1002; index++)
   {
      (void)((float)index * ((float)index + 1.0));
   }

   count = Mtu_Read();
   Mtu_Stop();

   U16ToString(lcdBuffer, 4, (uint16_t)count);
   U16ToString(lcdBuffer, 0, (uint16_t)(count >> 16));
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
}

static void CalculateAndDisplayInt(void)
{
   uint8_t lcdBuffer[10] = "00000000";
   uint32_t count;
   uint16_t index;

   Mtu_Start();

   for(index = 1; index < 1002; index++)
   {
      (void)(index * (index + 1));
   }

   count = Mtu_Read();
   Mtu_Stop();

   U16ToString(lcdBuffer, 4, (uint16_t)count);
   U16ToString(lcdBuffer, 0, (uint16_t)(count >> 16));

   Lcd_Display(LCD_LINE1_START_POS, lcdBuffer);
}

static void UpdateLcd(void)
{
   CalculateAndDisplayInt();
   CalculateAndDisplayFloat();
}

static void InitializePeriodicKeyCheck()
{
   bool err = true;

   err &= R_CMT_Create
      (
         0,
         PDL_CMT_FREQUENCY,
         2,
         UpdateLcd,
         3
         );

   while(!err)
      ;
}

void ApplicationController_Init(void)
{
   Lcd_Init();
   InitializePeriodicKeyCheck();
   Mtu_Init();
}
