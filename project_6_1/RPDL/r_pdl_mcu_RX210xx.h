/*""FILE COMMENT""*************************************************************
* System Name	: MCU API for RX210xx
* File Name		: r_pdl_mcu_RX210xx.h
* Version		: 2.00
* Contents		: MCU API header
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

#ifndef R_PDL_MCU_RX210xx_H
#define R_PDL_MCU_RX210xx_H

/* Library prototypes */
bool R_MCU_ControlAll(
	const uint8_t
);
bool R_MCU_GetStatusAll(
	volatile uint16_t * const,
	volatile uint16_t * const,
	volatile uint32_t * const,
	volatile uint32_t * const
);

/* Macro definitions */
#define R_MCU_Control(a) \
( \
R_MCU_ControlAll( (a) ) \
)

#define R_MCU_GetStatus(a, b, c, d) \
( \
R_MCU_GetStatusAll( (a), (b), (c), (d) ) \
)

#endif
/* End of file */
