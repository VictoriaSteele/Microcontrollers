/*""FILE COMMENT""*************************************************************
* System Name	: I/O Port API for RX210
* File Name		: r_pdl_io_port_RX210.h
* Version		: 2.00
* Contents		: I/O Port API header
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

#ifndef R_PDL_IO_PORT_RX210_H
#define R_PDL_IO_PORT_RX210_H

/* Library prototypes */
bool R_IO_PORT_SetAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	const uint16_t
);
bool R_IO_PORT_ReadControlAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	volatile uint16_t * const
);
bool R_IO_PORT_ReadControlRegisterAll(
	const uint8_t,
	const uint8_t,
	volatile uint16_t * const
);
bool R_IO_PORT_ModifyControlAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	const uint8_t,
	const uint16_t
);
bool R_IO_PORT_ModifyControlRegisterAll(
	const uint8_t,
	const uint8_t,
	const uint16_t
);
bool R_IO_PORT_ReadDataAll(
	const uint8_t,
	const uint8_t,
	volatile uint8_t * const
);
bool R_IO_PORT_ReadDataRegisterAll(
	const uint8_t,
	volatile uint8_t * const
);
bool R_IO_PORT_WriteAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	const uint8_t
);
bool R_IO_PORT_WriteRegisterAll(
	const uint8_t,
	const uint8_t
);
bool R_IO_PORT_CompareAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	VoidCallBackFunc const
);
bool R_IO_PORT_CompareRegisterAll(
	const uint8_t,
	const uint8_t,
	VoidCallBackFunc const
);
bool R_IO_PORT_ModifyDataAll(
	const uint8_t,
	const uint8_t,
	const uint8_t,
	const uint16_t,
	const uint8_t
);
bool R_IO_PORT_ModifyDataRegisterAll(
	const uint8_t,
	const uint16_t,
	const uint8_t
);
bool R_IO_PORT_WaitAll(
	const uint8_t,
	const uint8_t,
	const uint8_t
);
bool R_IO_PORT_WaitRegisterAll(
	const uint8_t,
	const uint8_t
);
bool R_IO_PORT_NotAvailableAll(
	void
);
bool ReturnFalse(void);

/* The following limits allow the API function macros to decide if a
whole port is being controlled or just a pin.
They do not take into account pin package sizes. */
#define LOWER_PORT_LIMIT	PDL_IO_PORT_0
#define LOWER_PIN_LIMIT		PDL_IO_PORT_0_0
#define UPPER_PORT_LIMIT	PDL_IO_PORT_L
#define UPPER_PIN_LIMIT 	(PDL_IO_PORT_L_0 | PDL_IO_PORT_L_1)

/* Macro definitions */

/* R_IO_PORT_Set */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Set(a, b) \
( \
( ((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT) ) ? \
R_IO_PORT_SetAll( (uint8_t)((a) >> 8), (uint8_t)(a), (uint8_t)~(a), (b) ) : \
ReturnFalse() \
)

/* R_IO_PORT_ReadControl */
/* Call the function if the port number is valid. */
#define R_IO_PORT_ReadControl(a, b, c) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_ReadControlAll( (uint8_t)((a) >> 8), (uint8_t)(a), (b), (c) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_ReadControlRegisterAll( (uint8_t)(a), (b), (c) ) : \
ReturnFalse() \
)

/* R_IO_PORT_ModifyControl */
/* Call the function if the port number is valid. */
#define R_IO_PORT_ModifyControl(a, b, c) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_ModifyControlAll( (uint8_t)((a) >> 8), (uint8_t)(a), (uint8_t)~(a), (b), (c) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_ModifyControlRegisterAll( (uint8_t)(a), (b), (c) ) : \
ReturnFalse() \
)

/* R_IO_PORT_Read */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Read(a, b) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_ReadDataAll( (uint8_t)((a) >> 8), (uint8_t)(a), (b) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_ReadDataRegisterAll( (uint8_t)(a), (b) ) : \
ReturnFalse() \
)

/* R_IO_PORT_Write */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Write(a, b) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_WriteAll( (uint8_t)((a) >> 8), (uint8_t)(a), (uint8_t)~(a), (b) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_WriteRegisterAll( (uint8_t)(a), (b) ): \
ReturnFalse() \
)

/* R_IO_PORT_Compare */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Compare(a, b, c) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_CompareAll( (uint8_t)((a) >> 8), (uint8_t)(a), (b), (c) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_CompareRegisterAll( (uint8_t)(a), (b), (c) ): \
ReturnFalse() \
)

/* R_IO_PORT_Modify */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Modify(a, b, c) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) ) ? \
R_IO_PORT_ModifyDataAll( (uint8_t)((a) >> 8), (uint8_t)(a), (uint8_t)~(a), (b), (c) ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_ModifyDataRegisterAll( (uint8_t)(a), (b), (c) ): \
ReturnFalse() \
)

/* R_IO_PORT_Wait */
/* Call the function if the port number is valid. */
#define R_IO_PORT_Wait(a, b) \
( \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) && (b == 1u) ) ? \
R_IO_PORT_WaitAll( (uint8_t)((a) >> 8), (uint8_t)(a), (uint8_t)(a) ) : \
( (((a) >= LOWER_PIN_LIMIT) && ((a) <= UPPER_PIN_LIMIT)) && (b == 0u) ) ? \
R_IO_PORT_WaitAll( (uint8_t)((a) >> 8), (uint8_t)(a), 0u ) : \
( ((a) >= LOWER_PORT_LIMIT) && ((a) <= UPPER_PORT_LIMIT) ) ? \
R_IO_PORT_WaitRegisterAll( (uint8_t)(a), (b) ) : \
ReturnFalse() \
)

/* R_IO_PORT_NotAvailable */
#define R_IO_PORT_NotAvailable() \
( \
R_IO_PORT_NotAvailableAll() \
)

#endif
/* End of file */
