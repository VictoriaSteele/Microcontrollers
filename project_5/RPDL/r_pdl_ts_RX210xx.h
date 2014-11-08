/*""FILE COMMENT""*************************************************************
* System Name	: Temperature Sensor API for RX210xx
* File Name		: r_pdl_ts_RX210xx.h
* Version		: 2.00
* Contents		: TS header
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

#ifndef R_PDL_TS_RX210xx_H
#define R_PDL_TS_RX210xx_H

/* Library prototypes */
bool R_TS_CreateAll(
	const uint8_t
);
bool R_TS_DestroyAll(
	void
);
bool R_TS_ControlAll(
	const uint8_t
);

/* Macro definitions */

#define R_TS_Create(a) \
( \
R_TS_CreateAll( (a) ) \
)

#define R_TS_Destroy() \
( \
R_TS_DestroyAll() \
)

#define R_TS_Control(a) \
( \
R_TS_ControlAll( (a) ) \
)



#endif
/* End of file */
