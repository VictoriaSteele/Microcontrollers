/*""FILE COMMENT""*************************************************************
* System Name	: Register Write Protection API
* File Name		: r_pdl_rwp.h
* Version		: 2.00
* Contents		: RWP header
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

#ifndef R_PDL_RWP_H
#define R_PDL_RWP_H

#include "r_pdl_common_defs_RX210xx.h"

bool R_RWP_Control(
	uint16_t
);
bool R_RWP_GetStatus(
	uint8_t*,
	uint8_t*
);

/*Control Flags*/
#define PDL_RWP_ENABLE_CGC_WRITE			0x0001u
#define PDL_RWP_DISABLE_CGC_WRITE			0x0002u
#define PDL_RWP_ENABLE_MODE_RESET_WRITE		0x0004u
#define PDL_RWP_DISABLE_MODE_RESET_WRITE	0x0008u
#define PDL_RWP_ENABLE_LVD_WRITE			0x0010u
#define PDL_RWP_DISABLE_LVD_WRITE			0x0020u
#define PDL_RWP_ENABLE_MPC_WRITE			0x0040u
#define PDL_RWP_DISABLE_MPC_WRITE			0x0080u
#define PDL_RWP_ENABLE_VRCR_WRITE			0x0100u
#define PDL_RWP_DISABLE_VRCR_WRITE			0x0200u

#endif
/* End of file */
