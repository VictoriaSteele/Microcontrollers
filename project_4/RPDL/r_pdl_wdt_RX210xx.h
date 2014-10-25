/*""FILE COMMENT""*************************************************************
* System Name	: WDT API for RX210xx
* File Name		: r_pdl_wdt_RX210xx.h
* Version		: 2.00
* Contents		: WDT API header
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

#ifndef R_PDL_WDT_RX210xx_H
#define R_PDL_WDT_RX210xx_H

/* Callback function storage */
extern VoidCallBackFunc rpdl_WDT_callback_func;

/* Library prototypes */
bool R_WDT_SetAll(
	const uint32_t
);
bool R_WDT_ControlAll(
	const uint8_t
);
bool R_WDT_ReadAll(
	volatile uint16_t * const
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_WDT_Set(a) \
( \
R_WDT_SetAll( (a) ) \
)

#define R_WDT_Control(a) \
( \
R_WDT_ControlAll( (a) ) \
)

#define R_WDT_Read(a) \
( \
R_WDT_ReadAll( (a) ) \
)

#endif
/* End of file */
