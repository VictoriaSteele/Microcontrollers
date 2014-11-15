/*!
 * @file
 * @brief The application controller
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <string.h>
#include <stdbool.h>
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "Lcd.h"
#include "SwitchIncrementController.h"
#include "AdcController.h"
#include "Adc.h"

#define ADC_CURRENT (0x00)
#define ADC_VREF    (0x01)
#define ADC_VREF0   (0x02)
#define ADC_AVG     (0x03)
#define ADC_STDF    (0x04)
#define ADC_STDS    (0x05)
#define ADC_MNMXF   (0x06)
#define ADC_MNMXS   (0x07)

#define BITS_IN_DIGIT (0x04)

static void (*AdcTask)(void) = NULL;

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

static void RunAdcTask()
{
   AdcTask();
}

static void DisplayInitialMessage()
{
   Lcd_Display(LCD_LINE1_START_POS, "  Adc ");
   Lcd_Display(LCD_LINE2_START_POS, "press sw");
}

static void DisplayAdcCurrent()
{
   uint16_t read = Adc_ReadCurrent();
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "1: A/D ");
}

static void DisplayAdcVref()
{
   uint16_t read;
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   read = Adc_ReadVref();
   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "2: VREF ");
}

static void DisplayAdcVref0()
{
   uint16_t read;
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   read = Adc_ReadVref();
   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "3: VREF0");
}

static void DisplayAdcAvg()
{
   uint16_t read = Adc_ReadAvg();
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "4: AVG");
}

static void DisplayAdcStdf()
{
   uint16_t read = Adc_ReadStd();
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "5: STDF ");
}

static void DisplayAdcStds()
{
   uint16_t read = Adc_ReadStd();
   uint8_t lcdBuffer[8] = "0xXYZ\0";

   U16ToString(lcdBuffer, 2, read);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "6: STDS ");

}

static void DisplayAdcMnmxf()
{
   Adc_MinMax_t read;
   uint8_t min[4];
   uint8_t max[4];
   uint8_t lcdBuffer[7] = "LLL:HHH";

   Adc_ReadMnmx(&read);
   U16ToString(min, 0, read.min);
   U16ToString(max, 0, read.max);
   memcpy(lcdBuffer, (min + 1), 3);
   memcpy((lcdBuffer + 4), (max + 1), 3);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "7: MNMXF ");
}

static void DisplayAdcMnmxs()
{
   Adc_MinMax_t read;
   uint8_t min[4];
   uint8_t max[4];
   uint8_t lcdBuffer[7] = "LLL:HHH";

   Adc_ReadMnmx(&read);
   U16ToString(min, 0, read.min);
   U16ToString(max, 0, read.max);
   memcpy(lcdBuffer, (min + 1), 3);
   memcpy((lcdBuffer + 4), (max + 1), 3);
   Lcd_Display(LCD_LINE2_START_POS, lcdBuffer);
   Lcd_Display(LCD_LINE1_START_POS, "8: MNMXS");
}

static void Switch_Update(uint8_t switchCount)
{
   Lcd_Clear();

   switch(switchCount)
   {
      case ADC_CURRENT:
         Adc_ConfigureContinuous();
         AdcTask = DisplayAdcCurrent;
         break;
      case ADC_VREF:
         Adc_ConfigureForVref();
         AdcTask = DisplayAdcVref;
         break;
      case ADC_VREF0:
         Adc_ConfigureForVref0();
         AdcTask = DisplayAdcVref0;
         break;
      case ADC_AVG:
         Adc_ConfigureContinuous();
         AdcTask = DisplayAdcAvg;
         break;
      case ADC_STDF:
         Adc_ConfigureForContinuousFast();
         AdcTask = DisplayAdcStdf;
         break;
      case ADC_STDS:
         Adc_ConfigureForContinuousSlow();
         AdcTask = DisplayAdcStds;
         break;
      case ADC_MNMXF:
         Adc_ConfigureForContinuousFast();
         AdcTask = DisplayAdcMnmxf;
         break;
      case ADC_MNMXS:
         Adc_ConfigureForContinuousSlow();
         AdcTask = DisplayAdcMnmxs;
         break;
      default:
         break;
   }
}

static void InitializePeriodicKeyCheck()
{
   bool err = true;

   err &= R_CMT_Create
      (
         0,
         PDL_CMT_FREQUENCY,
         2,
         RunAdcTask,
         3
         );

   while(!err)
      ;
}

void ApplicationController_Init(void)
{
   Lcd_Init();
   DisplayInitialMessage();
   SwitchIncrementController_Init();
   SwitchIncrementController_SetUpdateCallback(Switch_Update);
   InitializePeriodicKeyCheck();
   AdcTask = DisplayInitialMessage;
   Adc_Init();
}
