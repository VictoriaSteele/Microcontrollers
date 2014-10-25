/*!
 * @file
 * @brief Rx210 Watchdog timer configuration
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */


/* Compare match timer RPDL function definitions */
#include "r_pdl_cmt.h"
/* Interrupt control RPDL function definitions */
#include "r_pdl_intc.h"
/* WDT RPDL function definitions */
#include "r_pdl_wdt.h"
/* ADC RPDL function definitions */
#include "r_pdl_adc_12.h"
/* IO port RPDL function definitions */
#include "r_pdl_io_port.h"
/* General RPDL function definitions */
#include "r_pdl_definitions.h"
/* LCD controlling function prototypes & macro defines */
#include "lcd.h"
/* Switch function prototypes and macro defines used in this file */
#include "switch.h"
/* Provides declarations of functions defined in this file */
#include "wdt.h"

void Wdt_Kick(void)
{
   bool err = true;

   /* Reset the watchdog timer */
   err &=  R_WDT_Control
           (
               PDL_WDT_RESET_COUNTER
           );

   /* Halt in while loop when RPDL errors detected */
   while(!err);
}

void CB_Overflow_WDT(void)
{
    /* Declare error flag */
    bool err = true;

    /* Turn all user LEDs on */
    err &=  R_IO_PORT_Write
            (
                PDL_IO_PORT_1_4|PDL_IO_PORT_1_5|PDL_IO_PORT_1_6|PDL_IO_PORT_1_7,
                0
            );

    /* Display "Watchdog Overflow" message on the debug LCD */
    Lcd_Display(LCD_LINE1_START_POS, "Watchdog");
    Lcd_Display(LCD_LINE2_START_POS, "Overflow");

    /* Halt in while loop when RPDL errors detected */
    while(!err);

    /* Infinite while loop */
    while(1);
}

void Wdt_Init(void)
{

   bool err = true;

   /* Configure the WDT unit to timeout after 1.342 Sec, and call the
      callback function CB_WDTOverflow when the WDT overflows -
      Watchdog period calculation -
          Period = (16384 x 2048)/25 MHz = 1.342 Sec   */
   err &=  R_WDT_Set
           (
               PDL_WDT_TIMEOUT_16384|PDL_WDT_PCLK_DIV_2048|PDL_WDT_TIMEOUT_NMI
           );

   /* Configure the WDT to generate NMI interrupt on overflow */
   err &=  R_INTC_CreateExtInterrupt
           (
               PDL_INTC_NMI,
               PDL_INTC_FILTER_DISABLE|PDL_INTC_FALLING|PDL_INTC_WDT_ENABLE,
               CB_Overflow_WDT,
               PDL_NO_DATA
           );

   /* Start the WDT */
   err &=  R_WDT_Control
           (
               PDL_WDT_RESET_COUNTER
           );

   /* Halt in while loop when RPDL errors detected */
   while(!err);
}




