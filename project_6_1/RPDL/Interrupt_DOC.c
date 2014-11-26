/*""FILE COMMENT""*************************************************************
* System Name	: DOC Interrupt program for RX210xx
* File Name 	: Interrupt_DOC.c
* Version		: 2.00
* Contents		: Interrupt handler for RTC
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

#include "r_pdl_doc.h"
#include "r_pdl_definitions.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""*************************************************************
* Module outline: DOC interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_DOC(void)
*------------------------------------------------------------------------------
* Function		: Interrupt processing function for DOC
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input			: 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: 
*------------------------------------------------------------------------------
* Notes			: 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/
#if FAST_INTC_VECTOR == VECT_DOC_DOPCF
#pragma interrupt Interrupt_RTC_PRD(vect=VECT_DOC_DOPCF, fint)
#else
#pragma interrupt Interrupt_DOC_DOPCF(vect=VECT_DOC_DOPCF)
#endif
void Interrupt_DOC_DOPCF(void)
{
	/* Call the user function */
	if (rpdl_DOC_callback_func != PDL_NO_FUNC)
	{
		rpdl_DOC_callback_func();
	}
	
	/*Automatically clear the DOC Flag by writing 1 to DOPCFCL*/
	DOC.DOCR.BIT.DOPCFCL = 1;
}

/* End of file */
