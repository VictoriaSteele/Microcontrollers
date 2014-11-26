/*""FILE COMMENT""*************************************************************
* System Name	: 
* File Name		: R_PDL_Configuration.h
* Version		: 2.00
* Contents		: RPDL configuration information
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			:
* Programmer	: 
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_CONFIGURATION_H
#define R_PDL_CONFIGURATION_H

typedef enum RPDL_CONFIG_PIN_PACKAGE
{
	RPDL_PIN_PACKAGE_48,
	RPDL_PIN_PACKAGE_64,
	RPDL_PIN_PACKAGE_80,
	RPDL_PIN_PACKAGE_100,
	RPDL_PIN_PACKAGE_144	
}RPDL_CONFIG_PIN_PACKAGE;

typedef enum RPDL_CONFIG_MCU_VERSION
{
	RPDL_MCU_VERSION_A,
	RPDL_MCU_VERSION_B,
	RPDL_MCU_VERSION_C	
}RPDL_CONFIG_MCU_VERSION;

/* RPDL only needs to know if the ROM >= 768KB */
typedef enum RPDL_CONFIG_ROM_SIZE
{
	/* ROM Size in KB */
	RPDL_ROM_SIZE_64_TO_512,
	RPDL_ROM_SIZE_768_TO_1000	
}RPDL_CONFIG_ROM_SIZE;

typedef struct RPDL_CONFIGURATION
{
	RPDL_CONFIG_PIN_PACKAGE pin_package;
	RPDL_CONFIG_MCU_VERSION mcu_version;
	RPDL_CONFIG_ROM_SIZE rom_size;
}RPDL_CONFIGURATION;

/*This global variable will hold the configuration information.*/
extern const RPDL_CONFIGURATION g_rpdl_config;

#endif


/* End of file */
