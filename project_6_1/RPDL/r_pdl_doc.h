/*""FILE COMMENT""*************************************************************
* System Name	: DOC API
* File Name		: r_pdl_doc.h
* Version		: 2.00
* Contents		: DOC API header
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

#ifndef R_PDL_DOC_H
#define R_PDL_DOC_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_DOC_Create(const uint8_t,
					uint16_t,
					VoidCallBackFunc const,
					const uint8_t);
bool R_DOC_Control(const uint8_t, const uint16_t);
bool R_DOC_Read(uint8_t* const pStatus, uint16_t* const);
bool R_DOC_Write(const uint16_t*, uint16_t);
bool R_DOC_Destroy(void);

/*Common defines*/

/*** R_DOC_Create and R_DOC_Control ****/
/*Parameter1:*/

/*Operating Mode*/
#define PDL_DOC_COMPARISON_MATCH 	0x01u
#define PDL_DOC_COMPARISON_MISMATCH 0x02u
#define PDL_DOC_MODE_ADD 			0x04u
#define PDL_DOC_MODE_SUBTRACT 		0x08u


/*** R_ELC_Control Specific ****/
#define PDL_DOC_INTERRUPT_ENABLE	0x10u
#define PDL_DOC_INTERRUPT_DISABLE	0x20u

/*Clear the addition overflow/ subtraction underflow flag*/
#define PDL_DOC_FLAG_CLEAR			0x40u

/*Update compare value or addition/subtraction accumulator*/
#define PDL_DOC_DATA_UPDATE			0x80u

#endif
/* End of file */
