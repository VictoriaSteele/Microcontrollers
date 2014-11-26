/*""FILE COMMENT""*************************************************************
* System Name	: Interrupt program for RX210
* File Name		: Interrupt_CPA_LVD.c
* Version		: 2.00
* Contents		: Interrupt handlers for the Comparator A and LVD API modules
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

#include "r_pdl_cpa.h"
#include "r_pdl_lvd.h"
#include "r_pdl_definitions.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""*************************************************************
* Module outline : CPA / LVD interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_CPAn(void)
*------------------------------------------------------------------------------
* Function		: Interrupt processing function for Comparator A interrupt n
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input			: 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: CPA_callback_func[n]
*------------------------------------------------------------------------------
* Notes			: 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_CMPA_CMPA1
#pragma interrupt Interrupt_CPA1_LVD1(vect=VECT_CMPA_CMPA1, fint)
#else
#pragma interrupt Interrupt_CPA1_LVD1(vect=VECT_CMPA_CMPA1)
#endif
void Interrupt_CPA1_LVD1(void)
{
	/* Call the CPA user function? */
	if (rpdl_CPA_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_CPA_callback_func[0]();
	}

	/* Call the LVD user function? */
	if(rpdl_LVD_VDET1_callback_func != PDL_NO_FUNC)
	{
		rpdl_LVD_VDET1_callback_func();
	}
}

#if FAST_INTC_VECTOR == VECT_CMPA_CMPA2
#pragma interrupt Interrupt_CPA2_LVD2(vect=VECT_CMPA_CMPA2, fint)
#else
#pragma interrupt Interrupt_CPA2_LVD2(vect=VECT_CMPA_CMPA2)
#endif
void Interrupt_CPA2_LVD2(void)
{
	/* Call the CPA user function? */
	if (rpdl_CPA_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_CPA_callback_func[1]();
	}

	/* Call the LVD user function? */
	if(rpdl_LVD_VDET2_callback_func != PDL_NO_FUNC)
	{
		rpdl_LVD_VDET2_callback_func();
	}
}

/* End of file */
