/*""FILE COMMENT""*************************************************************
* System Name	: DAC API for RX210xx
* File Name		: r_pdl_dac_10.h
* Version		: 2.00
* Contents		: CRC function prototypes
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

#ifndef R_PDL_DAC_10_H
#define R_PDL_DAC_10_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_DAC_10_Create(
	uint8_t,
	uint16_t,
	uint16_t
);
bool R_DAC_10_Destroy(
	uint8_t
);
bool R_DAC_10_Write(
	uint8_t,
	uint16_t,
	uint16_t
);

/* Channel selection */
#define PDL_DAC_10_CHANNEL_0	0x01u
#define PDL_DAC_10_CHANNEL_1	0x02u

/* Data alignment */
#define PDL_DAC_10_ALIGN_LEFT	0x04u
#define PDL_DAC_10_ALIGN_RIGHT	0x08u

#endif
/* End of file */
