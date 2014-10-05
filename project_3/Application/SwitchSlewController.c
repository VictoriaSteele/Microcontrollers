/*!
 * @file
 * @brief Switch Slew Controller module
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include <stddef.h>
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "Switch.h"

#define SLEW_HOLD_TIME (4)

#define NUM_ELEMENTS(X)  (sizeof(X)/sizeof(*(X)))

static uint8_t PRESSED_MASK = 0x00;
static uint8_t keyHoldTime[3] =
   { 0 };

void (*SwitchUpdateCallback)(uint8_t) = NULL;

static void SwitchPressedCallback(uint8_t switchIdMask)
{
   PRESSED_MASK |= switchIdMask;

   if(SwitchUpdateCallback)
   {
      SwitchUpdateCallback(switchIdMask);
   }
}

void ClearReleasedKeys(uint8_t switchIdMask)
{
   uint8_t index;
   uint8_t start = 1;

   for(index = 0; index < NUM_ELEMENTS(keyHoldTime); index++)
   {
      if(switchIdMask & (start << index))
      {
         keyHoldTime[index] = 0;
      }
   }
}

static void SwitchReleasedCallback(uint8_t switchIdMask)
{
   PRESSED_MASK &= ~(switchIdMask);
   ClearReleasedKeys(switchIdMask);
}

static void CheckPressedKeys()
{
   uint8_t switchIdMask = 0x00;
   uint8_t index;
   uint8_t start = 1;

   for(index = 0; index < NUM_ELEMENTS(keyHoldTime); index++)
   {
      if(PRESSED_MASK & (start << index))
      {
         if(keyHoldTime[index] > SLEW_HOLD_TIME)
         {
            switchIdMask |= (start << index);
         }
         else
         {
            keyHoldTime[index]++;
         }
      }
   }

   if(SwitchUpdateCallback)
   {
      SwitchUpdateCallback(switchIdMask);
   }
}

static void InitializePeriodicKeyCheck()
{
   bool err = true;

   err &= R_CMT_Create
      (
         0,
         PDL_CMT_FREQUENCY,
         4,
         CheckPressedKeys,
         3
         );

   while(!err)
      ;
}

void SwitchSlewController_SetUpdateCallback(void (*callback)(uint8_t))
{
   SwitchUpdateCallback = callback;
}

void SwitchSlewController_Init()
{
   SetSwitchPressCallback(SwitchPressedCallback);
   SetSwitchReleaseCallback(SwitchReleasedCallback);
   InitializePeriodicKeyCheck();
}
