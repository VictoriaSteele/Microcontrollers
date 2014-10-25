/*!
 * @file
 * @brief Methods to control the switches for the Rx210 Dev Kit
 * File originally generated by Renesas
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "r_pdl_intc.h"
#include "r_pdl_cmt.h"
#include "r_pdl_definitions.h"
#include "Switch.h"

#define SWITCH_1    0x01  // Switch 1 pressed flag mask
#define SWITCH_2    0x02  // Switch 2 pressed flag mask
#define SWITCH_3    0x04  // Switch 3 pressed flag mask

void (*SwitchPressCallbackFunc)(uint8_t) = NULL;
void (*SwitchReleaseCallbackFunc)(uint8_t) = NULL;

void SwitchDebounceCB(void)
{
   bool err = true;

   // Re-enable switch 1 interrupts
   err &= R_INTC_ControlExtInterrupt
      (
         PDL_INTC_IRQ1,
         PDL_INTC_ENABLE|PDL_INTC_CLEAR_IR_FLAG
         );

   // Re-enable switch 2 interrupts
   err &= R_INTC_ControlExtInterrupt
      (
         PDL_INTC_IRQ3,
         PDL_INTC_ENABLE|PDL_INTC_CLEAR_IR_FLAG
         );

   // Re-enable switch 3 interrupts
   err &= R_INTC_ControlExtInterrupt
      (
         PDL_INTC_IRQ4,
         PDL_INTC_ENABLE|PDL_INTC_CLEAR_IR_FLAG
         );

   while(!err)
      ;
}

void SW1_InterruptCB(void)
{
   bool err = true;
   uint8_t status = 0x00;

   // Fetch input edge status
   err &= R_INTC_GetExtInterruptStatus
      (
         PDL_INTC_IRQ1,
         &status
         );

   // Check if interrupt was triggered from falling edge
   if((status & 0x0C) == 0x04)
   {
      // Disable switch interrupts and change to rising edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ1,
            PDL_INTC_DISABLE|PDL_INTC_RISING
            );

      if(SwitchPressCallbackFunc)
      {
         SwitchPressCallbackFunc(SWITCH_1);
      }
   }

   // Interrupt was triggered from a rising edge
   else
   {
      // Disable switch interrupts and change to falling edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ1,
            PDL_INTC_DISABLE|PDL_INTC_FALLING
            );

      if(SwitchReleaseCallbackFunc)
      {
         SwitchReleaseCallbackFunc(SWITCH_1);
      }
   }

   // Create 10ms one-shot timer interrupt to de-bounce the switch input
   err &= R_CMT_CreateOneShot
      (
         1,
         PDL_NO_DATA,
         10E-3,
         SwitchDebounceCB,
         8
         );

   while(!err)
      ;
}

void SW2_InterruptCB(void)
{
   bool err = true;
   uint8_t status = 0x00;

   // Fetch input edge status
   err &= R_INTC_GetExtInterruptStatus
      (
         PDL_INTC_IRQ3,
         &status
         );

   // Check if interrupt was triggered from falling edge
   if((status & 0x0C) == 0x04)
   {
      // Disable switch interrupts and change to rising edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ3,
            PDL_INTC_DISABLE|PDL_INTC_RISING
            );

      if(SwitchPressCallbackFunc)
      {
         SwitchPressCallbackFunc(SWITCH_2);
      }
   }
   else
   {
      // Disable switch interrupts and change to falling edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ3,
            PDL_INTC_DISABLE|PDL_INTC_FALLING
            );

      if(SwitchReleaseCallbackFunc)
      {
         SwitchReleaseCallbackFunc(SWITCH_2);
      }
   }

   // Create 10ms one-shot timer interrupt to de-bounce the switch input
   err &= R_CMT_CreateOneShot
      (
         1,
         PDL_NO_DATA,
         10E-3,
         SwitchDebounceCB,
         8
         );

   while(!err)
      ;
}
void SW3_InterruptCB(void)
{
   bool err = true;
   uint8_t status = 0x00;

   // Fetch input edge status
   err &= R_INTC_GetExtInterruptStatus
      (
         PDL_INTC_IRQ4,
         &status
         );

   // Check if interrupt was triggered from falling edge
   if((status & 0x0C) == 0x04)
   {
      // Disable switch interrupts and change to rising edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ4,
            PDL_INTC_DISABLE|PDL_INTC_RISING
            );

      // Check if switch press callback function is not NULL
      if(SwitchPressCallbackFunc)
      {
         // Execute user callback function
         SwitchPressCallbackFunc(SWITCH_3);
      }
   }

   else
   {
      // Switch to falling edge detection
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ4,
            PDL_INTC_FALLING
            );

      if(SwitchReleaseCallbackFunc)
      {
         SwitchReleaseCallbackFunc(SWITCH_3);
      }
   }

   // Create 10ms one-shot timer interrupt to de-bounce the switch input
   err &= R_CMT_CreateOneShot
      (
         1,
         PDL_NO_DATA,
         10E-3,
         SwitchDebounceCB,
         8
         );

   while(!err)
      ;
}

void Switch_Init(void)
{
   bool err = true;

   // Select the IRQ pins to be used for interrupts
   err &= R_INTC_SetExtInterrupt
      (
         PDL_INTC_IRQ1_PORT_3_1|PDL_INTC_IRQ3_PORT_3_3|\
         PDL_INTC_IRQ4_PORT_3_4
         );

   // Configure IRQ1 interrupt (connected to SW1)
   err &= R_INTC_CreateExtInterrupt
      (
         PDL_INTC_IRQ1,
         PDL_INTC_FALLING,
         SW1_InterruptCB,
         7
         );

   // Configure IRQ3 interrupt (connected to SW2)
   err &= R_INTC_CreateExtInterrupt
      (
         PDL_INTC_IRQ3,
         PDL_INTC_FALLING,
         SW2_InterruptCB,
         7
         );

   // Configure IRQ4 interrupt (connected to SW3)
   err &= R_INTC_CreateExtInterrupt
      (
         PDL_INTC_IRQ4,
         PDL_INTC_FALLING,
         SW3_InterruptCB,
         7
         );

   while(!err)
      ;
}

void Switch_ControlInterrupts(bool control)
{
   bool err = true;

   if(control)
   {
      // Enable SW1 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ1,
            PDL_INTC_ENABLE|PDL_INTC_FALLING
            );

      // Enable SW2 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ3,
            PDL_INTC_ENABLE|PDL_INTC_FALLING
            );

      // Enable SW3 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ4,
            PDL_INTC_ENABLE|PDL_INTC_FALLING
            );
   }
   else
   {
      // Disable SW1 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ1,
            PDL_INTC_DISABLE
            );

      // Disable SW2 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ3,
            PDL_INTC_DISABLE
            );

      // Disable SW3 interrupts
      err &= R_INTC_ControlExtInterrupt
         (
            PDL_INTC_IRQ4,
            PDL_INTC_DISABLE
            );
   }

   while(!err)
      ;
}

void Switch_SetPressCallback(void (*callback)(uint8_t))
{
   SwitchPressCallbackFunc = callback;
}

void Switch_SetReleaseCallback(void (*callback)(uint8_t))
{
   SwitchReleaseCallbackFunc = callback;
}
