/*""FILE COMMENT""*************************************************************
* System Name	: CRC calculator API for RX210xx
* File Name		: r_pdl_crc_RX210xx.h
* Version		: 2.00
* Contents		: CRC header
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

#ifndef R_PDL_CRC_RX210xx_H
#define R_PDL_CRC_RX210xx_H

/* Library prototypes */
bool R_CRC_CreateAll(
	const uint8_t
);
bool R_CRC_DestroyAll(
	void
);
bool R_CRC_WriteAll(
	const uint8_t
);
bool R_CRC_ReadAll(
	const uint8_t,
	volatile uint16_t * const
);

/* Macro definitions */

#define R_CRC_Create(a) \
( \
R_CRC_CreateAll( (a) ) \
)

#define R_CRC_Destroy() \
( \
R_CRC_DestroyAll() \
)

#define R_CRC_Write(a) \
( \
R_CRC_WriteAll( (a) ) \
)

#define R_CRC_Read(a, b) \
( \
R_CRC_ReadAll( (a), (b) ) \
)

#endif
/* End of file */
