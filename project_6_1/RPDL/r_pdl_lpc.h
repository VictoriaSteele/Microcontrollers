/*""FILE COMMENT""*************************************************************
* System Name	: LPC API for RX210xx
* File Name		: r_pdl_lpc.h
* Version		: 2.00
* Contents		: LPC API header
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

#ifndef R_PDL_LPC_H
#define R_PDL_LPC_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_LPC_Create(
	uint32_t,
	uint32_t,
	uint32_t,
	uint16_t,
	uint16_t,
	uint16_t,
	uint16_t
);
bool R_LPC_Control(
	uint32_t
);
bool R_LPC_WriteBackup(
	uint8_t *,
	uint8_t
);
bool R_LPC_ReadBackup(
	uint8_t *,
	uint8_t
);
bool R_LPC_GetStatus(
	uint32_t *
);

/* Software and Deep Software Standby mode output port control */
#define PDL_LPC_EXT_BUS_ON					0x00000001ul
#define PDL_LPC_EXT_BUS_HI_Z				0x00000002ul

/* I/O port retention control */
#define PDL_LPC_IO_SAME						0x00000004ul
#define PDL_LPC_IO_DELAY					0x00000008ul

/* Operating Power Mode */
#define PDL_LPC_HIGH_SPEED_MODE				0x00000010ul
#define PDL_LPC_MIDDLE_SPEED_MODE_1A		0x00000020ul
#define PDL_LPC_MIDDLE_SPEED_MODE_1B		0x00000040ul
#define PDL_LPC_MIDDLE_SPEED_MODE_2A		0x00000080ul	
#define PDL_LPC_MIDDLE_SPEED_MODE_2B		0x00000100ul	
#define PDL_LPC_LOW_SPEED_MODE_1			0x00000200ul
#define PDL_LPC_LOW_SPEED_MODE_2			0x00000400ul

/* Sleep mode return clock source switching */
#define PDL_LPC_SLEEP_RETURN_SWITCH_DISABLE	0x00000800ul
#define PDL_LPC_SLEEP_RETURN_SWITCH_HOCO	0x00001000ul
#define PDL_LPC_SLEEP_RETURN_SWITCH_MAIN	0x00002000ul

/*Flash HOCO software standby control */
#define PDL_LPC_SOFTCUT_POR					0x00004000ul
#define PDL_LPC_SOFTCUT_HOCO_POR			0x00008000ul
#define PDL_LPC_SOFTCUT_FLASH_HOCO_POR		0x00010000ul
#define PDL_LPC_SOFTCUT_LVD					0x00020000ul
#define PDL_LPC_SOFTCUT_HOCO_LVD			0x00040000ul
#define PDL_LPC_SOFTCUT_FLASH_HOCO_LVD		0x00080000ul

/*Deep software standby */
#define PDL_LPC_DEEPCUT_DISABLE				0x00100000ul
#define PDL_LPC_DEEPCUT_ENABLE				0x00200000ul

/* Deep software standby cancel control */
#define PDL_LPC_CANCEL_IRQ0_DISABLE		0x00000001ul
#define PDL_LPC_CANCEL_IRQ0_FALLING		0x00000002ul
#define PDL_LPC_CANCEL_IRQ0_RISING		0x00000004ul
#define PDL_LPC_CANCEL_IRQ1_DISABLE		0x00000008ul
#define PDL_LPC_CANCEL_IRQ1_FALLING		0x00000010ul
#define PDL_LPC_CANCEL_IRQ1_RISING		0x00000020ul
#define PDL_LPC_CANCEL_IRQ2_DISABLE		0x00000040ul
#define PDL_LPC_CANCEL_IRQ2_FALLING		0x00000080ul
#define PDL_LPC_CANCEL_IRQ2_RISING		0x00000100ul
#define PDL_LPC_CANCEL_IRQ3_DISABLE		0x00000200ul
#define PDL_LPC_CANCEL_IRQ3_FALLING		0x00000400ul
#define PDL_LPC_CANCEL_IRQ3_RISING		0x00000800ul
#define PDL_LPC_CANCEL_IRQ4_DISABLE		0x00001000ul
#define PDL_LPC_CANCEL_IRQ4_FALLING		0x00002000ul
#define PDL_LPC_CANCEL_IRQ4_RISING		0x00004000ul
#define PDL_LPC_CANCEL_IRQ5_DISABLE		0x00008000ul
#define PDL_LPC_CANCEL_IRQ5_FALLING		0x00010000ul
#define PDL_LPC_CANCEL_IRQ5_RISING		0x00020000ul
#define PDL_LPC_CANCEL_IRQ6_DISABLE		0x00040000ul
#define PDL_LPC_CANCEL_IRQ6_FALLING		0x00080000ul
#define PDL_LPC_CANCEL_IRQ6_RISING		0x00100000ul
#define PDL_LPC_CANCEL_IRQ7_DISABLE		0x00200000ul
#define PDL_LPC_CANCEL_IRQ7_FALLING		0x00400000ul
#define PDL_LPC_CANCEL_IRQ7_RISING		0x00800000ul

#define PDL_LPC_CANCEL_LVD1_DISABLE		0x00000001ul
#define PDL_LPC_CANCEL_LVD1_FALLING		0x00000002ul
#define PDL_LPC_CANCEL_LVD1_RISING		0x00000004ul
#define PDL_LPC_CANCEL_LVD2_DISABLE		0x00000008ul
#define PDL_LPC_CANCEL_LVD2_FALLING		0x00000010ul
#define PDL_LPC_CANCEL_LVD2_RISING		0x00000020ul
#define PDL_LPC_CANCEL_RTCI_DISABLE		0x00000040ul
#define PDL_LPC_CANCEL_RTCI_ENABLE		0x00000080ul
#define PDL_LPC_CANCEL_RTCA_DISABLE		0x00000100ul
#define PDL_LPC_CANCEL_RTCA_ENABLE		0x00000200ul
#define PDL_LPC_CANCEL_NMI_DISABLE		0x00000400ul
#define PDL_LPC_CANCEL_NMI_FALLING		0x00000800ul
#define PDL_LPC_CANCEL_NMI_RISING		0x00001000ul
#define PDL_LPC_CANCEL_IICD_DISABLE		0x00002000ul
#define PDL_LPC_CANCEL_IICD_FALLING		0x00004000ul
#define PDL_LPC_CANCEL_IICD_RISING		0x00008000ul
#define PDL_LPC_CANCEL_IICC_DISABLE		0x00010000ul
#define PDL_LPC_CANCEL_IICC_FALLING		0x00020000ul
#define PDL_LPC_CANCEL_IICC_RISING		0x00040000ul

/* Main clock oscillator waiting time */
#define PDL_LPC_MAIN_2					0x0001ul
#define PDL_LPC_MAIN_4					0x0002ul
#define PDL_LPC_MAIN_8					0x0004ul
#define PDL_LPC_MAIN_16					0x0008ul
#define PDL_LPC_MAIN_32					0x0010ul
#define PDL_LPC_MAIN_256				0x0020ul
#define PDL_LPC_MAIN_512				0x0040ul
#define PDL_LPC_MAIN_1024				0x0080ul
#define PDL_LPC_MAIN_2048				0x0100ul
#define PDL_LPC_MAIN_4096				0x0200ul
#define PDL_LPC_MAIN_16384				0x0400ul
#define PDL_LPC_MAIN_32768				0x0800ul
#define PDL_LPC_MAIN_65536				0x1000ul
#define PDL_LPC_MAIN_131072				0x2000ul
#define PDL_LPC_MAIN_262144				0x4000ul
#define PDL_LPC_MAIN_524288				0x8000ul

/* Sub-clock oscillator waiting time */
#define PDL_LPC_SUB_2					0x0001ul
#define PDL_LPC_SUB_4					0x0002ul
#define PDL_LPC_SUB_8					0x0004ul
#define PDL_LPC_SUB_16					0x0008ul
#define PDL_LPC_SUB_32					0x0010ul
#define PDL_LPC_SUB_64					0x0020ul
#define PDL_LPC_SUB_512					0x0040ul
#define PDL_LPC_SUB_1024				0x0080ul
#define PDL_LPC_SUB_2048				0x0100ul
#define PDL_LPC_SUB_4096				0x0200ul
#define PDL_LPC_SUB_16384				0x0400ul
#define PDL_LPC_SUB_32768				0x0800ul
#define PDL_LPC_SUB_65536				0x1000ul
#define PDL_LPC_SUB_131072				0x2000ul
#define PDL_LPC_SUB_262144				0x4000ul
#define PDL_LPC_SUB_524288				0x8000ul

/* PLL waiting time */
#define PDL_LPC_PLL_16					0x0001ul
#define PDL_LPC_PLL_32					0x0002ul
#define PDL_LPC_PLL_64					0x0004ul
#define PDL_LPC_PLL_512					0x0008ul
#define PDL_LPC_PLL_1024				0x0010ul
#define PDL_LPC_PLL_2048				0x0020ul
#define PDL_LPC_PLL_4096				0x0040ul
#define PDL_LPC_PLL_16384				0x0080ul
#define PDL_LPC_PLL_32768				0x0100ul
#define PDL_LPC_PLL_65536				0x0200ul
#define PDL_LPC_PLL_131072				0x0400ul
#define PDL_LPC_PLL_262144				0x0800ul
#define PDL_LPC_PLL_524288				0x1000ul
#define PDL_LPC_PLL_1048576				0x2000ul
#define PDL_LPC_PLL_2097152				0x4000ul
#define PDL_LPC_PLL_4194304				0x8000ul

/* HOCO clock waiting time */
#define PDL_LPC_HOCO_3072				0x0001ul
#define PDL_LPC_HOCO_5120				0x0002ul
#define PDL_LPC_HOCO_7168				0x0004ul
#define PDL_LPC_HOCO_9216				0x0008ul
#define PDL_LPC_HOCO_11264				0x0010ul
#define PDL_LPC_HOCO_13312				0x0020ul
#define PDL_LPC_HOCO_15360				0x0040ul
#define PDL_LPC_HOCO_17408				0x0080ul
#define PDL_LPC_HOCO_19456				0x0100ul
#define PDL_LPC_HOCO_21504				0x0200ul
#define PDL_LPC_HOCO_23552				0x0400ul
#define PDL_LPC_HOCO_25600				0x0800ul
#define PDL_LPC_HOCO_27648				0x1000ul
#define PDL_LPC_HOCO_29696				0x2000ul
#define PDL_LPC_HOCO_31744				0x4000ul
#define PDL_LPC_HOCO_33792				0x8000ul

/* Error monitoring */
#define PDL_LPC_MODE_SLEEP					0x00000001u
#define PDL_LPC_MODE_ALL_MODULE_CLOCK_STOP	0x00000002u
#define PDL_LPC_MODE_SOFTWARE_STANDBY		0x00000004u
#define PDL_LPC_MODE_DEEP_SOFTWARE_STANDBY	0x00000008u

/* All-module clock stop cancellation modification */
#define PDL_LPC_TMR_OFF						0x00000010u
#define PDL_LPC_TMR_UNIT_0					0x00000020u
#define PDL_LPC_TMR_UNIT_1					0x00000040u
#define PDL_LPC_TMR_BOTH					0x00000080u

/* I/O port retention cancellation */
#define PDL_LPC_IO_RELEASE					0x00000100u

/* Change operating power mode */
#define PDL_LPC_CHANGE_HIGH_SPEED			0x00000200ul
#define PDL_LPC_CHANGE_MIDDLE_SPEED_1A		0x00000400ul
#define PDL_LPC_CHANGE_MIDDLE_SPEED_1B		0x00000800ul
#define PDL_LPC_CHANGE_MIDDLE_SPEED_2A		0x00001000ul
#define PDL_LPC_CHANGE_MIDDLE_SPEED_2B		0x00002000ul
#define PDL_LPC_CHANGE_LOW_SPEED_1			0x00004000ul
#define PDL_LPC_CHANGE_LOW_SPEED_2			0x00008000ul

/* Sleep mode return clock source switching */
#define PDL_LPC_SLEEP_RETURN_CHANGE_DISABLE	0x00010000ul
#define PDL_LPC_SLEEP_RETURN_CHANGE_HOCO	0x00020000ul
#define PDL_LPC_SLEEP_RETURN_CHANGE_MAIN	0x00040000ul


#endif
/* End of file */
