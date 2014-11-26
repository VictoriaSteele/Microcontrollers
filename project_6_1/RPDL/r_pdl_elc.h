/*""FILE COMMENT""*************************************************************
* System Name	: ELC API
* File Name		: r_pdl_elc.h
* Version		: 2.00
* Contents		: ELC API header
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

#ifndef R_PDL_ELC_H
#define R_PDL_ELC_H

#include "r_pdl_common_defs_RX210xx.h"

/* Function prototypes */
bool R_ELC_Create(
	VoidCallBackFunc,
	uint8_t,
	VoidCallBackFunc,
	uint8_t
);
bool R_ELC_Control(
	uint16_t,
	uint32_t,
	uint32_t
);
bool R_ELC_Read(
	uint8_t,
	uint8_t*
);
bool R_ELC_Write(
	uint8_t,
	uint8_t
);
bool R_ELC_Destroy(
	void
);

/*Common defines*/
#define PDL_ELC_PORT_B		0x00000001u
#define PDL_ELC_PORT_E		0x00000002u

/*** R_ELC_Control ****/
/*R_ELC_Control, Parameter1: Operations*/
#define PDL_ELC_ENABLE 			0x0001u
#define PDL_ELC_DISABLE			0x0002u
#define PDL_ELC_CREATE_LINK		0x0004u
#define PDL_ELC_REMOVE_LINK		0x0008u
#define PDL_ELC_TIMER_OPERATION	0x0010u
#define PDL_ELC_PORT_GROUP		0x0020u
#define PDL_ELC_PORT_CONTROL	0x0040u
#define PDL_ELC_SINGLE_PORT		0x0080u
#define PDL_ELC_SOFTWARE_EVENT	0x0100u
#define PDL_ELC_TRIGGER			0x0200u


/*R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_CREATE_LINK*/
/*Modules that can be triggered by an event.*/
#define PDL_ELC_LINK_MODULE_MTU2_CHANNEL_1		0x00000001u
#define PDL_ELC_LINK_MODULE_MTU2_CHANNEL_2		0x00000002u
#define PDL_ELC_LINK_MODULE_MTU2_CHANNEL_3		0x00000004u
#define PDL_ELC_LINK_MODULE_MTU2_CHANNEL_4		0x00000008u
#define PDL_ELC_LINK_MODULE_CMT_CHANNEL_1		0x00000010u
#define PDL_ELC_LINK_MODULE_TMR_CHANNEL_0		0x00000020u
#define PDL_ELC_LINK_MODULE_TMR_CHANNEL_2		0x00000040u
#define PDL_ELC_LINK_MODULE_ADC12				0x00000080u
#define PDL_ELC_LINK_MODULE_DAC_CHANNEL_0		0x00000100u
#define PDL_ELC_LINK_MODULE_INTERRUPT_1			0x00000200u
#define PDL_ELC_LINK_MODULE_INTERRUPT_2			0x00000400u
#define PDL_ELC_LINK_MODULE_OUTPUT_PORT_B_GROUP	0x00000800u
#define PDL_ELC_LINK_MODULE_OUTPUT_PORT_E_GROUP	0x00001000u
#define PDL_ELC_LINK_MODULE_INPUT_PORT_B_GROUP	0x00002000u
#define PDL_ELC_LINK_MODULE_INPUT_PORT_E_GROUP	0x00004000u
#define PDL_ELC_LINK_MODULE_SINGLE_PORT_0		0x00008000u
#define PDL_ELC_LINK_MODULE_SINGLE_PORT_1		0x00010000u
#define PDL_ELC_LINK_MODULE_SINGLE_PORT_2		0x00020000u
#define PDL_ELC_LINK_MODULE_SINGLE_PORT_3		0x00040000u
#define PDL_ELC_LINK_MODULE_CLOCK_SOURCE		0x00080000u
#define PDL_ELC_LINK_MODULE_POE2				0x00100000u

/*R_ELC_Control, Parameter3 when Parameter1 = PDL_ELC_CREATE_LINK*/
/*Events that can cause a trigger to a module.*/
/*NOTE: This selection is the value to write to a ELSRn register.*/
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_1_COMPARE_MATCH_1A	0x08u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_1_COMPARE_MATCH_1B	0x09u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_1_OVERFLOW			0x0Au		
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_1_UNDERFLOW			0x0Bu
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_2_COMPARE_MATCH_2A	0x0Cu
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_2_COMPARE_MATCH_2B	0x0Du
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_2_OVERFLOW			0x0Eu
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_2_UNDERFLOW			0x0Fu
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_3_COMPARE_MATCH_3A	0x10u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_3_COMPARE_MATCH_3B	0x11u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_3_COMPARE_MATCH_3C	0x12u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_3_COMPARE_MATCH_3D	0x13u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_3_OVERFLOW			0x14u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_COMPARE_MATCH_4A	0x15u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_COMPARE_MATCH_4B	0x16u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_COMPARE_MATCH_4C	0x17u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_COMPARE_MATCH_4D	0x18u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_OVERFLOW			0x19u
#define PDL_ELC_LINK_EVENT_MTU2_CHANNEL_4_UNDERFLOW			0x1Au
#define PDL_ELC_LINK_EVENT_CMT_CHANNEL_1_COMPARE_MATCH_1	0x1Fu
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_0_COMPARE_MATCH_A0	0x22u
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_0_COMPARE_MATCH_B0	0x23u
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_0_OVERFLOW			0x24u
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_2_COMPARE_MATCH_A2	0x28u
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_2_COMPARE_MATCH_B2	0x29u
#define PDL_ELC_LINK_EVENT_TMR_CHANNEL_2_OVERFLOW			0x2Au
#define PDL_ELC_LINK_EVENT_RTC_PERIODIC						0x2Eu
#define PDL_ELC_LINK_EVENT_IWDT								0x31u
#define PDL_ELC_LINK_EVENT_SCI5_ERROR						0x3Au
#define PDL_ELC_LINK_EVENT_SCI5_RECEIVE_DATA_FULL			0x3Bu
#define PDL_ELC_LINK_EVENT_SCI5_TRANSMIT_DATA_EMPTY			0x3Cu
#define PDL_ELC_LINK_EVENT_SCI5_TRANSMIT_END				0x3Du
#define PDL_ELC_LINK_EVENT_IIC_ERROR_OR_EVENT				0x4Eu
#define PDL_ELC_LINK_EVENT_IIC_RECEIVE_DATA_FULL			0x4Fu
#define PDL_ELC_LINK_EVENT_IIC_TRANSMIT_DATA_EMPTY			0x50u
#define PDL_ELC_LINK_EVENT_IIC_TRANSMIT_END					0x51u
#define PDL_ELC_LINK_EVENT_SPI_ERROR						0x52u
#define PDL_ELC_LINK_EVENT_SPI_IDLE							0x53u
#define PDL_ELC_LINK_EVENT_SPI_RECEIVE_DATA_FULL			0x54u
#define PDL_ELC_LINK_EVENT_SPI_TRANSMIT_DATA_EMPTY			0x55u
#define PDL_ELC_LINK_EVENT_SPI_TRANSMIT_END					0x56u
#define PDL_ELC_LINK_EVENT_ADC12_CONVERSION_END				0x58u
#define PDL_ELC_LINK_EVENT_COMPARATOR_B0_CHANGE				0x59u
#define PDL_ELC_LINK_EVENT_COMPARATOR_B0_B1_COMMON_CHANGE	0x5Au
#define PDL_ELC_LINK_EVENT_LVD1_VOLTAGE_DETECTION			0x5Bu
#define PDL_ELC_LINK_EVENT_LVD2_VOLTAGE_DETECTION			0x5Cu
#define PDL_ELC_LINK_EVENT_DMAC_CHANNEL_0_TRANSFER_END		0x5Du
#define PDL_ELC_LINK_EVENT_DMAC_CHANNEL_1_TRANSFER_END		0x5Eu
#define PDL_ELC_LINK_EVENT_DMAC_CHANNEL_2_TRANSFER_END		0x5Fu
#define PDL_ELC_LINK_EVENT_DMAC_CHANNEL_3_TRANSFER_END		0x60u
#define PDL_ELC_LINK_EVENT_DTC_TRANSFER_END					0x61u
#define PDL_ELC_LINK_EVENT_OSCILLATION_STOP_DETECTION		0x62u
#define PDL_ELC_LINK_EVENT_INPUT_PORT_GROUP_B				0x63u
#define PDL_ELC_LINK_EVENT_INPUT_PORT_GROUP_E				0x64u
#define PDL_ELC_LINK_EVENT_SINGLE_INPUT_PORT_0				0x65u
#define PDL_ELC_LINK_EVENT_SINGLE_INPUT_PORT_1				0x66u
#define PDL_ELC_LINK_EVENT_SINGLE_INPUT_PORT_2				0x67u
#define PDL_ELC_LINK_EVENT_SINGLE_INPUT_PORT_3				0x68u
#define PDL_ELC_LINK_EVENT_SOFTWARE_EVENT					0x69u


/*R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_TIMER_OPERATION*/
/*Timer Channel that will be triggered*/
#define PDL_ELC_TIMER_MTU2_CHANNEL_1	0x01u
#define PDL_ELC_TIMER_MTU2_CHANNEL_2	0x02u
#define PDL_ELC_TIMER_MTU2_CHANNEL_3	0x04u
#define PDL_ELC_TIMER_MTU2_CHANNEL_4	0x08u
#define PDL_ELC_TIMER_CMT_CHANNEL_1		0x10u
#define PDL_ELC_TIMER_TMR_CHANNEL_0		0x20u
#define PDL_ELC_TIMER_TMR_CHANNEL_2		0x40u

/*R_ELC_Control, Parameter3 when Parameter1 = PDL_ELC_TIMER_OPERATION*/
/*Timer operation*/
#define PDL_ELC_TIMER_COUNT_START		0x01u
#define PDL_ELC_TIMER_COUNT_RESTART		0x02u
#define PDL_ELC_TIMER_EVENT_COUNTER		0x04u
#define PDL_ELC_TIMER_INPUT_CAPTURE		0x08u
#define PDL_ELC_TIMER_EVENT_DISABLE		0x10u

/*R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_PORT_GROUP*/
/*PORTB or PortE selection*/
/*Commented here as defined in common area:
#define PDL_ELC_PORT_B		0x00000001u
#define PDL_ELC_PORT_E		0x00000002u
*/

/*R_ELC_Control, Parameter3 when Parameter1 = PDL_ELC_PORT_GROUP*/
/*Bit mask of group, a 1 means bit is part of the group.*/

/*R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_PORT_CONTROL*/
/*PORTB or PortE selection*/
/*Commented here as defined in common area:
#define PDL_ELC_PORT_B		0x00000001u
#define PDL_ELC_PORT_E		0x00000002u
*/

/*R_ELC_Control, Parameter3 when Parameter1 = PDL_ELC_PORT_CONTROL*/
/*Port Group Control*/
/*Input Group - Edge control */
#define PDL_ELC_PORT_GROUP_INPUT_RISING_EDGE		0x0001u
#define PDL_ELC_PORT_GROUP_INPUT_FALLING_EDGE		0x0002u
#define PDL_ELC_PORT_GROUP_INPUT_ANY_EDGE			0x0004u
/*Input Group - PDBF control*/
#define PDL_ELC_PORT_GROUP_INPUT_BUFFER_ENABLE		0x0008u
#define PDL_ELC_PORT_GROUP_INPUT_BUFFER_DISABLE		0x0010u
/*Output Group - Output control*/
#define PDL_ELC_PORT_GROUP_OUTPUT_0					0x0020u
#define PDL_ELC_PORT_GROUP_OUTPUT_1					0x0040u
#define PDL_ELC_PORT_GROUP_OUTPUT_TOGGLE			0x0080u
#define PDL_ELC_PORT_GROUP_OUTPUT_BUFFER			0x0100u
#define PDL_ELC_PORT_GROUP_OUTPUT_ROTATE			0x0200u

/*R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_SINGLE_PORT*/
/*The single port (module or event) to select a pin for.*/
#define PDL_ELC_SINGLE_PORT_0				0x0001u
#define PDL_ELC_SINGLE_PORT_1				0x0002u
#define PDL_ELC_SINGLE_PORT_2				0x0004u
#define PDL_ELC_SINGLE_PORT_3				0x0008u

/*R_ELC_Control, Parameter3 when Parameter1 = PDL_ELC_SINGLE_PORT*/
/*The pin to assign to the 'single port'.*/
#define PDL_ELC_PIN_PORT_B_0				0x00000001u
#define PDL_ELC_PIN_PORT_B_1				0x00000002u
#define PDL_ELC_PIN_PORT_B_2				0x00000004u
#define PDL_ELC_PIN_PORT_B_3				0x00000008u
#define PDL_ELC_PIN_PORT_B_4				0x00000010u
#define PDL_ELC_PIN_PORT_B_5				0x00000020u
#define PDL_ELC_PIN_PORT_B_6				0x00000040u
#define PDL_ELC_PIN_PORT_B_7				0x00000080u
#define PDL_ELC_PIN_PORT_E_0				0x00000100u
#define PDL_ELC_PIN_PORT_E_1				0x00000200u
#define PDL_ELC_PIN_PORT_E_2				0x00000400u
#define PDL_ELC_PIN_PORT_E_3				0x00000800u
#define PDL_ELC_PIN_PORT_E_4				0x00001000u
#define PDL_ELC_PIN_PORT_E_5				0x00002000u
#define PDL_ELC_PIN_PORT_E_6				0x00004000u
#define PDL_ELC_PIN_PORT_E_7				0x00008000u
/*Module behaviour (output pin) */
#define PDL_ELC_PIN_OUTPUT_0				0x00010000u
#define PDL_ELC_PIN_OUTPUT_1				0x00020000u	
#define PDL_ELC_PIN_OUTPUT_TOGGLE			0x00040000u
/*Event behaviour (input pin)*/
#define PDL_ELC_PIN_EVENT_RISING_EDGE		0x00080000u
#define PDL_ELC_PIN_EVENT_FALLING_EDGE		0x00100000u
#define PDL_ELC_PIN_EVENT_ANY_EDGE			0x00200000u


/* R_ELC_Control, Parameter2 when Parameter1 = PDL_ELC_TRIGGER*/
/* Trigger of DTC setting*/
/* Interrupt1 (ELSR18I) */
#define PDL_ELC_INTERRUPT_1_TRIGGER_DTC_ENABLE		0x0001u
#define PDL_ELC_INTERRUPT_1_TRIGGER_DTC_DISABLE		0x0002u
/* Interrupt2 (ELSR19I) */
#define PDL_ELC_INTERRUPT_2_TRIGGER_DTC_ENABLE		0x0010u
#define PDL_ELC_INTERRUPT_2_TRIGGER_DTC_DISABLE		0x0020u


/*** R_WDT_READ: Parameter1 ****/
/* Port selection*/
/*Commented here as defined in common area:
#define PDL_ELC_PORT_B		0x00000001u
#define PDL_ELC_PORT_E		0x00000002u
*/

/*** R_WDT_Write: Parameter1 ****/
/* Port selection*/
/*Commented here as defined in common area:
#define PDL_ELC_PORT_B		0x00000001u
#define PDL_ELC_PORT_E		0x00000002u
*/

#endif
/* End of file */
