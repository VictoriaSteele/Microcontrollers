/*""FILE COMMENT""*************************************************************
* System Name	: CGC API for RX210xx
* File Name		: r_pdl_cgc_RX210xx.h
* Version		: 2.00
* Contents		: CGC header
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

#ifndef R_PDL_CGC_RX210xx_H
#define R_PDL_CGC_RX210xx_H

/* Library prototypes */
bool R_CGC_SetAll(
	const uint8_t,
	const uint32_t,
	const double,
	const double,
	const double,
	const double,
	const double,
	const double
);

bool R_CGC_ControlAll(
	const uint8_t,
	const uint32_t,
	const uint8_t
);

bool R_CGC_GetStatusAll(
	volatile uint16_t * const
);

/* Macro definitions */

#define R_CGC_Set(a, b, c, d, e, f, g, h) \
R_CGC_SetAll( (a), (b), (c), (d), (e), (f), (g), (h) )

#define R_CGC_Control(a, b, c) \
R_CGC_ControlAll( (a), (b), (c) )

#define R_CGC_GetStatus(a) \
R_CGC_GetStatusAll( (a) )

#endif
/* End of file */
