/*""FILE COMMENT""*************************************************************
* System Name	: Interrupt program for RX210xx
* File Name		: Interrupt_BSC.c
* Version		: 2.00
* Contents		: Interrupt handler for the BSC
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

#include "r_pdl_bsc.h"
#include "r_pdl_definitions.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""*************************************************************
* Module outline : BSC interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_BSC(void)
*------------------------------------------------------------------------------
* Function		: Interrupt processing function for the BSC
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input			:
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_BSC_callback_func
*------------------------------------------------------------------------------
* Notes		 	:
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_BSC_BUSERR
#pragma interrupt Interrupt_BSC(vect=VECT_BSC_BUSERR, fint)
#else
#pragma interrupt Interrupt_BSC(vect=VECT_BSC_BUSERR)
#endif
void Interrupt_BSC(void)
{
	/* Call the user function */
	if (rpdl_BSC_callback_func != PDL_NO_FUNC)
	{
		rpdl_BSC_callback_func();
	}
}
/* End of file */
