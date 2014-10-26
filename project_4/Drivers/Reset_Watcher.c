/*!
 * @file
 * @brief Module to watch the Rx210 reset conditions
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <stdint.h>
#include "iodefine_RPDL.h"

#define WATCHDOG_RESET (0x02)

char *Reset_Watcher_GetConditions(void)
{
   uint8_t resetStatus = SYSTEM.RSTSR2.BYTE;

   if(WATCHDOG_RESET == resetStatus)
   {
      return " dog XX ";
   }

   return "powerup";
}
