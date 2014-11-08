#ifndef ADCCONTROLLER_C_
#define ADCCONTROLLER_C_

#include <string.h>
#include "Lcd.h"
#include "SwitchIncrementController.h"

#define ADC_CURRENT (0x00)
#define ADC_VREF    (0x01)
#define ADC_VREF0   (0x02)
#define ADC_AVG     (0x03)
#define ADC_STDF    (0x04)
#define ADC_STDS    (0x05)
#define ADC_MNMXF   (0x06)
#define ADC_MNMXS   (0x07)

//
static void Switch_Update(uint8_t switchCount)
{
   switch(switchCount)
   {
      case ADC_CURRENT:
         // update display
         // configure adc
         break;
      case ADC_VREF:
         break;
      case ADC_VREF0:
         break;
      case ADC_AVG:
         break;
      case ADC_STDF:
         break;
      case ADC_STDS:
         break;
      case ADC_MNMXF:
         break;
      case ADC_MNMXS:
         break;
      default:
         break;
   }
}

void DisplayInitialMessage()
{
   Lcd_Display(LCD_LINE1_START_POS, " Adc Config");
   Lcd_Display(LCD_LINE2_START_POS, " press switch");
}

void ApplicationController_Init(void)
{
   Lcd_Init();
   DisplayInitialMessage();
   SwitchIncrementController_Init();
   SwitchIncrementController_SetUpdateCallback(Switch_Update);
   // set timer to go off periodically
}

#endif
