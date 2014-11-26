/*""FILE COMMENT""*************************************************************
* System Name	: Voltage detection circuit API for RX210xx
* File Name		: r_pdl_lvd.h
* Version		: 2.00
* Contents		: LVD API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
*******************************************************************************
* Copyright, 2013. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_LVD_H
#define R_PDL_LVD_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_LVD_Create(
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t,
	VoidCallBackFunc,
	uint8_t,
	VoidCallBackFunc,
	uint8_t
);
					 
bool R_LVD_Control(
	uint8_t,
	uint8_t
);

bool R_LVD_GetStatus(
	uint8_t*
);

/* Create parameter configuration */

/* Monitor, Reset or Interrupt.
If reset; what type of reset negation.
If interrupt; what type and what to detect.*/
#define PDL_LVD_MONITOR_ONLY						0x0001u
#define PDL_LVD_RESET_NEGATION_VCC_MORE_THAN_VDET	0x0002u
#define PDL_LVD_RESET_NEGATION_AFTER_DELAY			0x0004u
#define PDL_LVD_INTERRUPT_NMI_DETECT_RISE			0x0008u
#define PDL_LVD_INTERRUPT_NMI_DETECT_FALL			0x0010u
#define PDL_LVD_INTERRUPT_NMI_DETECT_RISE_AND_FALL	0x0020u
#define PDL_LVD_INTERRUPT_MI_DETECT_RISE			0x0040u
#define PDL_LVD_INTERRUPT_MI_DETECT_FALL			0x0080u
#define PDL_LVD_INTERRUPT_MI_DETECT_RISE_AND_FALL	0x0100u

/* Digital Filter */
#define PDL_LVD_FILTER_DISABLE						0x0200u
#define PDL_LVD_FILTER_LOCO_DIV_1					0x0400u
#define PDL_LVD_FILTER_LOCO_DIV_2					0x0800u
#define PDL_LVD_FILTER_LOCO_DIV_4					0x1000u
#define PDL_LVD_FILTER_LOCO_DIV_8					0x2000u

/* Pin selection (VDET2 specific) */
#define PDL_LVD_VDET2_PIN_VCC						0x4000u
#define PDL_LVD_VDET2_PIN_CMPA2						0x8000u

/*Voltage Level (415 represents 4.15V*/
#define PDL_LVD_VOLTAGE_LEVEL_415	0x0001u
#define PDL_LVD_VOLTAGE_LEVEL_400	0x0002u
#define PDL_LVD_VOLTAGE_LEVEL_385	0x0004u
#define PDL_LVD_VOLTAGE_LEVEL_370	0x0008u
#define PDL_LVD_VOLTAGE_LEVEL_355	0x0010u
#define PDL_LVD_VOLTAGE_LEVEL_340	0x0020u
#define PDL_LVD_VOLTAGE_LEVEL_325	0x0040u
#define PDL_LVD_VOLTAGE_LEVEL_310	0x0080u
#define PDL_LVD_VOLTAGE_LEVEL_295	0x0100u
#define PDL_LVD_VOLTAGE_LEVEL_280	0x0200u
#define PDL_LVD_VOLTAGE_LEVEL_265	0x0400u
#define PDL_LVD_VOLTAGE_LEVEL_250	0x0800u
#define PDL_LVD_VOLTAGE_LEVEL_235	0x1000u
#define PDL_LVD_VOLTAGE_LEVEL_220	0x2000u
#define PDL_LVD_VOLTAGE_LEVEL_205	0x4000u
#define PDL_LVD_VOLTAGE_LEVEL_190	0x8000u

/* Control Parameters */
#define PDL_LVD_DISABLE			0x01u

/* Flag control */
#define PDL_LVD_CLEAR_DETECTION	0x02u

#endif
/* End of file */
