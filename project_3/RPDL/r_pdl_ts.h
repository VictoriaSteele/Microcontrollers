/*""FILE COMMENT""*************************************************************
* System Name	: Temperature Sensor API for RX210xx
* File Name		: r_pdl_ts.h
* Version		: 2.00
* Contents		: TS function prototypes
* Customer		:
* Model			:
* Order			:
* CPU			: RX
* Compiler		: RXC
* OS			:
* Programmer	:
* Note			:
*******************************************************************************
* Copyright, 2013. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_TS_H
#define R_PDL_TS_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_TS_Create(
	uint8_t
);
bool R_TS_Destroy(
	void
);
bool R_TS_Control(
	uint8_t
);

/* PGA Gain Select */
#define PDL_TS_PGA_GAIN_0		0x01u
#define PDL_TS_PGA_GAIN_1		0x02u
#define PDL_TS_PGA_GAIN_2		0x04u
#define PDL_TS_PGA_GAIN_3		0x08u

/* PGA Enable */
#define PDL_TS_PGA_START		0x01u
#define PDL_TS_PGA_STOP			0x02u

#endif
/* End of file */
