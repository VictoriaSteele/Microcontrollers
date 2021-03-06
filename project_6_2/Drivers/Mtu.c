/*!
 * @file
 * @brief Mtu0 Driver File
 *
 * Copyright (c) 2014 - General Electric - All rights reserved.
 */

#include "r_pdl_mtu2.h"
#include "r_pdl_definitions.h"
#include "Mtu.h"

uint32_t Mtu_Read()
{
   bool err = true;
   uint32_t tcnt1 = 0;
   uint32_t tcnt2 = 0;

   err &= R_MTU2_ReadChannel(
      1,
      PDL_NO_PTR,
      (uint16_t *)&tcnt1,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR);

   err &= R_MTU2_ReadChannel(
      2,
      PDL_NO_PTR,
      (uint16_t *)&tcnt2,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR,
      PDL_NO_PTR);

   while(!err)
      ;

   return ((tcnt1<<16) | tcnt2);
}


void Mtu_Start()
{
   bool err = true;
   R_MTU2_ControlChannel_structure controlParameters;

   controlParameters.TCNT_TCNTU_value = 0;
   controlParameters.control_setting = PDL_MTU2_START;

   err &= R_MTU2_ControlChannel(
      1,
      &controlParameters
      );

   controlParameters.TCNT_TCNTU_value = 0;
   controlParameters.control_setting = PDL_MTU2_START;

   err &= R_MTU2_ControlChannel(
      2,
      &controlParameters
      );

   while(!err)
      ;
}

void Mtu_Stop()
{
   bool err = true;
   R_MTU2_ControlChannel_structure controlParameters;

   controlParameters.control_setting = PDL_MTU2_STOP;

   err &= R_MTU2_ControlChannel(
      1,
      &controlParameters
      );

   controlParameters.control_setting = PDL_MTU2_STOP;

   err &= R_MTU2_ControlChannel(
      2,
      &controlParameters
      );

   while(!err)
      ;
}

void Mtu_Init()
{
   bool err = true;
   R_MTU2_Create_structure createParameters;

   R_MTU2_Create_load_defaults(&createParameters);

   err &= R_MTU2_Set(
      1,
      PDL_MTU2_PIN_0A_P34
      );

   createParameters.channel_mode = PDL_MTU2_MODE_NORMAL;
   createParameters.counter_operation = PDL_MTU2_CLK_CASCADE ;
   createParameters.TCNT_TCNTU_value = 0;
   createParameters.interrupt_priority_1 = 7;

   err &= R_MTU2_Create(
      1,
      &createParameters
      );

   R_MTU2_Create_load_defaults(&createParameters);

   err &= R_MTU2_Set(
      2,
      PDL_MTU2_PIN_0A_P34
      );

   createParameters.channel_mode = PDL_MTU2_MODE_NORMAL;
   createParameters.counter_operation = PDL_MTU2_CLK_PCLK_DIV_4 ;
   createParameters.TCNT_TCNTU_value = 0;
   createParameters.TGRA_TCNTV_value = 0xFFFF;
   createParameters.interrupt_priority_1 = 7;

   err &= R_MTU2_Create(
      2,
      &createParameters
      );

   while(!err)
      ;
}

