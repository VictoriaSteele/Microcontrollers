/*""FILE COMMENT""*************************************************************
* System Name	: Timer TPU API for RX210xx
* File Name		: r_pdl_tpu.h
* Version		: 2.00
* Contents		: Timer TPU API header
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

#ifndef R_PDL_TPU_H
#define R_PDL_TPU_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_TPU_Set(
	uint8_t,
	uint32_t
);

bool R_TPU_Create(
	uint8_t,
	uint32_t,
	uint32_t,
	uint32_t,
	uint32_t,
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t,
	void *,
	void *,
	void *,
	void *,
	uint8_t,
	void *,
	void *,
	uint8_t
);
bool R_TPU_Destroy(
	uint8_t
);
bool R_TPU_Control(
	uint8_t,
	uint8_t,
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t
);
bool R_TPU_Read(
	uint8_t,
	uint8_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *
);

/**** TPU0 ****/
#define PDL_TPU_PIN_A0_P86			0x00000001ul
#define PDL_TPU_PIN_A0_PA0			0x00000002ul
#define PDL_TPU_PIN_B0_P17			0x00000004ul
#define PDL_TPU_PIN_B0_PA1			0x00000008ul
#define PDL_TPU_PIN_C0_P32			0x00000010ul
#define PDL_TPU_PIN_D0_P33			0x00000020ul
#define PDL_TPU_PIN_D0_PA3			0x00000040ul

/**** TPU1 ****/
#define PDL_TPU_PIN_A1_P56			0x00000001ul
#define PDL_TPU_PIN_A1_PA4			0x00000002ul
#define PDL_TPU_PIN_B1_P16			0x00000004ul
#define PDL_TPU_PIN_B1_PA5			0x00000008ul

/**** TPU2 ****/
#define PDL_TPU_PIN_A2_P87			0x00000001ul
#define PDL_TPU_PIN_A2_PA6			0x00000002ul
#define PDL_TPU_PIN_B2_P15			0x00000004ul
#define PDL_TPU_PIN_B2_PA7			0x00000008ul

/**** TPU3 ****/
#define PDL_TPU_PIN_A3_P21			0x00000001ul
#define PDL_TPU_PIN_A3_PB0			0x00000002ul
#define PDL_TPU_PIN_B3_P20			0x00000004ul
#define PDL_TPU_PIN_B3_PB1			0x00000008ul
#define PDL_TPU_PIN_C3_P22			0x00000010ul
#define PDL_TPU_PIN_C3_PB2			0x00000020ul
#define PDL_TPU_PIN_D3_P23			0x00000040ul
#define PDL_TPU_PIN_D3_PB3			0x00000080ul

/**** TPU4 ****/
#define PDL_TPU_PIN_A4_P25			0x00000001ul
#define PDL_TPU_PIN_A4_PB4			0x00000002ul
#define PDL_TPU_PIN_B4_P24			0x00000004ul
#define PDL_TPU_PIN_B4_PB5			0x00000008ul

/**** TPU5 ****/
#define PDL_TPU_PIN_A5_P13			0x00000001ul
#define PDL_TPU_PIN_A5_PB6			0x00000002ul
#define PDL_TPU_PIN_B5_P14			0x00000004ul
#define PDL_TPU_PIN_B5_PB7			0x00000008ul

/**** TCLK ****/
#define PDL_TPU_PIN_CLKA_P14		0x00010000ul
#define PDL_TPU_PIN_CLKA_PC2		0x00020000ul
#define PDL_TPU_PIN_CLKB_P15		0x00040000ul
#define PDL_TPU_PIN_CLKB_PA3		0x00080000ul
#define PDL_TPU_PIN_CLKB_PC3		0x00100000ul
#define PDL_TPU_PIN_CLKC_P16		0x00200000ul
#define PDL_TPU_PIN_CLKC_PB2		0x00400000ul
#define PDL_TPU_PIN_CLKC_PC0		0x00800000ul
#define PDL_TPU_PIN_CLKD_P17		0x01000000ul
#define PDL_TPU_PIN_CLKD_PB3		0x02000000ul
#define PDL_TPU_PIN_CLKD_PC1		0x04000000ul

/* Operation mode */
#define PDL_TPU_MODE_NORMAL						0x00000001u
#define PDL_TPU_MODE_PWM1						0x00000002u
#define PDL_TPU_MODE_PWM2						0x00000004u
#define PDL_TPU_MODE_PHASE1						0x00000008u
#define PDL_TPU_MODE_PHASE2						0x00000010u
#define PDL_TPU_MODE_PHASE3						0x00000020u
#define PDL_TPU_MODE_PHASE4						0x00000040u

/* Synchronous mode control */
#define PDL_TPU_SYNC_DISABLE					0x00000080u
#define PDL_TPU_SYNC_ENABLE						0x00000100u

/* TGRA DMAC / DTC trigger control */
#define PDL_TPU_TGRA_DMAC_DTC_TRIGGER_DISABLE	0x00000200u
#define PDL_TPU_TGRA_DTC_TRIGGER_ENABLE			0x00000400u
#define PDL_TPU_TGRA_DMAC_TRIGGER_ENABLE		0x00000800u

/* TGRB DTC trigger control */
#define PDL_TPU_TGRB_DTC_TRIGGER_DISABLE		0x00001000u
#define PDL_TPU_TGRB_DTC_TRIGGER_ENABLE			0x00002000u

/* TGRC DTC trigger control */
#define PDL_TPU_TGRC_DTC_TRIGGER_DISABLE		0x00004000u
#define PDL_TPU_TGRC_DTC_TRIGGER_ENABLE			0x00008000u

/* TGRD DTC trigger control */
#define PDL_TPU_TGRD_DTC_TRIGGER_DISABLE		0x00010000u
#define PDL_TPU_TGRD_DTC_TRIGGER_ENABLE			0x00020000u

/* Noise filter control */
#define PDL_TPU_TIOCA_NF_DISABLE				0x00040000u
#define PDL_TPU_TIOCA_NF_ENABLE					0x00080000u
#define PDL_TPU_TIOCB_NF_DISABLE				0x00100000u
#define PDL_TPU_TIOCB_NF_ENABLE					0x00200000u
#define PDL_TPU_TIOCC_NF_DISABLE				0x00400000u
#define PDL_TPU_TIOCC_NF_ENABLE					0x00800000u
#define PDL_TPU_TIOCD_NF_DISABLE				0x01000000u
#define PDL_TPU_TIOCD_NF_ENABLE					0x02000000u

#define PDL_TPU_NF_CLK_PCLK_DIV_1				0x04000000u
#define PDL_TPU_NF_CLK_PCLK_DIV_8				0x08000000u
#define PDL_TPU_NF_CLK_PCLK_DIV_32				0x10000000u
#define PDL_TPU_NF_CLK_COUNTING					0x20000000u

/* Counter clock sources */
#define PDL_TPU_CLK_PCLK_DIV_1		0x00000001ul
#define PDL_TPU_CLK_PCLK_DIV_4		0x00000002ul
#define PDL_TPU_CLK_PCLK_DIV_16		0x00000004ul
#define PDL_TPU_CLK_PCLK_DIV_64		0x00000008ul
#define PDL_TPU_CLK_PCLK_DIV_256	0x00000010ul
#define PDL_TPU_CLK_PCLK_DIV_1024	0x00000020ul
#define PDL_TPU_CLK_PCLK_DIV_4096	0x00000040ul
#define PDL_TPU_CLK_TCLKA			0x00000080ul
#define PDL_TPU_CLK_TCLKB			0x00000100ul
#define PDL_TPU_CLK_TCLKC			0x00000200ul
#define PDL_TPU_CLK_TCLKD			0x00000400ul
#define PDL_TPU_CLK_TPU				0x00000800ul

/* Counter edge selection */
#define PDL_TPU_CLK_FALLING			0x00010000ul
#define PDL_TPU_CLK_RISING			0x00020000ul
#define PDL_TPU_CLK_BOTH			0x00040000ul

/* Counter clearing options */
#define PDL_TPU_CLEAR_DISABLE		0x00080000ul
#define PDL_TPU_CLEAR_CM_A			0x00100000ul
#define PDL_TPU_CLEAR_CM_B			0x00200000ul
#define PDL_TPU_CLEAR_CM_C			0x00400000ul
#define PDL_TPU_CLEAR_CM_D			0x00800000ul
#define PDL_TPU_CLEAR_CM_SYNC		0x01000000ul

/* Buffer operation */
#define PDL_TPU_BUFFER_AC_DISABLE	0x02000000ul
#define PDL_TPU_BUFFER_AC_ENABLE	0x04000000ul
#define PDL_TPU_BUFFER_BD_DISABLE	0x08000000ul
#define PDL_TPU_BUFFER_BD_ENABLE	0x10000000ul

/* ADC trigger control */
#define PDL_TPU_ADC_TRIG_DISABLE	0x20000000ul
#define PDL_TPU_ADC_TRIG_ENABLE		0x40000000ul

/* TGRA options */
#define PDL_TPU_A_OC_DISABLED		0x00000001ul
#define PDL_TPU_A_OC_LOW			0x00000002ul
#define PDL_TPU_A_OC_LOW_CM_HIGH	0x00000004ul
#define PDL_TPU_A_OC_LOW_CM_INV		0x00000008ul
#define PDL_TPU_A_OC_HIGH_CM_LOW	0x00000010ul
#define PDL_TPU_A_OC_HIGH			0x00000020ul
#define PDL_TPU_A_OC_HIGH_CM_INV	0x00000040ul
#define PDL_TPU_A_IC_RISING_EDGE	0x00000080ul
#define PDL_TPU_A_IC_FALLING_EDGE	0x00000100ul
#define PDL_TPU_A_IC_BOTH_EDGES		0x00000200ul
#define PDL_TPU_A_IC_TPU_COUNT_CLK	0x00000400ul
#define PDL_TPU_A_IC_TPU_CM_IC		0x00000800ul

/* TGRB options */
#define PDL_TPU_B_OC_DISABLED		0x00004000ul
#define PDL_TPU_B_OC_LOW			0x00008000ul
#define PDL_TPU_B_OC_LOW_CM_HIGH	0x00010000ul
#define PDL_TPU_B_OC_LOW_CM_INV		0x00020000ul
#define PDL_TPU_B_OC_HIGH_CM_LOW	0x00040000ul
#define PDL_TPU_B_OC_HIGH			0x00080000ul
#define PDL_TPU_B_OC_HIGH_CM_INV	0x00100000ul
#define PDL_TPU_B_IC_RISING_EDGE	0x00200000ul
#define PDL_TPU_B_IC_FALLING_EDGE	0x00400000ul
#define PDL_TPU_B_IC_BOTH_EDGES		0x00800000ul
#define PDL_TPU_B_IC_TPU_COUNT_CLK	0x01000000ul
#define PDL_TPU_B_IC_TPU_CM_IC		0x02000000ul

/* TGRB input capture input selection */
#define PDL_TPU_B_IC_TIOCB			0x04000000ul
#define PDL_TPU_B_IC_TIOCA			0x08000000ul

/* TGRC options */
#define PDL_TPU_C_OC_DISABLED		0x00000001ul
#define PDL_TPU_C_OC_LOW			0x00000002ul
#define PDL_TPU_C_OC_LOW_CM_HIGH	0x00000004ul
#define PDL_TPU_C_OC_LOW_CM_INV		0x00000008ul
#define PDL_TPU_C_OC_HIGH_CM_LOW	0x00000010ul
#define PDL_TPU_C_OC_HIGH			0x00000020ul
#define PDL_TPU_C_OC_HIGH_CM_INV	0x00000040ul
#define PDL_TPU_C_IC_RISING_EDGE	0x00000080ul
#define PDL_TPU_C_IC_FALLING_EDGE	0x00000100ul
#define PDL_TPU_C_IC_BOTH_EDGES		0x00000200ul
#define PDL_TPU_C_IC_TPU_COUNT_CLK	0x00000400ul

/* TGRD options */
#define PDL_TPU_D_OC_DISABLED		0x00004000ul
#define PDL_TPU_D_OC_LOW			0x00008000ul
#define PDL_TPU_D_OC_LOW_CM_HIGH	0x00010000ul
#define PDL_TPU_D_OC_LOW_CM_INV		0x00020000ul
#define PDL_TPU_D_OC_HIGH_CM_LOW	0x00040000ul
#define PDL_TPU_D_OC_HIGH			0x00080000ul
#define PDL_TPU_D_OC_HIGH_CM_INV	0x00100000ul
#define PDL_TPU_D_IC_RISING_EDGE	0x00200000ul
#define PDL_TPU_D_IC_FALLING_EDGE	0x00400000ul
#define PDL_TPU_D_IC_BOTH_EDGES		0x00800000ul
#define PDL_TPU_D_IC_TPU_COUNT_CLK	0x01000000ul

/* TGRD input capture input selection */
#define PDL_TPU_D_IC_TIOCD			0x02000000ul
#define PDL_TPU_D_IC_TIOCC			0x04000000ul

/* Counter stop / re-start */
#define PDL_TPU_STOP	0x01u
#define PDL_TPU_START	0x02u

/* The registers to be modified */
#define PDL_TPU_COUNTER	0x04u
#define PDL_TPU_TGRA	0x08u
#define PDL_TPU_TGRB	0x10u
#define PDL_TPU_TGRC	0x20u
#define PDL_TPU_TGRD	0x40u

#endif
/* End of file */
