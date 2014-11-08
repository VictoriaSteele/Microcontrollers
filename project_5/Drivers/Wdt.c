/*!
 * @file
 * @brief Rx210 Watchdog timer configuration
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "r_pdl_cmt.h"
#include "r_pdl_intc.h"
#include "r_pdl_wdt.h"
#include "r_pdl_io_port.h"
#include "r_pdl_definitions.h"
#include "lcd.h"
#include "Wdt.h"

void Wdt_Kick(void)
{
   bool err = true;

   err &= R_WDT_Control
      (
         PDL_WDT_RESET_COUNTER
         );

   while(!err)
      ;
}

void Wdt_Init(void)
{

   bool err = true;

   // Configure the WDT unit to timeout after 2.68 Sec, and call the
   // callback function CB_WDTOverflow when the WDT overflows -
   // Watchdog period calculation -
   // Period = (8192 x 8192)/25 MHz = 2.68 Sec
   err &= R_WDT_Set
      (
         PDL_WDT_TIMEOUT_8192|PDL_WDT_PCLK_DIV_8192|PDL_WDT_TIMEOUT_RESET
         );

   err &= R_WDT_Control
      (
         PDL_WDT_RESET_COUNTER
         );

   while(!err)
      ;
}

