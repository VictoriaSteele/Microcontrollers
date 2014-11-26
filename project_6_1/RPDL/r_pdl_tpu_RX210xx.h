/*""FILE COMMENT""*************************************************************
* System Name	: Timer TPU API for RX210xx
* File Name		: r_pdl_tpu_RX210xx.h
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

#ifndef R_PDL_TPU_RX210xx_H
#define R_PDL_TPU_RX210xx_H

#define TPU_UNITS 				1

#define TPU_CHANNELS_PER_UNIT	6
#define TPU_CHANNELS (uint8_t)(TPU_UNITS * TPU_CHANNELS_PER_UNIT)

#define TPU_TGRA_TRIGGER_NONE	0x00u
#define TPU_TGRA_TRIGGER_DTC	0x01u
#define TPU_TGRA_TRIGGER_DMAC	0x02u

/* Globals */
extern volatile uint8_t rpdl_TPU_tgra_dmac_channel[];

/* Callback function storage */
extern VoidCallBackFunc rpdl_TPU_TGRA_callback_func[];
extern VoidCallBackFunc rpdl_TPU_TGRB_callback_func[];
extern VoidCallBackFunc rpdl_TPU_TGRC_callback_func[];
extern VoidCallBackFunc rpdl_TPU_TGRD_callback_func[];
extern VoidCallBackFunc rpdl_TPU_Overflow_callback_func[];
extern VoidCallBackFunc rpdl_TPU_Underflow_callback_func[];

/* Library prototypes */
bool R_TPU_SetAll(
	const uint8_t,
	const uint32_t
);

bool R_TPU_CreateAll(
	const uint8_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint32_t,
	const uint16_t,
	const uint16_t,
	const uint16_t,
	const uint16_t,
	const uint16_t,
	VoidCallBackFunc const,
	VoidCallBackFunc const,
	VoidCallBackFunc const,
	VoidCallBackFunc const,
	const uint8_t,
	VoidCallBackFunc const,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_TPU_DestroyAll(
	const uint8_t
);
bool R_TPU_ControlAll(
	const uint8_t,
	const uint8_t,
	const uint16_t,
	const uint16_t,
	const uint16_t,
	const uint16_t,
	const uint16_t
);
bool R_TPU_ReadAll(
	const uint8_t,
	volatile uint8_t * const,
	volatile uint16_t * const,
	volatile uint16_t * const,
	volatile uint16_t * const,
	volatile uint16_t * const,
	volatile uint16_t * const
);
bool ReturnFalse(void);

/* Macro definitions */
#define R_TPU_Set(a, b) \
( \
R_TPU_SetAll( (a), (b) ) \
)

#define R_TPU_Create(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r) \
( \
( ((a) < TPU_CHANNELS) && ((o) <= IPL_MAX) && ((r) <= IPL_MAX) ) ? \
R_TPU_CreateAll( (a), (b), (c), (d), (e), (f), (g), (h), (i), (j), (k), (l), (m), (n), (o), (p), (q), (r) ) : \
ReturnFalse() \
)

#define R_TPU_Control(a, b, c, d, e, f, g) \
( \
( (a) < TPU_CHANNELS ) ? \
R_TPU_ControlAll( (a), (b), (c), (d), (e), (f), (g) ) : \
ReturnFalse() \
)

#define R_TPU_Read(a, b, c, d, e, f, g) \
( \
( (a) < TPU_CHANNELS ) ? \
R_TPU_ReadAll( (a), (b), (c), (d), (e), (f), (g) ) : \
ReturnFalse() \
)

#define R_TPU_Destroy(a) \
( \
( (a) < TPU_UNITS ) ? \
R_TPU_DestroyAll( (a) ) : \
ReturnFalse() \
)

#endif
/* End of file */
