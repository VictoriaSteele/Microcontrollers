/*""FILE COMMENT""*************************************************************
* System Name	: Independent Watchdog timer API for RX210xx
* File Name		: r_pdl_iwdt.h
* Version		: 2.00
* Contents		: IWDT API header
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

#ifndef R_PDL_IWDT_H
#define R_PDL_IWDT_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_IWDT_Set(
	uint32_t
);
bool R_IWDT_Control(
	uint8_t
);
bool R_IWDT_Read(
	uint16_t *
);

/*** R_IWDT_Set: Parameter1 ****/
/* Time-Out Period selection (Cycles)*/
#define PDL_IWDT_TIMEOUT_1024	0x00000001u
#define PDL_IWDT_TIMEOUT_4096	0x00000002u
#define PDL_IWDT_TIMEOUT_8192	0x00000004u
#define PDL_IWDT_TIMEOUT_16384	0x00000008u

/* Clock Division Ratio selection*/
#define PDL_IWDT_CLOCK_OCO_1	0x00000010u
#define PDL_IWDT_CLOCK_OCO_16	0x00000020u
#define PDL_IWDT_CLOCK_OCO_32	0x00000040u
#define PDL_IWDT_CLOCK_OCO_64	0x00000080u
#define PDL_IWDT_CLOCK_OCO_128	0x00000100u
#define PDL_IWDT_CLOCK_OCO_256	0x00000200u

/*Window Start Position selection */
#define PDL_IWDT_WIN_START_25	0x00010000u
#define PDL_IWDT_WIN_START_50	0x00020000u
#define PDL_IWDT_WIN_START_75	0x00040000u
#define PDL_IWDT_WIN_START_100	0x00080000u 

/*Window End Position selection */
#define PDL_IWDT_WIN_END_0		0x00100000u
#define PDL_IWDT_WIN_END_25		0x00200000u
#define PDL_IWDT_WIN_END_50		0x00400000u
#define PDL_IWDT_WIN_END_75		0x00800000u

/* Timeout control */
#define PDL_IWDT_TIMEOUT_NMI	0x01000000u
#define PDL_IWDT_TIMEOUT_RESET	0x02000000u

/* Sleep Mode Count Stop */
#define PDL_IWDT_STOP_DISABLE	0x10000000u
#define PDL_IWDT_STOP_ENABLE	0x20000000u

/*** R_IWDT_Control: Parameter1 ****/
#define PDL_IWDT_REFRESH	0x01u

#endif
/* End of file */
