/*""FILE COMMENT""*************************************************************
* System Name	: Interrupt program for RX210xx
* File Name		: Interrupt_TPU.c
* Version		: 2.00
* Contents		: Interrupt handlers for the TPU channels
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: Interrupts shared between TPU and the MTU2 are
*				:  handled in a file called Interrupt_MTU2_TPU.c.	
*******************************************************************************
* Copyright, 2013. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FILE COMMENT END""*********************************************************/

#include "r_pdl_tpu.h"
#include "r_pdl_definitions.h"
#include "r_pdl_user_definitions.h"

/*""FUNC COMMENT""*************************************************************
* Module outline: Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInA(void)
*------------------------------------------------------------------------------
* Function		: TGInA interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input			: 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_TGRA_callback_func[n]
*------------------------------------------------------------------------------
* Notes			: 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU0_TGI0A
#pragma interrupt Interrupt_TPU0_TGI0A(vect=VECT_TPU0_TGI0A, fint)
#else
#pragma interrupt Interrupt_TPU0_TGI0A(vect=VECT_TPU0_TGI0A)
#endif
void Interrupt_TPU0_TGI0A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU1_TGI1A
#pragma interrupt Interrupt_TPU1_TGI1A(vect=VECT_TPU1_TGI1A, fint)
#else
#pragma interrupt Interrupt_TPU1_TGI1A(vect=VECT_TPU1_TGI1A)
#endif
void Interrupt_TPU1_TGI1A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[1]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU2_TGI2A
#pragma interrupt Interrupt_TPU2_TGI2A(vect=VECT_TPU2_TGI2A, fint)
#else
#pragma interrupt Interrupt_TPU2_TGI2A(vect=VECT_TPU2_TGI2A)
#endif
void Interrupt_TPU2_TGI2A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[2] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[2]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU3_TGI3A
#pragma interrupt Interrupt_TPU3_TGI3A(vect=VECT_TPU3_TGI3A, fint)
#else
#pragma interrupt Interrupt_TPU3_TGI3A(vect=VECT_TPU3_TGI3A)
#endif
void Interrupt_TPU3_TGI3A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[3]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU4_TGI4A
#pragma interrupt Interrupt_TPU4_TGI4A(vect=VECT_TPU4_TGI4A, fint)
#else
#pragma interrupt Interrupt_TPU4_TGI4A(vect=VECT_TPU4_TGI4A)
#endif
void Interrupt_TPU4_TGI4A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[4] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[4]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU5_TGI5A
#pragma interrupt Interrupt_TPU5_TGI5A(vect=VECT_TPU5_TGI5A, fint)
#else
#pragma interrupt Interrupt_TPU5_TGI5A(vect=VECT_TPU5_TGI5A)
#endif
void Interrupt_TPU5_TGI5A(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRA_callback_func[5] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRA_callback_func[5]();
	}
}

/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInB(void)
*------------------------------------------------------------------------------
* Function		: TGInB interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input		 : 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_TGRB_callback_func[n]
*------------------------------------------------------------------------------
* Notes		 : 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU0_TGI0B
#pragma interrupt Interrupt_TPU0_TGI0B(vect=VECT_TPU0_TGI0B, fint)
#else
#pragma interrupt Interrupt_TPU0_TGI0B(vect=VECT_TPU0_TGI0B)
#endif
void Interrupt_TPU0_TGI0B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU1_TGI1B
#pragma interrupt Interrupt_TPU1_TGI1B(vect=VECT_TPU1_TGI1B, fint)
#else
#pragma interrupt Interrupt_TPU1_TGI1B(vect=VECT_TPU1_TGI1B)
#endif
void Interrupt_TPU1_TGI1B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[1]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU2_TGI2B
#pragma interrupt Interrupt_TPU2_TGI2B(vect=VECT_TPU2_TGI2B, fint)
#else
#pragma interrupt Interrupt_TPU2_TGI2B(vect=VECT_TPU2_TGI2B)
#endif
void Interrupt_TPU2_TGI2B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[2] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[2]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU3_TGI3B
#pragma interrupt Interrupt_TPU3_TGI3B(vect=VECT_TPU3_TGI3B, fint)
#else
#pragma interrupt Interrupt_TPU3_TGI3B(vect=VECT_TPU3_TGI3B)
#endif
void Interrupt_TPU3_TGI3B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[3]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU4_TGI4B
#pragma interrupt Interrupt_TPU4_TGI4B(vect=VECT_TPU4_TGI4B, fint)
#else
#pragma interrupt Interrupt_TPU4_TGI4B(vect=VECT_TPU4_TGI4B)
#endif
void Interrupt_TPU4_TGI4B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[4] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[4]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU5_TGI5B
#pragma interrupt Interrupt_TPU5_TGI5B(vect=VECT_TPU5_TGI5B, fint)
#else
#pragma interrupt Interrupt_TPU5_TGI5B(vect=VECT_TPU5_TGI5B)
#endif
void Interrupt_TPU5_TGI5B(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRB_callback_func[5] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRB_callback_func[5]();
	}
}

/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInC(void)
*------------------------------------------------------------------------------
* Function		: TGInC interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input		 : 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_TGRC_callback_func[n]
*------------------------------------------------------------------------------
* Notes		 : 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU0_TGI0C
#pragma interrupt Interrupt_TPU0_TGI0C(vect=VECT_TPU0_TGI0C, fint)
#else
#pragma interrupt Interrupt_TPU0_TGI0C(vect=VECT_TPU0_TGI0C)
#endif
void Interrupt_TPU0_TGI0C(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRC_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRC_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU3_TGI3C
#pragma interrupt Interrupt_TPU3_TGI3C(vect=VECT_TPU3_TGI3C, fint)
#else
#pragma interrupt Interrupt_TPU3_TGI3C(vect=VECT_TPU3_TGI3C)
#endif
void Interrupt_TPU3_TGI3C(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRC_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRC_callback_func[3]();
	}
}


/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInD(void)
*------------------------------------------------------------------------------
* Function		: TGInD interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input		 : 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_TGRD_callback_func[n]
*------------------------------------------------------------------------------
* Notes		 : 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU0_TGI0D
#pragma interrupt Interrupt_TPU0_TGI0D(vect=VECT_TPU0_TGI0D, fint)
#else
#pragma interrupt Interrupt_TPU0_TGI0D(vect=VECT_TPU0_TGI0D)
#endif
void Interrupt_TPU0_TGI0D(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRD_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRD_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU3_TGI3D
#pragma interrupt Interrupt_TPU3_TGI3D(vect=VECT_TPU3_TGI3D, fint)
#else
#pragma interrupt Interrupt_TPU3_TGI3D(vect=VECT_TPU3_TGI3D)
#endif
void Interrupt_TPU3_TGI3D(void)
{
	/* Call the user function */
	if (rpdl_TPU_TGRD_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_TPU_TGRD_callback_func[3]();
	}
}

/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInV(void)
*------------------------------------------------------------------------------
* Function		: TGInV interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input		 : 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_Overflow_callback_func[n]
*------------------------------------------------------------------------------
* Notes		 : 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU0_TCI0V
#pragma interrupt Interrupt_TPU0_TCI0V(vect=VECT_TPU0_TCI0V, fint)
#else
#pragma interrupt Interrupt_TPU0_TCI0V(vect=VECT_TPU0_TCI0V)
#endif
void Interrupt_TPU0_TCI0V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[0] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[0]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU1_TCI1V
#pragma interrupt Interrupt_TPU1_TCI1V(vect=VECT_TPU1_TCI1V, fint)
#else
#pragma interrupt Interrupt_TPU1_TCI1V(vect=VECT_TPU1_TCI1V)
#endif
void Interrupt_TPU1_TCI1V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[1]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU2_TCI2V
#pragma interrupt Interrupt_TPU2_TCI2V(vect=VECT_TPU2_TCI2V, fint)
#else
#pragma interrupt Interrupt_TPU2_TCI2V(vect=VECT_TPU2_TCI2V)
#endif
void Interrupt_TPU2_TCI2V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[2] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[2]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU3_TCI3V
#pragma interrupt Interrupt_TPU3_TCI3V(vect=VECT_TPU3_TCI3V, fint)
#else
#pragma interrupt Interrupt_TPU3_TCI3V(vect=VECT_TPU3_TCI3V)
#endif
void Interrupt_TPU3_TCI3V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[3] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[3]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU4_TCI4V
#pragma interrupt Interrupt_TPU4_TCI4V(vect=VECT_TPU4_TCI4V, fint)
#else
#pragma interrupt Interrupt_TPU4_TCI4V(vect=VECT_TPU4_TCI4V)
#endif
void Interrupt_TPU4_TCI4V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[4] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[4]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU5_TCI5V
#pragma interrupt Interrupt_TPU5_TCI5V(vect=VECT_TPU5_TCI5V, fint)
#else
#pragma interrupt Interrupt_TPU5_TCI5V(vect=VECT_TPU5_TCI5V)
#endif
void Interrupt_TPU5_TCI5V(void)
{
	/* Call the user function */
	if (rpdl_TPU_Overflow_callback_func[5] != PDL_NO_FUNC)
	{
		rpdl_TPU_Overflow_callback_func[5]();
	}
}

/*""FUNC COMMENT""*************************************************************
* Module outline : Timer interrupt processing
*------------------------------------------------------------------------------
* Declaration	: void Interrupt_TPUn_TGInU(void)
*------------------------------------------------------------------------------
* Function		: TGInU interrupt processing
*------------------------------------------------------------------------------
* Argument		: Nothing
*------------------------------------------------------------------------------
* Return value	: Nothing
*------------------------------------------------------------------------------
* Input		 : 
* Output		: 
*------------------------------------------------------------------------------
* Use function	: rpdl_TPU_Underflow_callback_func[n]
*------------------------------------------------------------------------------
* Notes		 : 
*------------------------------------------------------------------------------
* History		: 2013.05.14
*				: Ver 2.00
*				: CS Release
*""FUNC COMMENT END""*********************************************************/

#if FAST_INTC_VECTOR == VECT_TPU1_TCI1U
#pragma interrupt Interrupt_TPU1_TCI1U(vect=VECT_TPU1_TCI1U, fint)
#else
#pragma interrupt Interrupt_TPU1_TCI1U(vect=VECT_TPU1_TCI1U)
#endif
void Interrupt_TPU1_TCI1U(void)
{
	/* Call the user function */
	if (rpdl_TPU_Underflow_callback_func[1] != PDL_NO_FUNC)
	{
		rpdl_TPU_Underflow_callback_func[1]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU2_TCI2U
#pragma interrupt Interrupt_TPU2_TCI2U(vect=VECT_TPU2_TCI2U, fint)
#else
#pragma interrupt Interrupt_TPU2_TCI2U(vect=VECT_TPU2_TCI2U)
#endif
void Interrupt_TPU2_TCI2U(void)
{
	/* Call the user function */
	if (rpdl_TPU_Underflow_callback_func[2] != PDL_NO_FUNC)
	{
		rpdl_TPU_Underflow_callback_func[2]();
	}
}


#if FAST_INTC_VECTOR == VECT_TPU4_TCI4U
#pragma interrupt Interrupt_TPU4_TCI4U(vect=VECT_TPU4_TCI4U, fint)
#else
#pragma interrupt Interrupt_TPU4_TCI4U(vect=VECT_TPU4_TCI4U)
#endif
void Interrupt_TPU4_TCI4U(void)
{
	/* Call the user function */
	if (rpdl_TPU_Underflow_callback_func[4] != PDL_NO_FUNC)
	{
		rpdl_TPU_Underflow_callback_func[4]();
	}
}

#if FAST_INTC_VECTOR == VECT_TPU5_TCI5U
#pragma interrupt Interrupt_TPU5_TCI5U(vect=VECT_TPU5_TCI5U, fint)
#else
#pragma interrupt Interrupt_TPU5_TCI5U(vect=VECT_TPU5_TCI5U)
#endif
void Interrupt_TPU5_TCI5U(void)
{
	/* Call the user function */
	if (rpdl_TPU_Underflow_callback_func[5] != PDL_NO_FUNC)
	{
		rpdl_TPU_Underflow_callback_func[5]();
	}
}

/* End of file */
