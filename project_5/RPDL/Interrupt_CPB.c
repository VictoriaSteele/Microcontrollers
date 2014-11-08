/*""FILE COMMENT""*************************************************************
* System Name	: Interrupt program for RX210xx
* File Name		: Interrupt_CPB.c
* Version		: 2.00
* Contents		: Interrupt handlers for the CMT channels
* Customer		: 
* Model		 	:
* Order		 	:
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

#include "r_pdl_cpb.h"
#include "r_pdl_definitions.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_CPBn(void)
*------------------------------------------------------------------------------
* Function		: Interrupt processing function for CPB channel n
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input			:
* Output		: 
*------------------------------------------------------------------------------
* Use function	: CPB_callback_func[n]
*------------------------------------------------------------------------------
* Notes			:
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_CMPB_CMPB0
#pragma interrupt Interrupt_CPB0(vect=VECT_CMPB_CMPB0, fint)
#else
#pragma interrupt Interrupt_CPB0(vect=VECT_CMPB_CMPB0)
#endif
void Interrupt_CPB0(void)
{
	/* Call the user function */
	if (rpdl_CPB_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_CPB_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_CMPB_CMPB1
#pragma interrupt Interrupt_CPB1(vect=VECT_CMPB_CMPB1, fint)
#else
#pragma interrupt Interrupt_CPB1(vect=VECT_CMPB_CMPB1)
#endif
void Interrupt_CPB1(void)
{
	/* Call the user function */
	if (rpdl_CPB_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_CPB_callback_func[1]();
	}
}
/* End of file */
