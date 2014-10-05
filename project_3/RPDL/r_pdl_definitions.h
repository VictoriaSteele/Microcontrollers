/*""FILE COMMENT""*************************************************************
* System Name	: PDL driver API
* File Name		: r_pdl_definitions.h
* Version		: 2.00
* Contents		: API headers for RX210xx
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			:
* Programmer	: 
* Note			: 
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_DEFS_H
#define R_PDL_DEFS_H

#define PDL_VERSION	0x0200u	/* v02.00 in BCD format */

/* Check the FPU setting */
#ifdef __FPU
 #error "FPU instructions are enabled.  The RX210 CPU does not have a floating point unit."
#endif

/* Check the precision setting */
#ifndef __DBL8
 #error "Double precision is not selected.  Please change from single to double precision."
#endif

/* Peripherals */
#include "r_pdl_adc_12_RX210xx.h"
#include "r_pdl_bsc_RX210xx.h"
#include "r_pdl_cac_RX210xx.h"
#include "r_pdl_cgc_RX210xx.h"
#include "r_pdl_cmt_RX210xx.h"
#include "r_pdl_cpa_RX210xx.h"
#include "r_pdl_cpb_RX210xx.h"
#include "r_pdl_crc_RX210xx.h"
#include "r_pdl_dac_10_RX210xx.h"
#include "r_pdl_dmac_RX210xx.h"
#include "r_pdl_doc_RX210xx.h"
#include "r_pdl_dtc_RX210xx.h"
#include "r_pdl_elc_RX210xx.h"
#include "r_pdl_iic_RX210xx.h"
#include "r_pdl_intc_RX210xx.h"
#include "r_pdl_io_port_RX210.h"
#include "r_pdl_iwdt_RX210xx.h"
#include "r_pdl_lpc_RX210xx.h"
#include "r_pdl_lvd_RX210xx.h"
#include "r_pdl_mcu_RX210xx.h"
#include "r_pdl_mpc_RX210xx.h"
#include "r_pdl_mtu2_RX210xx.h"
#include "r_pdl_poe_RX210xx.h"
#include "r_pdl_rtc_RX210xx.h"
#include "r_pdl_rwp_RX210xx.h"
#include "r_pdl_sci_RX210xx.h"
#include "r_pdl_spi_RX210xx.h"
#include "r_pdl_tmr_RX210xx.h"
#include "r_pdl_tpu_RX210xx.h"
#include "r_pdl_ts_RX210xx.h"
#include "r_pdl_wdt_RX210xx.h"

#endif
/* End of file */
