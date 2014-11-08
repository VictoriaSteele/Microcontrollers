/*!
 * @file
 * @brief Module to control the switch increments for user options
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <stddef.h>
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "Switch.h"

static uint8_t AVAILABLE_SWITCH_OPTIONS = 7;

static void (*SwitchUpdateCallback)(uint8_t) = NULL;

static void SwitchPressedCallback(uint8_t switchIdMask)
{
   if(switchIdMask == 0x01)
   {
      static uint8_t switchPressCount = 0;

      switchPressCount = (switchPressCount + 1) % AVAILABLE_SWITCH_OPTIONS;

      if(SwitchUpdateCallback)
      {
         SwitchUpdateCallback(switchPressCount);
      }
   }
}

void SwitchIncrementController_SetUpdateCallback(void (*callback)(uint8_t))
{
   SwitchUpdateCallback = callback;
}

void SwitchIncrementController_Init(void)
{
   Switch_SetPressCallback(SwitchPressedCallback);
}

