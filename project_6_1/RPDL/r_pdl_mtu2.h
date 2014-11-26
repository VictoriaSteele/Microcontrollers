/*""FILE COMMENT""*************************************************************
* System Name	: Multi-function Timer Pulse Unit API for RX210
* File Name		: r_pdl_mtu2.h
* Version		: 2.00
* Contents		: MTU2 API header
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

#ifndef R_PDL_MTU2_H
#define R_PDL_MTU2_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_MTU2_Set(
	uint8_t,
	uint32_t
);
bool R_MTU2_Create(
	uint8_t,
	void *
);
bool R_MTU2_Destroy(
	uint8_t
);
bool R_MTU2_ControlChannel(
	uint8_t,
	void *
);
bool R_MTU2_ControlUnit(
	uint8_t,
	void *
);
bool R_MTU2_ReadChannel(
	uint8_t,
	uint8_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *,
	uint16_t *
);
bool R_MTU2_ReadUnit(
	uint8_t,
	uint16_t *,
	uint8_t *
);

/* Pin selection */
#define PDL_MTU2_PIN_0A_P34		0x00000001u
#define PDL_MTU2_PIN_0A_PB3		0x00000002u
#define PDL_MTU2_PIN_0B_P13		0x00000004u
#define PDL_MTU2_PIN_0B_P15		0x00000008u
#define PDL_MTU2_PIN_0B_PA1		0x00000010u
#define PDL_MTU2_PIN_0C_P32		0x00000020u
#define PDL_MTU2_PIN_0C_PB1		0x00000040u
#define PDL_MTU2_PIN_0D_P33		0x00000080u
#define PDL_MTU2_PIN_0D_PA3		0x00000100u

#define PDL_MTU2_PIN_1A_P20		0x00000001u
#define PDL_MTU2_PIN_1A_PE4		0x00000002u
#define PDL_MTU2_PIN_1B_P21		0x00000004u
#define PDL_MTU2_PIN_1B_PB5		0x00000008u

#define PDL_MTU2_PIN_2A_P26		0x00000001u
#define PDL_MTU2_PIN_2A_PB5		0x00000002u
#define PDL_MTU2_PIN_2B_P27		0x00000004u
#define PDL_MTU2_PIN_2B_PE5		0x00000008u

#define PDL_MTU2_PIN_3A_P14		0x00000001u
#define PDL_MTU2_PIN_3A_P17		0x00000002u
#define PDL_MTU2_PIN_3A_PC1		0x00000004u
#define PDL_MTU2_PIN_3A_PC7		0x00000008u
#define PDL_MTU2_PIN_3A_PJ1		0x00000010u
#define PDL_MTU2_PIN_3B_P17		0x00000020u
#define PDL_MTU2_PIN_3B_P22		0x00000040u
#define PDL_MTU2_PIN_3B_PB7		0x00000080u
#define PDL_MTU2_PIN_3B_PC5		0x00000100u
#define PDL_MTU2_PIN_3C_P16		0x00000200u
#define PDL_MTU2_PIN_3C_PC0		0x00000400u
#define PDL_MTU2_PIN_3C_PC6		0x00000800u
#define PDL_MTU2_PIN_3C_PJ3		0x00001000u
#define PDL_MTU2_PIN_3D_P16		0x00002000u
#define PDL_MTU2_PIN_3D_P23		0x00004000u
#define PDL_MTU2_PIN_3D_PB6		0x00008000u
#define PDL_MTU2_PIN_3D_PC4		0x00010000u

#define PDL_MTU2_PIN_4A_P24		0x00000001u
#define PDL_MTU2_PIN_4A_PA0		0x00000002u
#define PDL_MTU2_PIN_4A_PB3		0x00000004u
#define PDL_MTU2_PIN_4A_PE2		0x00000008u
#define PDL_MTU2_PIN_4B_P30		0x00000010u
#define PDL_MTU2_PIN_4B_P54		0x00000020u
#define PDL_MTU2_PIN_4B_PC2		0x00000040u
#define PDL_MTU2_PIN_4B_PD1		0x00000080u
#define PDL_MTU2_PIN_4B_PE3		0x00000100u
#define PDL_MTU2_PIN_4C_P25		0x00000200u
#define PDL_MTU2_PIN_4C_PB1		0x00000400u
#define PDL_MTU2_PIN_4C_PE1		0x00000800u
#define PDL_MTU2_PIN_4C_PE5		0x00001000u
#define PDL_MTU2_PIN_4D_P31		0x00002000u
#define PDL_MTU2_PIN_4D_P55		0x00004000u
#define PDL_MTU2_PIN_4D_PC3		0x00008000u
#define PDL_MTU2_PIN_4D_PD2		0x00010000u
#define PDL_MTU2_PIN_4D_PE4		0x00020000u

#define PDL_MTU2_PIN_5U_PA4		0x00000001u
#define PDL_MTU2_PIN_5U_PD7		0x00000002u
#define PDL_MTU2_PIN_5V_PA6		0x00000004u
#define PDL_MTU2_PIN_5V_PD6		0x00000008u
#define PDL_MTU2_PIN_5W_PB0		0x00000010u
#define PDL_MTU2_PIN_5W_PD5		0x00000020u

#define PDL_MTU2_PIN_CLKA_P14	0x00040000u
#define PDL_MTU2_PIN_CLKA_P24	0x00080000u
#define PDL_MTU2_PIN_CLKA_PA4	0x00100000u
#define PDL_MTU2_PIN_CLKA_PC6	0x00200000u
#define PDL_MTU2_PIN_CLKB_P15	0x00400000u
#define PDL_MTU2_PIN_CLKB_P25	0x00800000u
#define PDL_MTU2_PIN_CLKB_PA6	0x01000000u
#define PDL_MTU2_PIN_CLKB_PC7	0x02000000u
#define PDL_MTU2_PIN_CLKC_P22	0x04000000u
#define PDL_MTU2_PIN_CLKC_PA1	0x08000000u
#define PDL_MTU2_PIN_CLKC_PC4	0x10000000u
#define PDL_MTU2_PIN_CLKD_P23	0x20000000u
#define PDL_MTU2_PIN_CLKD_PA3	0x40000000u
#define PDL_MTU2_PIN_CLKD_PC5	0x80000000u
                                
/* Operation mode */            
#define PDL_MTU2_MODE_NORMAL					0x00000001u
#define PDL_MTU2_MODE_PWM1						0x00000002u
#define PDL_MTU2_MODE_PWM2						0x00000004u
#define PDL_MTU2_MODE_PHASE1					0x00000008u
#define PDL_MTU2_MODE_PHASE2					0x00000010u
#define PDL_MTU2_MODE_PHASE3					0x00000020u
#define PDL_MTU2_MODE_PHASE4					0x00000040u
#define PDL_MTU2_MODE_PWM_RS					0x00000080u
#define PDL_MTU2_MODE_PWM_COMP1					0x00000100u
#define PDL_MTU2_MODE_PWM_COMP2					0x00000200u
#define PDL_MTU2_MODE_PWM_COMP3					0x00000400u

/* Synchronous mode control */
#define PDL_MTU2_SYNC_DISABLE					0x00000800u
#define PDL_MTU2_SYNC_ENABLE					0x00001000u

/* TGRA DMAC / DTC trigger control */
#define PDL_MTU2_TGRA_DMAC_DTC_TRIGGER_DISABLE	0x00002000u
#define PDL_MTU2_TGRA_DMAC_TRIGGER_ENABLE		0x00004000u
#define PDL_MTU2_TGRA_DTC_TRIGGER_ENABLE		0x00008000u

/* TGRB DTC trigger control */
#define PDL_MTU2_TGRB_DTC_TRIGGER_DISABLE		0x00010000u
#define PDL_MTU2_TGRB_DTC_TRIGGER_ENABLE		0x00020000u

/* TGRC DTC trigger control */
#define PDL_MTU2_TGRC_DTC_TRIGGER_DISABLE		0x00040000u
#define PDL_MTU2_TGRC_DTC_TRIGGER_ENABLE		0x00080000u

/* TGRD DTC trigger control */
#define PDL_MTU2_TGRD_DTC_TRIGGER_DISABLE		0x00100000u
#define PDL_MTU2_TGRD_DTC_TRIGGER_ENABLE		0x00200000u

/* TGRU DTC trigger control */
#define PDL_MTU2_TGRU_DTC_TRIGGER_DISABLE		0x00400000u
#define PDL_MTU2_TGRU_DTC_TRIGGER_ENABLE		0x00800000u

/* TGRV DTC trigger control */
#define PDL_MTU2_TGRV_DTC_TRIGGER_DISABLE		0x01000000u
#define PDL_MTU2_TGRV_DTC_TRIGGER_ENABLE		0x02000000u

/* TGRW DTC trigger control */
#define PDL_MTU2_TGRW_DTC_TRIGGER_DISABLE		0x04000000u
#define PDL_MTU2_TGRW_DTC_TRIGGER_ENABLE		0x08000000u

/* TCIV DTC trigger control */
#define PDL_MTU2_TCIV_DTC_TRIGGER_DISABLE		0x10000000u
#define PDL_MTU2_TCIV_DTC_TRIGGER_ENABLE		0x20000000u

/* TCNT counter clock sources */
#define PDL_MTU2_CLK_PCLK_DIV_1		0x00000001ul
#define PDL_MTU2_CLK_PCLK_DIV_4		0x00000002ul
#define PDL_MTU2_CLK_PCLK_DIV_16	0x00000004ul
#define PDL_MTU2_CLK_PCLK_DIV_64	0x00000008ul
#define PDL_MTU2_CLK_PCLK_DIV_256	0x00000010ul
#define PDL_MTU2_CLK_PCLK_DIV_1024	0x00000020ul
#define PDL_MTU2_CLK_MTCLKA			0x00000040ul
#define PDL_MTU2_CLK_MTCLKB			0x00000080ul
#define PDL_MTU2_CLK_MTCLKC			0x00000100ul
#define PDL_MTU2_CLK_MTCLKD			0x00000200ul
#define PDL_MTU2_CLK_CASCADE		0x00004000ul

/* TNCT counter clock edge selection */
#define PDL_MTU2_CLK_RISING			0x00008000ul
#define PDL_MTU2_CLK_FALLING		0x00010000ul
#define PDL_MTU2_CLK_BOTH			0x00020000ul

/* TCNT counter clearing options */
#define PDL_MTU2_CLEAR_DISABLE		0x00040000ul
#define PDL_MTU2_CLEAR_TGRA			0x00080000ul
#define PDL_MTU2_CLEAR_TGRB			0x00100000ul
#define PDL_MTU2_CLEAR_SYNC			0x00200000ul
#define PDL_MTU2_CLEAR_TGRC			0x00400000ul
#define PDL_MTU2_CLEAR_TGRD			0x00800000ul

/* TCNTU counter clock sources */
#define PDL_MTU2_CLKU_PCLK_DIV_1	0x00000001ul
#define PDL_MTU2_CLKU_PCLK_DIV_4	0x00000002ul
#define PDL_MTU2_CLKU_PCLK_DIV_16	0x00000004ul
#define PDL_MTU2_CLKU_PCLK_DIV_64	0x00000008ul

/* TCNTV counter clock sources */
#define PDL_MTU2_CLKV_PCLK_DIV_1	0x00000010ul
#define PDL_MTU2_CLKV_PCLK_DIV_4	0x00000020ul
#define PDL_MTU2_CLKV_PCLK_DIV_16	0x00000040ul
#define PDL_MTU2_CLKV_PCLK_DIV_64	0x00000080ul

/* TCNTW counter clock sources */
#define PDL_MTU2_CLKW_PCLK_DIV_1	0x00000100ul
#define PDL_MTU2_CLKW_PCLK_DIV_4	0x00000200ul
#define PDL_MTU2_CLKW_PCLK_DIV_16	0x00000400ul
#define PDL_MTU2_CLKW_PCLK_DIV_64	0x00000800ul

/* U,V,W counter clearing options */
#define PDL_MTU2_CLEAR_TGRU_DISABLE	0x00001000ul
#define PDL_MTU2_CLEAR_TGRU_ENABLE	0x00002000ul
#define PDL_MTU2_CLEAR_TGRV_DISABLE	0x00004000ul
#define PDL_MTU2_CLEAR_TGRV_ENABLE	0x00008000ul
#define PDL_MTU2_CLEAR_TGRW_DISABLE	0x00010000ul
#define PDL_MTU2_CLEAR_TGRW_ENABLE	0x00020000ul

/* ADC conversion trigger control */
#define PDL_MTU2_ADC_TRIG_TGRA_DISABLE				0x00000001ul
#define PDL_MTU2_ADC_TRIG_TGRA_ENABLE				0x00000002ul
#define PDL_MTU2_ADC_TRIG_TROUGH_DISABLE			0x00000004ul
#define PDL_MTU2_ADC_TRIG_TROUGH_ENABLE				0x00000008ul

/* ADC trigger interrupt skipping */
#define PDL_MTU2_ADC_TRIG_A_TROUGH_INT_SKIP_DISABLE	0x00000010ul
#define PDL_MTU2_ADC_TRIG_A_TROUGH_INT_SKIP_ENABLE	0x00000020ul
#define PDL_MTU2_ADC_TRIG_B_TROUGH_INT_SKIP_DISABLE	0x00000040ul
#define PDL_MTU2_ADC_TRIG_B_TROUGH_INT_SKIP_ENABLE	0x00000080ul
#define PDL_MTU2_ADC_TRIG_A_CREST_INT_SKIP_DISABLE	0x00000100ul
#define PDL_MTU2_ADC_TRIG_A_CREST_INT_SKIP_ENABLE	0x00000200ul
#define PDL_MTU2_ADC_TRIG_B_CREST_INT_SKIP_DISABLE	0x00000400ul
#define PDL_MTU2_ADC_TRIG_B_CREST_INT_SKIP_ENABLE	0x00000800ul

/* ADC trigger control */
#define PDL_MTU2_ADC_TRIG_A_DOWN_DISABLE			0x00001000ul
#define PDL_MTU2_ADC_TRIG_A_DOWN_ENABLE				0x00002000ul
#define PDL_MTU2_ADC_TRIG_B_DOWN_DISABLE			0x00004000ul
#define PDL_MTU2_ADC_TRIG_B_DOWN_ENABLE				0x00008000ul
#define PDL_MTU2_ADC_TRIG_A_UP_DISABLE				0x00010000ul
#define PDL_MTU2_ADC_TRIG_A_UP_ENABLE				0x00020000ul
#define PDL_MTU2_ADC_TRIG_B_UP_DISABLE				0x00040000ul
#define PDL_MTU2_ADC_TRIG_B_UP_ENABLE				0x00080000ul

/* Cycle set buffer transfer timing */
#define PDL_MTU2_CSB_DISABLE		0x0001u
#define PDL_MTU2_CSB_CREST			0x0002u
#define PDL_MTU2_CSB_TROUGH			0x0004u
#define PDL_MTU2_CSB_BOTH			0x0008u

/* Buffer operation */
#define PDL_MTU2_BUFFER_AC_DISABLE	0x0010u
#define PDL_MTU2_BUFFER_AC_ENABLE	0x0020u
#define PDL_MTU2_BUFFER_BD_DISABLE	0x0040u
#define PDL_MTU2_BUFFER_BD_ENABLE	0x0080u
#define PDL_MTU2_BUFFER_EF_DISABLE	0x0100u
#define PDL_MTU2_BUFFER_EF_ENABLE	0x0200u

/* Buffer data transfer */
#define PDL_MTU2_BUFFER_AC_CM_A		0x0400u
#define PDL_MTU2_BUFFER_AC_TCNT_CLR	0x0800u
#define PDL_MTU2_BUFFER_BD_CM_B		0x1000u
#define PDL_MTU2_BUFFER_BD_TCNT_CLR	0x2000u
#define PDL_MTU2_BUFFER_EF_CM_E		0x4000u
#define PDL_MTU2_BUFFER_EF_TCNT_CLR	0x8000u

/* TGRA options */
#define PDL_MTU2_A_OC_DISABLED			0x00000001ul
#define PDL_MTU2_A_OC_LOW				0x00000002ul
#define PDL_MTU2_A_OC_LOW_CM_HIGH		0x00000004ul
#define PDL_MTU2_A_OC_LOW_CM_INV		0x00000008ul
#define PDL_MTU2_A_OC_HIGH_CM_LOW		0x00000010ul
#define PDL_MTU2_A_OC_HIGH				0x00000020ul
#define PDL_MTU2_A_OC_HIGH_CM_INV		0x00000040ul
#define PDL_MTU2_A_IC_RISING_EDGE		0x00000080ul
#define PDL_MTU2_A_IC_FALLING_EDGE		0x00000100ul
#define PDL_MTU2_A_IC_BOTH_EDGES		0x00000200ul
#define PDL_MTU2_A_IC_COUNT				0x00000400ul
#define PDL_MTU2_A_IC_CM_IC				0x00000800ul

/* TGRB options */
#define PDL_MTU2_B_OC_DISABLED			0x00001000ul
#define PDL_MTU2_B_OC_LOW				0x00002000ul
#define PDL_MTU2_B_OC_LOW_CM_HIGH		0x00004000ul
#define PDL_MTU2_B_OC_LOW_CM_INV		0x00008000ul
#define PDL_MTU2_B_OC_HIGH_CM_LOW		0x00010000ul
#define PDL_MTU2_B_OC_HIGH				0x00020000ul
#define PDL_MTU2_B_OC_HIGH_CM_INV		0x00040000ul
#define PDL_MTU2_B_IC_RISING_EDGE		0x00080000ul
#define PDL_MTU2_B_IC_FALLING_EDGE		0x00100000ul
#define PDL_MTU2_B_IC_BOTH_EDGES		0x00200000ul
#define PDL_MTU2_B_IC_COUNT				0x00400000ul
#define PDL_MTU2_B_IC_CM_IC				0x00800000ul

/* Cascade input capture control */
#define PDL_MTU2_CASCADE_AL_IC_EXC_H	0x01000000ul
#define PDL_MTU2_CASCADE_AL_IC_INC_H	0x02000000ul
#define PDL_MTU2_CASCADE_BL_IC_EXC_H	0x04000000ul
#define PDL_MTU2_CASCADE_BL_IC_INC_H	0x08000000ul
#define PDL_MTU2_CASCADE_AH_IC_EXC_L	0x10000000ul
#define PDL_MTU2_CASCADE_AH_IC_INC_L	0x20000000ul
#define PDL_MTU2_CASCADE_BH_IC_EXC_L	0x40000000ul
#define PDL_MTU2_CASCADE_BH_IC_INC_L	0x80000000ul

/* TGRC options */
#define PDL_MTU2_C_OC_DISABLED		0x00000001ul
#define PDL_MTU2_C_OC_LOW			0x00000002ul
#define PDL_MTU2_C_OC_LOW_CM_HIGH	0x00000004ul
#define PDL_MTU2_C_OC_LOW_CM_INV	0x00000008ul
#define PDL_MTU2_C_OC_HIGH_CM_LOW	0x00000010ul
#define PDL_MTU2_C_OC_HIGH			0x00000020ul
#define PDL_MTU2_C_OC_HIGH_CM_INV	0x00000040ul
#define PDL_MTU2_C_IC_RISING_EDGE	0x00000080ul
#define PDL_MTU2_C_IC_FALLING_EDGE	0x00000100ul
#define PDL_MTU2_C_IC_BOTH_EDGES	0x00000200ul
#define PDL_MTU2_C_IC_COUNT			0x00000400ul

/* TGRD options */
#define PDL_MTU2_D_OC_DISABLED		0x00000800ul
#define PDL_MTU2_D_OC_LOW			0x00001000ul
#define PDL_MTU2_D_OC_LOW_CM_HIGH	0x00002000ul
#define PDL_MTU2_D_OC_LOW_CM_INV	0x00004000ul
#define PDL_MTU2_D_OC_HIGH_CM_LOW	0x00008000ul
#define PDL_MTU2_D_OC_HIGH			0x00010000ul
#define PDL_MTU2_D_OC_HIGH_CM_INV	0x00020000ul
#define PDL_MTU2_D_IC_RISING_EDGE	0x00040000ul
#define PDL_MTU2_D_IC_FALLING_EDGE	0x00080000ul
#define PDL_MTU2_D_IC_BOTH_EDGES	0x00100000ul
#define PDL_MTU2_D_IC_COUNT			0x00200000ul

/* TGRU options */
#define PDL_MTU2_U_CM					0x00000001ul
#define PDL_MTU2_U_IC_RISING_EDGE		0x00000002ul
#define PDL_MTU2_U_IC_FALLING_EDGE		0x00000004ul
#define PDL_MTU2_U_IC_BOTH_EDGES		0x00000008ul
#define PDL_MTU2_U_IC_PWM_LOW_TROUGH	0x00000010ul
#define PDL_MTU2_U_IC_PWM_LOW_CREST		0x00000020ul
#define PDL_MTU2_U_IC_PWM_LOW_BOTH		0x00000040ul
#define PDL_MTU2_U_IC_PWM_HIGH_TROUGH	0x00000080ul
#define PDL_MTU2_U_IC_PWM_HIGH_CREST	0x00000100ul
#define PDL_MTU2_U_IC_PWM_HIGH_BOTH		0x00000200ul

/* TGRV options */
#define PDL_MTU2_V_CM					0x00000400ul
#define PDL_MTU2_V_IC_RISING_EDGE		0x00000800ul
#define PDL_MTU2_V_IC_FALLING_EDGE		0x00001000ul
#define PDL_MTU2_V_IC_BOTH_EDGES		0x00002000ul
#define PDL_MTU2_V_IC_PWM_LOW_TROUGH	0x00004000ul
#define PDL_MTU2_V_IC_PWM_LOW_CREST		0x00008000ul
#define PDL_MTU2_V_IC_PWM_LOW_BOTH		0x00010000ul
#define PDL_MTU2_V_IC_PWM_HIGH_TROUGH	0x00020000ul
#define PDL_MTU2_V_IC_PWM_HIGH_CREST	0x00040000ul
#define PDL_MTU2_V_IC_PWM_HIGH_BOTH		0x00080000ul

/* TGRW options */
#define PDL_MTU2_W_CM					0x00100000ul
#define PDL_MTU2_W_IC_RISING_EDGE		0x00200000ul
#define PDL_MTU2_W_IC_FALLING_EDGE		0x00400000ul
#define PDL_MTU2_W_IC_BOTH_EDGES		0x00800000ul
#define PDL_MTU2_W_IC_PWM_LOW_TROUGH	0x01000000ul
#define PDL_MTU2_W_IC_PWM_LOW_CREST		0x02000000ul
#define PDL_MTU2_W_IC_PWM_LOW_BOTH		0x04000000ul
#define PDL_MTU2_W_IC_PWM_HIGH_TROUGH	0x08000000ul
#define PDL_MTU2_W_IC_PWM_HIGH_CREST	0x10000000ul
#define PDL_MTU2_W_IC_PWM_HIGH_BOTH		0x20000000ul

/* Noise filter options */
#define PDL_MTU2_NF_A_U_DISABLE			0x0001ul
#define PDL_MTU2_NF_A_U_ENABLE			0x0002ul
#define PDL_MTU2_NF_B_V_DISABLE			0x0004ul
#define PDL_MTU2_NF_B_V_ENABLE			0x0008ul
#define PDL_MTU2_NF_C_W_DISABLE			0x0010ul
#define PDL_MTU2_NF_C_W_ENABLE			0x0020ul
#define PDL_MTU2_NF_D_DISABLE			0x0040ul
#define PDL_MTU2_NF_D_ENABLE			0x0080ul

#define PDL_MTU2_NF_PCLK_DIV_1			0x0100ul
#define PDL_MTU2_NF_PCLK_DIV_8			0x0200ul
#define PDL_MTU2_NF_PCLK_DIV_32			0x0400ul
#define PDL_MTU2_NF_PCLK_DIV_SRC		0x0800ul

/* Counter stop / re-start */
#define PDL_MTU2_STOP		0x01u
#define PDL_MTU2_START		0x02u
#define PDL_MTU2_STOP_U		0x04u
#define PDL_MTU2_START_U	0x08u
#define PDL_MTU2_STOP_V		0x10u
#define PDL_MTU2_START_V	0x20u
#define PDL_MTU2_STOP_W		0x40u
#define PDL_MTU2_START_W	0x80u

/* The registers to be modified (n = 0 to 4 or 6 to 10) */
#define PDL_MTU2_REGISTER_COUNTER	0x0001u
#define PDL_MTU2_REGISTER_TGRA		0x0002u
#define PDL_MTU2_REGISTER_TGRB		0x0004u
#define PDL_MTU2_REGISTER_TGRC		0x0008u
#define PDL_MTU2_REGISTER_TGRD		0x0010u
#define PDL_MTU2_REGISTER_TGRE		0x0020u
#define PDL_MTU2_REGISTER_TGRF		0x0040u
#define PDL_MTU2_REGISTER_TADCOBRA	0x0080u
#define PDL_MTU2_REGISTER_TADCOBRB	0x0100u

/* The registers to be modified (n = 5 or 11) */
#define PDL_MTU2_REGISTER_COUNTER_U	0x01u
#define PDL_MTU2_REGISTER_COUNTER_V	0x02u
#define PDL_MTU2_REGISTER_COUNTER_W	0x04u
#define PDL_MTU2_REGISTER_TGRU		0x08u
#define PDL_MTU2_REGISTER_TGRV		0x10u
#define PDL_MTU2_REGISTER_TGRW		0x20u

/* Simultaneous stop control */
#define PDL_MTU2_STOP_CH_0	0x0001u
#define PDL_MTU2_STOP_CH_1	0x0002u
#define PDL_MTU2_STOP_CH_2	0x0004u
#define PDL_MTU2_STOP_CH_3	0x0008u
#define PDL_MTU2_STOP_CH_4	0x0010u

/* Simultaneous start control */
#define PDL_MTU2_START_CH_0		0x0020u
#define PDL_MTU2_START_CH_1		0x0040u
#define PDL_MTU2_START_CH_2		0x0080u
#define PDL_MTU2_START_CH_3		0x0100u
#define PDL_MTU2_START_CH_4		0x0200u

/* Output control */
#define PDL_MTU2_OUT_P_PHASE_1_ENABLE		0x00000001ul
#define PDL_MTU2_OUT_P_PHASE_1_DISABLE		0x00000002ul
#define PDL_MTU2_OUT_N_PHASE_1_ENABLE		0x00000004ul
#define PDL_MTU2_OUT_N_PHASE_1_DISABLE		0x00000008ul
#define PDL_MTU2_OUT_P_PHASE_2_ENABLE		0x00000010ul
#define PDL_MTU2_OUT_P_PHASE_2_DISABLE		0x00000020ul
#define PDL_MTU2_OUT_N_PHASE_2_ENABLE		0x00000040ul
#define PDL_MTU2_OUT_N_PHASE_2_DISABLE		0x00000080ul
#define PDL_MTU2_OUT_P_PHASE_3_ENABLE		0x00000100ul
#define PDL_MTU2_OUT_P_PHASE_3_DISABLE		0x00000200ul
#define PDL_MTU2_OUT_N_PHASE_3_ENABLE		0x00000400ul
#define PDL_MTU2_OUT_N_PHASE_3_DISABLE		0x00000800ul

#define PDL_MTU2_OUT_P_PHASE_ALL_ENABLE		(PDL_MTU2_OUT_P_PHASE_1_ENABLE  | PDL_MTU2_OUT_P_PHASE_2_ENABLE  | PDL_MTU2_OUT_P_PHASE_3_ENABLE)
#define PDL_MTU2_OUT_P_PHASE_ALL_DISABLE	(PDL_MTU2_OUT_P_PHASE_1_DISABLE | PDL_MTU2_OUT_P_PHASE_2_DISABLE | PDL_MTU2_OUT_P_PHASE_3_DISABLE)
#define PDL_MTU2_OUT_N_PHASE_ALL_ENABLE		(PDL_MTU2_OUT_N_PHASE_1_ENABLE  | PDL_MTU2_OUT_N_PHASE_2_ENABLE  | PDL_MTU2_OUT_N_PHASE_3_ENABLE)
#define PDL_MTU2_OUT_N_PHASE_ALL_DISABLE	(PDL_MTU2_OUT_N_PHASE_1_DISABLE | PDL_MTU2_OUT_N_PHASE_2_DISABLE | PDL_MTU2_OUT_N_PHASE_3_DISABLE)

/* Inversion control */
#define PDL_MTU2_OUT_P_PHASE_ALL_HIGH_LOW	0x00001000ul
#define PDL_MTU2_OUT_P_PHASE_ALL_LOW_HIGH	0x00002000ul
#define PDL_MTU2_OUT_N_PHASE_ALL_HIGH_LOW	0x00004000ul
#define PDL_MTU2_OUT_N_PHASE_ALL_LOW_HIGH	0x00008000ul

#define PDL_MTU2_OUT_P_PHASE_1_HIGH_LOW		0x00010000ul
#define PDL_MTU2_OUT_P_PHASE_1_LOW_HIGH		0x00020000ul
#define PDL_MTU2_OUT_N_PHASE_1_HIGH_LOW		0x00040000ul
#define PDL_MTU2_OUT_N_PHASE_1_LOW_HIGH		0x00080000ul
#define PDL_MTU2_OUT_P_PHASE_2_HIGH_LOW		0x00100000ul
#define PDL_MTU2_OUT_P_PHASE_2_LOW_HIGH		0x00200000ul
#define PDL_MTU2_OUT_N_PHASE_2_HIGH_LOW		0x00400000ul
#define PDL_MTU2_OUT_N_PHASE_2_LOW_HIGH		0x00800000ul
#define PDL_MTU2_OUT_P_PHASE_3_HIGH_LOW		0x01000000ul
#define PDL_MTU2_OUT_P_PHASE_3_LOW_HIGH		0x02000000ul
#define PDL_MTU2_OUT_N_PHASE_3_HIGH_LOW		0x04000000ul
#define PDL_MTU2_OUT_N_PHASE_3_LOW_HIGH		0x08000000ul

/* Write access control */
#define PDL_MTU2_OUT_LOCK_ENABLE			0x10000000ul

/* Toggle output control */
#define PDL_MTU2_OUT_TOGGLE_ENABLE			0x20000000ul
#define PDL_MTU2_OUT_TOGGLE_DISABLE			0x40000000ul

/* Output level buffer control */
#define PDL_MTU2_OUT_BUFFER_P_PHASE_1_LOW		0x00000001ul
#define PDL_MTU2_OUT_BUFFER_P_PHASE_1_HIGH		0x00000002ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_1_LOW		0x00000004ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_1_HIGH		0x00000008ul
#define PDL_MTU2_OUT_BUFFER_P_PHASE_2_LOW		0x00000010ul
#define PDL_MTU2_OUT_BUFFER_P_PHASE_2_HIGH		0x00000020ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_2_LOW		0x00000040ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_2_HIGH		0x00000080ul
#define PDL_MTU2_OUT_BUFFER_P_PHASE_3_LOW		0x00000100ul
#define PDL_MTU2_OUT_BUFFER_P_PHASE_3_HIGH		0x00000200ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_3_LOW		0x00000400ul
#define PDL_MTU2_OUT_BUFFER_N_PHASE_3_HIGH		0x00000800ul

/* Transfer timing (complementary PWM) */
#define PDL_MTU2_OUT_BUFFER_TRANSFER_DISABLE	0x00001000ul
#define PDL_MTU2_OUT_BUFFER_TRANSFER_CREST		0x00002000ul
#define PDL_MTU2_OUT_BUFFER_TRANSFER_TROUGH		0x00004000ul
#define PDL_MTU2_OUT_BUFFER_TRANSFER_BOTH		0x00008000ul

/* Transfer timing (reset-synchronised PWM) */
#define PDL_MTU2_OUT_BUFFER_TRANSFER_CLEAR		0x00010000ul

/* Buffer transfer to temporary transfer control */
#define PDL_MTU2_BUFFER_TRANSFER_DISABLE		0x00020000ul
#define PDL_MTU2_BUFFER_TRANSFER_ENABLE			0x00040000ul
#define PDL_MTU2_BUFFER_TRANSFER_LINK			0x00080000ul

/* Brushless DC motor waveform control */
#define PDL_MTU2_BDCM_ENABLE			0x0001u
#define PDL_MTU2_BDCM_DISABLE			0x0002u
#define PDL_MTU2_BDCM_P_PHASE_ENABLE	0x0004u
#define PDL_MTU2_BDCM_P_PHASE_DISABLE	0x0008u
#define PDL_MTU2_BDCM_N_PHASE_ENABLE	0x0010u
#define PDL_MTU2_BDCM_N_PHASE_DISABLE	0x0020u
#define PDL_MTU2_BDCM_OPS_FB			0x0040u
#define PDL_MTU2_BDCM_OPS_000			0x0080u
#define PDL_MTU2_BDCM_OPS_001			0x0100u
#define PDL_MTU2_BDCM_OPS_010			0x0200u
#define PDL_MTU2_BDCM_OPS_011			0x0400u
#define PDL_MTU2_BDCM_OPS_100			0x0800u
#define PDL_MTU2_BDCM_OPS_101			0x1000u
#define PDL_MTU2_BDCM_OPS_110			0x2000u
#define PDL_MTU2_BDCM_OPS_111			0x4000u

/* Interrupt skipping control */
#define PDL_MTU2_INT_SKIP_TROUGH_DISABLE	0x00000001ul
#define PDL_MTU2_INT_SKIP_TROUGH_1			0x00000002ul
#define PDL_MTU2_INT_SKIP_TROUGH_2			0x00000004ul
#define PDL_MTU2_INT_SKIP_TROUGH_3			0x00000008ul
#define PDL_MTU2_INT_SKIP_TROUGH_4			0x00000010ul
#define PDL_MTU2_INT_SKIP_TROUGH_5			0x00000020ul
#define PDL_MTU2_INT_SKIP_TROUGH_6			0x00000040ul
#define PDL_MTU2_INT_SKIP_TROUGH_7			0x00000080ul
#define PDL_MTU2_INT_SKIP_CREST_DISABLE		0x00000100ul
#define PDL_MTU2_INT_SKIP_CREST_1			0x00000200ul
#define PDL_MTU2_INT_SKIP_CREST_2			0x00000400ul
#define PDL_MTU2_INT_SKIP_CREST_3			0x00000800ul
#define PDL_MTU2_INT_SKIP_CREST_4			0x00001000ul
#define PDL_MTU2_INT_SKIP_CREST_5			0x00002000ul
#define PDL_MTU2_INT_SKIP_CREST_6			0x00004000ul
#define PDL_MTU2_INT_SKIP_CREST_7			0x00008000ul

/* Dead time generation control */
#define PDL_MTU2_DEAD_TIME_DISABLE			0x00010000ul
#define PDL_MTU2_DEAD_TIME_ENABLE			0x00020000ul

/* Waveform retention control */
#define PDL_MTU2_WAVEFORM_RETAIN_DISABLE	0x00040000ul
#define PDL_MTU2_WAVEFORM_RETAIN_ENABLE		0x00080000ul

/* Compare match clearing control */
#define PDL_MTU2_CNT_CLEAR_CM_A_DISABLE		0x00100000ul
#define PDL_MTU2_CNT_CLEAR_CM_A_ENABLE		0x00200000ul

/* Reset-synchronised or complementary PWM control */
#define PDL_MTU2_PWM_RS_COMP_ENABLE			0x00400000ul

/* Register protection */
#define PDL_MTU2_ACCESS_DISABLE				0x00800000ul
#define PDL_MTU2_ACCESS_ENABLE				0x01000000ul

/* Unit registers to be modified */
#define PDL_MTU2_REGISTER_DEAD_TIME		0x01u
#define PDL_MTU2_REGISTER_CYCLE_DATA	0x02u
#define PDL_MTU2_REGISTER_CYCLE_BUFFER	0x04u

#endif
/* End of file */