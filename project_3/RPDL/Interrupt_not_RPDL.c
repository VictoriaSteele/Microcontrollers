/*""FILE COMMENT""*************************************************************
* System Name	: Interrupt program for RX210xx
* File Name		: Interrupt_not_RPDL.c
* Version		: 2.00
* Contents		: Interrupt handlers for peripherals outside the scope
*				: of RPDL
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

#include "r_pdl_common_defs_RX210xx.h"
#include "r_pdl_user_definitions.h"

/* Remove the // comment mark if an RPDL interrupt file is not included 
   in the build but an interrupt vector table entry is still required. */
//#define RPDL_ADC_12_not_used
//#define RPDL_BSC_not_used
//#define RPDL_CAC_not_used
//#define RPDL_CMT_not_used
//#define RPDL_CPA_LVD_not_used
//#define RPDL_CPB_not_used
//#define RPDL_DMAC_not_used
//#define RPDL_DOC_not_used
//#define RPDL_ELC_not_used
//#define RPDL_IIC_not_used
//#define RPDL_MTU2_not_used
//#define RPDL_POE_not_used
//#define RPDL_RTC_not_used
//#define RPDL_SCI_not_used
//#define RPDL_SPI_not_used
//#define RPDL_TMR_not_used
//#define RPDL_TPU_not_used

#ifdef RPDL_ADC_12_not_used
#pragma interrupt Interrupt_ADC_12_0(vect=VECT_S12AD_S12ADI0)
void Interrupt_ADC_12_0(void){}
#pragma interrupt Interrupt_ADC_12_0_b(vect=VECT_S12AD_GBADI)
void Interrupt_ADC_12_0_b(void){}
#endif

#ifdef RPDL_BSC_not_used
#pragma interrupt Interrupt_BSC(vect=VECT_BSC_BUSERR)
void Interrupt_BSC(void){}
#endif

#ifdef RPDL_CAC_not_used
#pragma interrupt Interrupt_CAC_frequency_error(vect=VECT_CAC_FERRF)
void Interrupt_CAC_frequency_error(void){}
#pragma interrupt Interrupt_CAC_measurement_complete(vect=VECT_CAC_MENDF)
void Interrupt_CAC_measurement_complete(void){}
#pragma interrupt Interrupt_CAC_overflow(vect=VECT_CAC_OVFF)
void Interrupt_CAC_overflow(void){}
#endif

#ifdef RPDL_CMT_not_used
#pragma interrupt Interrupt_CMT0(vect=VECT_CMT0_CMI0)
void Interrupt_CMT0(void){}
#pragma interrupt Interrupt_CMT1(vect=VECT_CMT1_CMI1)
void Interrupt_CMT1(void){}
#pragma interrupt Interrupt_CMT2(vect=VECT_CMT2_CMI2)
void Interrupt_CMT2(void){}
#pragma interrupt Interrupt_CMT3(vect=VECT_CMT3_CMI3)
void Interrupt_CMT3(void){}
#endif

#ifdef RPDL_CPA_LVD_not_used
#pragma interrupt Interrupt_CPA1_LVD1(vect=VECT_CMPA_CMPA1)
void Interrupt_CPA1_LVD1(void){}
#pragma interrupt Interrupt_CPA2_LVD2(vect=VECT_CMPA_CMPA2)
void Interrupt_CPA2_LVD2(void){}
#endif

#ifdef RPDL_CPB_not_used
#pragma interrupt Interrupt_CPB0(vect=VECT_CMPB_CMPB0)
void Interrupt_CPB0(void){}
#pragma interrupt Interrupt_CPB1(vect=VECT_CMPB_CMPB1)
void Interrupt_CPB1(void){}
#endif

#ifdef RPDL_DMAC_not_used
#pragma interrupt Interrupt_DMAC0(vect=VECT_DMAC_DMAC0I)
void Interrupt_DMAC0(void){}
#pragma interrupt Interrupt_DMAC1(vect=VECT_DMAC_DMAC1I)
void Interrupt_DMAC1(void){}
#pragma interrupt Interrupt_DMAC2(vect=VECT_DMAC_DMAC2I)
void Interrupt_DMAC2(void){}
#pragma interrupt Interrupt_DMAC3(vect=VECT_DMAC_DMAC3I)
void Interrupt_DMAC3(void){}
#endif

#ifdef RPDL_DOC_not_used
#pragma interrupt Interrupt_DOC_DOPCF(vect=VECT_DOC_DOPCF)
void Interrupt_DOC_DOPCF(void){}
#endif

#ifdef RPDL_ELC_not_used
#pragma interrupt Interrupt_ELSR18I(vect=VECT_ELC_ELSR18I)
void Interrupt_ELSR18I(void){}
#pragma interrupt Interrupt_ELSR19I(vect=VECT_ELC_ELSR19I)
void Interrupt_ELSR19I(void){}
#endif

#ifdef RPDL_IIC_not_used
#pragma interrupt Interrupt_IIC_EEI0(vect=VECT_RIIC0_EEI0)
void Interrupt_IIC_EEI0(void){}
#pragma interrupt Interrupt_IIC_RXI0(vect=VECT_RIIC0_RXI0)
void Interrupt_IIC_RXI0(void){}
#pragma interrupt Interrupt_IIC_TXI0(vect=VECT_RIIC0_TXI0)
void Interrupt_IIC_TXI0(void){}
#pragma interrupt Interrupt_IIC_TEI0(vect=VECT_RIIC0_TEI0)
void Interrupt_IIC_TEI0(void){}
#endif

#ifdef RPDL_MTU2_not_used
#pragma interrupt Interrupt_MTU0_TGIA0(vect=VECT_MTU0_TGIA0)
void Interrupt_MTU0_TGIA0(void){}
#pragma interrupt Interrupt_MTU1_TGIA1(vect=VECT_MTU1_TGIA1)
void Interrupt_MTU1_TGIA1(void){}
#pragma interrupt Interrupt_MTU2_TGIA2(vect=VECT_MTU2_TGIA2)
void Interrupt_MTU2_TGIA2(void){}
#pragma interrupt Interrupt_MTU3_TGIA3(vect=VECT_MTU3_TGIA3)
void Interrupt_MTU3_TGIA3(void){}
#pragma interrupt Interrupt_MTU4_TGIA4(vect=VECT_MTU4_TGIA4)
void Interrupt_MTU4_TGIA4(void){}
#pragma interrupt Interrupt_MTU0_TGIB0(vect=VECT_MTU0_TGIB0)
void Interrupt_MTU0_TGIB0(void){}
#pragma interrupt Interrupt_MTU1_TGIB1(vect=VECT_MTU1_TGIB1)
void Interrupt_MTU1_TGIB1(void){}
#pragma interrupt Interrupt_MTU2_TGIB2(vect=VECT_MTU2_TGIB2)
void Interrupt_MTU2_TGIB2(void){}
#pragma interrupt Interrupt_MTU3_TGIB3(vect=VECT_MTU3_TGIB3)
void Interrupt_MTU3_TGIB3(void){}
#pragma interrupt Interrupt_MTU4_TGIB4(vect=VECT_MTU4_TGIB4)
void Interrupt_MTU4_TGIB4(void){}
#pragma interrupt Interrupt_MTU0_TGIC0(vect=VECT_MTU0_TGIC0)
void Interrupt_MTU0_TGIC0(void){}
#pragma interrupt Interrupt_MTU3_TGIC3(vect=VECT_MTU3_TGIC3)
void Interrupt_MTU3_TGIC3(void){}
#pragma interrupt Interrupt_MTU4_TGIC4(vect=VECT_MTU4_TGIC4)
void Interrupt_MTU4_TGIC4(void){}
#pragma interrupt Interrupt_MTU0_TGID0(vect=VECT_MTU0_TGID0)
void Interrupt_MTU0_TGID0(void){}
#pragma interrupt Interrupt_MTU3_TGID3(vect=VECT_MTU3_TGID3)
void Interrupt_MTU3_TGID3(void){}
#pragma interrupt Interrupt_MTU4_TGID4(vect=VECT_MTU4_TGID4)
void Interrupt_MTU4_TGID4(void){}
#pragma interrupt Interrupt_MTU0_TGIE0(vect=VECT_MTU0_TGIE0)
void Interrupt_MTU0_TGIE0(void){}
#pragma interrupt Interrupt_MTU0_TGIF0(vect=VECT_MTU0_TGIF0)
void Interrupt_MTU0_TGIF0(void){}
#pragma interrupt Interrupt_MTU0_TCIV0(vect=VECT_MTU0_TCIV0)
void Interrupt_MTU0_TCIV0(void){}
#pragma interrupt Interrupt_MTU1_TCIV1(vect=VECT_MTU1_TCIV1)
void Interrupt_MTU1_TCIV1(void){}
#pragma interrupt Interrupt_MTU2_TCIV2(vect=VECT_MTU2_TCIV2)
void Interrupt_MTU2_TCIV2(void){}
#pragma interrupt Interrupt_MTU3_TCIV3(vect=VECT_MTU3_TCIV3)
void Interrupt_MTU3_TCIV3(void){}
#pragma interrupt Interrupt_MTU4_TCIV4(vect=VECT_MTU4_TCIV4)
void Interrupt_MTU4_TCIV4(void){}
#pragma interrupt Interrupt_MTU1_TCIU1(vect=VECT_MTU1_TCIU1)
void Interrupt_MTU1_TCIU1(void){}
#pragma interrupt Interrupt_MTU2_TCIU2(vect=VECT_MTU2_TCIU2)
void Interrupt_MTU2_TCIU2(void){}
#pragma interrupt Interrupt_MTU5_TGIU5(vect=VECT_MTU5_TGIU5)
void Interrupt_MTU5_TGIU5(void){}
#pragma interrupt Interrupt_MTU5_TGIV5(vect=VECT_MTU5_TGIV5)
void Interrupt_MTU5_TGIV5(void){}
#pragma interrupt Interrupt_MTU5_TGIW5(vect=VECT_MTU5_TGIW5)
void Interrupt_MTU5_TGIW5(void){}
#endif

#ifdef RPDL_POE_not_used
#pragma interrupt Interrupt_OEI1(vect=VECT_POE_OEI1)
void Interrupt_OEI1(void){}
#pragma interrupt Interrupt_OEI2(vect=VECT_POE_OEI2)
void Interrupt_OEI2(void){}
#endif

#ifdef RPDL_RTC_not_used
#pragma interrupt Interrupt_RTC_PRD(vect=VECT_RTC_PRD)
void Interrupt_RTC_PRD(void){}
#pragma interrupt Interrupt_RTC_ALM(vect=VECT_RTC_ALM)
void Interrupt_RTC_ALM(void){}
#pragma interrupt Interrupt_RTC_COUNTUP(vect=VECT_RTC_COUNTUP)
void Interrupt_RTC_COUNTUP(void){}
#endif

#ifdef RPDL_SCI_not_used
#pragma interrupt Interrupt_SCI0_ERI0(vect=VECT_SCI0_ERI0)
void Interrupt_SCI0_ERI0(void){}
#pragma interrupt Interrupt_SCI1_ERI1(vect=VECT_SCI1_ERI1)
void Interrupt_SCI1_ERI1(void){}
#pragma interrupt Interrupt_SCI2_ERI2(vect=VECT_SCI2_ERI2)
void Interrupt_SCI2_ERI2(void){}
#pragma interrupt Interrupt_SCI3_ERI3(vect=VECT_SCI3_ERI3)
void Interrupt_SCI3_ERI3(void){}
#pragma interrupt Interrupt_SCI4_ERI4(vect=VECT_SCI4_ERI4)
void Interrupt_SCI4_ERI4(void){}
#pragma interrupt Interrupt_SCI5_ERI5(vect=VECT_SCI5_ERI5)
void Interrupt_SCI5_ERI5(void){}
#pragma interrupt Interrupt_SCI6_ERI6(vect=VECT_SCI6_ERI6)
void Interrupt_SCI6_ERI6(void){}
#pragma interrupt Interrupt_SCI7_ERI7(vect=VECT_SCI7_ERI7)
void Interrupt_SCI7_ERI7(void){}
#pragma interrupt Interrupt_SCI8_ERI8(vect=VECT_SCI8_ERI8)
void Interrupt_SCI8_ERI8(void){}
#pragma interrupt Interrupt_SCI9_ERI9(vect=VECT_SCI9_ERI9)
void Interrupt_SCI9_ERI9(void){}
#pragma interrupt Interrupt_SCI10_ERI10(vect=VECT_SCI10_ERI10)
void Interrupt_SCI10_ERI10(void){}
#pragma interrupt Interrupt_SCI11_ERI11(vect=VECT_SCI11_ERI11)
void Interrupt_SCI11_ERI11(void){}
#pragma interrupt Interrupt_SCI12_ERI12(vect=VECT_SCI12_ERI12)
void Interrupt_SCI12_ERI12(void){}

#pragma interrupt Interrupt_SCI0_RXI0(vect=VECT_SCI0_RXI0)
void Interrupt_SCI0_RXI0(void){}
#pragma interrupt Interrupt_SCI1_RXI1(vect=VECT_SCI1_RXI1)
void Interrupt_SCI1_RXI1(void){}
#pragma interrupt Interrupt_SCI2_RXI2(vect=VECT_SCI2_RXI2)
void Interrupt_SCI2_RXI2(void){}
#pragma interrupt Interrupt_SCI3_RXI3(vect=VECT_SCI3_RXI3)
void Interrupt_SCI3_RXI3(void){}
#pragma interrupt Interrupt_SCI4_RXI4(vect=VECT_SCI4_RXI4)
void Interrupt_SCI4_RXI4(void){}
#pragma interrupt Interrupt_SCI5_RXI5(vect=VECT_SCI5_RXI5)
void Interrupt_SCI5_RXI5(void){}
#pragma interrupt Interrupt_SCI6_RXI6(vect=VECT_SCI6_RXI6)
void Interrupt_SCI6_RXI6(void){}
#pragma interrupt Interrupt_SCI7_RXI7(vect=VECT_SCI7_RXI7)
void Interrupt_SCI7_RXI7(void){}
#pragma interrupt Interrupt_SCI8_RXI8(vect=VECT_SCI8_RXI8)
void Interrupt_SCI8_RXI8(void){}
#pragma interrupt Interrupt_SCI9_RXI9(vect=VECT_SCI9_RXI9)
void Interrupt_SCI9_RXI9(void){}
#pragma interrupt Interrupt_SCI10_RXI10(vect=VECT_SCI10_RXI10)
void Interrupt_SCI10_RXI10(void){}
#pragma interrupt Interrupt_SCI11_RXI11(vect=VECT_SCI11_RXI11)
void Interrupt_SCI11_RXI11(void){}
#pragma interrupt Interrupt_SCI12_RXI12(vect=VECT_SCI12_RXI12)
void Interrupt_SCI12_RXI12(void){}

#pragma interrupt Interrupt_SCI0_TEI0(vect=VECT_SCI0_TEI0)
void Interrupt_SCI0_TEI0(void){}
#pragma interrupt Interrupt_SCI1_TEI1(vect=VECT_SCI1_TEI1)
void Interrupt_SCI1_TEI1(void){}
#pragma interrupt Interrupt_SCI2_TEI2(vect=VECT_SCI2_TEI2)
void Interrupt_SCI2_TEI2(void){}
#pragma interrupt Interrupt_SCI3_TEI3(vect=VECT_SCI3_TEI3)
void Interrupt_SCI3_TEI3(void){}
#pragma interrupt Interrupt_SCI4_TEI4(vect=VECT_SCI4_TEI4)
void Interrupt_SCI4_TEI4(void){}
#pragma interrupt Interrupt_SCI5_TEI5(vect=VECT_SCI5_TEI5)
void Interrupt_SCI5_TEI5(void){}
#pragma interrupt Interrupt_SCI6_TEI6(vect=VECT_SCI6_TEI6)
void Interrupt_SCI6_TEI6(void){}
#pragma interrupt Interrupt_SCI7_TEI7(vect=VECT_SCI7_TEI7)
void Interrupt_SCI7_TEI7(void){}
#pragma interrupt Interrupt_SCI8_TEI8(vect=VECT_SCI8_TEI8)
void Interrupt_SCI8_TEI8(void){}
#pragma interrupt Interrupt_SCI9_TEI9(vect=VECT_SCI9_TEI9)
void Interrupt_SCI9_TEI9(void){}
#pragma interrupt Interrupt_SCI10_TEI10(vect=VECT_SCI10_TEI10)
void Interrupt_SCI10_TEI10(void){}
#pragma interrupt Interrupt_SCI11_TEI11(vect=VECT_SCI11_TEI11)
void Interrupt_SCI11_TEI11(void){}
#pragma interrupt Interrupt_SCI12_TEI12(vect=VECT_SCI12_TEI12)
void Interrupt_SCI12_TEI12(void){}

#pragma interrupt Interrupt_SCI0_TXI0(vect=VECT_SCI0_TXI0)
void Interrupt_SCI0_TXI0(void){}
#pragma interrupt Interrupt_SCI1_TXI1(vect=VECT_SCI1_TXI1)
void Interrupt_SCI1_TXI1(void){}
#pragma interrupt Interrupt_SCI2_TXI2(vect=VECT_SCI2_TXI2)
void Interrupt_SCI2_TXI2(void){}
#pragma interrupt Interrupt_SCI3_TXI3(vect=VECT_SCI3_TXI3)
void Interrupt_SCI3_TXI3(void){}
#pragma interrupt Interrupt_SCI4_TXI4(vect=VECT_SCI4_TXI4)
void Interrupt_SCI4_TXI4(void){}
#pragma interrupt Interrupt_SCI5_TXI5(vect=VECT_SCI5_TXI5)
void Interrupt_SCI5_TXI5(void){}
#pragma interrupt Interrupt_SCI6_TXI6(vect=VECT_SCI6_TXI6)
void Interrupt_SCI6_TXI6(void){}
#pragma interrupt Interrupt_SCI7_TXI7(vect=VECT_SCI7_TXI7)
void Interrupt_SCI7_TXI7(void){}
#pragma interrupt Interrupt_SCI8_TXI8(vect=VECT_SCI8_TXI8)
void Interrupt_SCI8_TXI8(void){}
#pragma interrupt Interrupt_SCI9_TXI9(vect=VECT_SCI9_TXI9)
void Interrupt_SCI9_TXI9(void){}
#pragma interrupt Interrupt_SCI10_TXI10(vect=VECT_SCI10_TXI10)
void Interrupt_SCI10_TXI10(void){}
#pragma interrupt Interrupt_SCI11_TXI11(vect=VECT_SCI11_TXI11)
void Interrupt_SCI11_TXI11(void){}
#pragma interrupt Interrupt_SCI12_TXI12(vect=VECT_SCI12_TXI12)
void Interrupt_SCI12_TXI12(void){}
#endif

#ifdef RPDL_SPI_not_used
#pragma interrupt Interrupt_RSPI0_SPEI0(vect=VECT_RSPI0_SPEI0)
void Interrupt_RSPI0_SPEI0(void){}
#pragma interrupt Interrupt_RSPI0_SPRI0(vect=VECT_RSPI0_SPRI0)
void Interrupt_RSPI0_SPRI0(void){}
#pragma interrupt Interrupt_RSPI0_SPTI0(vect=VECT_RSPI0_SPTI0)
void Interrupt_RSPI0_SPTI0(void){}
#pragma interrupt Interrupt_RSPI0_SPII0(vect=VECT_RSPI0_SPII0)
void Interrupt_RSPI0_SPII0(void){}
#endif

#ifdef RPDL_TMR_not_used
#pragma interrupt Interrupt_TMR0_CMA(vect=VECT_TMR0_CMIA0)
void Interrupt_TMR0_CMA(void){}
#pragma interrupt Interrupt_TMR0_CMB(vect=VECT_TMR0_CMIB0)
void Interrupt_TMR0_CMB(void){}
#pragma interrupt Interrupt_TMR0_OV(vect=VECT_TMR0_OVI0)
void Interrupt_TMR0_OV(void){}
#pragma interrupt Interrupt_TMR1_CMA(vect=VECT_TMR1_CMIA1)
void Interrupt_TMR1_CMA(void){}
#pragma interrupt Interrupt_TMR1_CMB(vect=VECT_TMR1_CMIB1)
void Interrupt_TMR1_CMB(void){}
#pragma interrupt Interrupt_TMR1_OV(vect=VECT_TMR1_OVI1)
void Interrupt_TMR1_OV(void){}
#pragma interrupt Interrupt_TMR2_CMA(vect=VECT_TMR2_CMIA2)
void Interrupt_TMR2_CMA(void){}
#pragma interrupt Interrupt_TMR2_CMB(vect=VECT_TMR2_CMIB2)
void Interrupt_TMR2_CMB(void){}
#pragma interrupt Interrupt_TMR2_OV(vect=VECT_TMR2_OVI2)
void Interrupt_TMR2_OV(void){}
#pragma interrupt Interrupt_TMR3_CMA(vect=VECT_TMR3_CMIA3)
void Interrupt_TMR3_CMA(void){}
#pragma interrupt Interrupt_TMR3_CMB(vect=VECT_TMR3_CMIB3)
void Interrupt_TMR3_CMB(void){}
#pragma interrupt Interrupt_TMR3_OV(vect=VECT_TMR3_OVI3)
void Interrupt_TMR3_OV(void){}
#endif

#ifdef RPDL_TPU_not_used
#pragma interrupt Interrupt_TPU0_TGI0A(vect=VECT_TPU0_TGI0A)
void Interrupt_TPU0_TGI0A(void){}
#pragma interrupt Interrupt_TPU0_TGI0B(vect=VECT_TPU0_TGI0B)
void Interrupt_TPU0_TGI0B(void){}
#pragma interrupt Interrupt_TPU0_TGI0C(vect=VECT_TPU0_TGI0C)
void Interrupt_TPU0_TGI0C(void){}
#pragma interrupt Interrupt_TPU0_TGI0D(vect=VECT_TPU0_TGI0D)
void Interrupt_TPU0_TGI0D(void){}
#pragma interrupt Interrupt_TPU0_TCI0V(vect=VECT_TPU0_TCI0V)
void Interrupt_TPU0_TCI0V(void){}
#pragma interrupt Interrupt_TPU1_TGI1A(vect=VECT_TPU1_TGI1A)
void Interrupt_TPU1_TGI1A(void){}
#pragma interrupt Interrupt_TPU1_TGI1B(vect=VECT_TPU1_TGI1B)
void Interrupt_TPU1_TGI1B(void){}
#pragma interrupt Interrupt_TPU1_TCI1V(vect=VECT_TPU1_TCI1V)
void Interrupt_TPU1_TCI1V(void){}
#pragma interrupt Interrupt_TPU1_TCI1U(vect=VECT_TPU1_TCI1U)
void Interrupt_TPU1_TCI1U(void){}
#pragma interrupt Interrupt_TPU2_TGI2A(vect=VECT_TPU2_TGI2A)
void Interrupt_TPU2_TGI2A(void){}
#pragma interrupt Interrupt_TPU2_TGI2B(vect=VECT_TPU2_TGI2B)
void Interrupt_TPU2_TGI2B(void){}
#pragma interrupt Interrupt_TPU2_TCI2V(vect=VECT_TPU2_TCI2V)
void Interrupt_TPU2_TCI2V(void){}
#pragma interrupt Interrupt_TPU2_TCI2U(vect=VECT_TPU2_TCI2U)
void Interrupt_TPU2_TCI2U(void){}
#pragma interrupt Interrupt_TPU3_TGI3A(vect=VECT_TPU3_TGI3A)
void Interrupt_TPU3_TGI3A(void){}
#pragma interrupt Interrupt_TPU3_TGI3B(vect=VECT_TPU3_TGI3B)
void Interrupt_TPU3_TGI3B(void){}
#pragma interrupt Interrupt_TPU3_TGI3C(vect=VECT_TPU3_TGI3C)
void Interrupt_TPU3_TGI3C(void){}
#pragma interrupt Interrupt_TPU3_TGI3D(vect=VECT_TPU3_TGI3D)
void Interrupt_TPU3_TGI3D(void){}
#pragma interrupt Interrupt_TPU3_TCI3V(vect=VECT_TPU3_TCI3V)
void Interrupt_TPU3_TCI3V(void){}
#pragma interrupt Interrupt_TPU4_TGI4A(vect=VECT_TPU4_TGI4A)
void Interrupt_TPU4_TGI4A(void){}
#pragma interrupt Interrupt_TPU4_TGI4B(vect=VECT_TPU4_TGI4B)
void Interrupt_TPU4_TGI4B(void){}
#pragma interrupt Interrupt_TPU4_TCI4V(vect=VECT_TPU4_TCI4V)
void Interrupt_TPU4_TCI4V(void){}
#pragma interrupt Interrupt_TPU4_TCI4U(vect=VECT_TPU4_TCI4U)
void Interrupt_TPU4_TCI4U(void){}
#pragma interrupt Interrupt_TPU5_TGI5A(vect=VECT_TPU5_TGI5A)
void Interrupt_TPU5_TGI5A(void){}
#pragma interrupt Interrupt_TPU5_TGI5B(vect=VECT_TPU5_TGI5B)
void Interrupt_TPU5_TGI5B(void){}
#pragma interrupt Interrupt_TPU5_TCI5V(vect=VECT_TPU5_TCI5V)
void Interrupt_TPU5_TCI5V(void){}
#pragma interrupt Interrupt_TPU5_TCI5U(vect=VECT_TPU5_TCI5U)
void Interrupt_TPU5_TCI5U(void){}
#endif

#if FAST_INTC_VECTOR == VECT_FCU_FIFERR
#pragma interrupt Interrupt_FIFERR(vect=VECT_FCU_FIFERR, fint)
#else
#pragma interrupt Interrupt_FIFERR(vect=VECT_FCU_FIFERR)
#endif
void Interrupt_FIFERR(void)
{
	/* The user can put their own code here */
}

#if FAST_INTC_VECTOR == VECT_FCU_FRDYI
#pragma interrupt Interrupt_FRDYI(vect=VECT_FCU_FRDYI, fint)
#else
#pragma interrupt Interrupt_FRDYI(vect=VECT_FCU_FRDYI)
#endif
void Interrupt_FRDYI(void)
{
	/* The user can put their own code here */
}
/* End of file */
