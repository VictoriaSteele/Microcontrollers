/*""FILE COMMENT""******************************************************* 
* System Name	:                                                          
* File Name 	: RPDL_Configuration.c                                     
* Version		: 0.10                                                     
* Contents		: RPDL configuration information                           
* Customer		:                                                          
* Model		:                                                          
* Order		:                                                          
* CPU			: RX                                                       
* Compiler		: RXC                                                      
* OS			: Nothing                                                  
* Programmer	:                                                          
* Note			:                                                           
************************************************************************  
* Copyright,2013 RENESAS ELECTRONICS CORPORATION                          
* AND RENESAS SOLUTIONS CORPORATION                                       
************************************************************************  
*                                                                         
*""FILE COMMENT END""**************************************************/  
                                                                           
#include "r_pdl_configuration.h"                                            
                                                                           
                                                                           
/* RPDL configuration */                                                  
const RPDL_CONFIGURATION g_rpdl_config =                                  
{                                                                         
/* Package */                                                             
RPDL_PIN_PACKAGE_100,                                                        
/* MCU Version */                                                         
RPDL_MCU_VERSION_B,                                                         
/* Rom Size */                                                            
RPDL_ROM_SIZE_768_TO_1000                                                          
};                                                                        
