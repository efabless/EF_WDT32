/*
	Copyright 2025 Efabless Corp.


	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	    www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

*/


/*! \file EF_WDT32.h
    \brief H header file for EF_WDT32 APIs which contains the function prototypes 
    
*/

#ifndef EF_WDT32_H
#define EF_WDT32_H
/******************************************************************************
* Includes
******************************************************************************/
#include "EF_WDT32_regs.h"
#include "EF_Driver_Common.h"


/******************************************************************************
* Macros and Constants
******************************************************************************/

/******************************************************************************
* Typedefs and Enums
******************************************************************************/


/******************************************************************************
* Function Prototypes
******************************************************************************/
EF_DRIVER_STATUS EF_WDT32_readTimerValue(EF_WDT32_TYPE_PTR wdt, uint32_t* timer_value);

EF_DRIVER_STATUS EF_WDT32_setReloadValue(EF_WDT32_TYPE_PTR wdt, uint32_t load_val);

EF_DRIVER_STATUS EF_WDT32_getRIS(EF_WDT32_TYPE_PTR wdt, uint32_t* ris);

EF_DRIVER_STATUS EF_WDT32_getMIS(EF_WDT32_TYPE_PTR wdt, uint32_t* mis);

EF_DRIVER_STATUS EF_WDT32_setIM(EF_WDT32_TYPE_PTR wdt, uint32_t mask);

EF_DRIVER_STATUS EF_WDT32_getIM(EF_WDT32_TYPE_PTR wdt, uint32_t* im);

EF_DRIVER_STATUS EF_WDT32_setICR(EF_WDT32_TYPE_PTR wdt, uint32_t mask);


// The following functions are not verified yet
/******************************************************************************************************************************************/
/******************************************************************************************************************************************/
EF_DRIVER_STATUS EF_I2C_setGclkEnable (EF_WDT32_TYPE_PTR wdt, uint32_t value);

EF_DRIVER_STATUS EF_WDT32_enable(EF_WDT32_TYPE_PTR wdt);

EF_DRIVER_STATUS EF_WDT32_disable(EF_WDT32_TYPE_PTR wdt);

EF_DRIVER_STATUS EF_WDT32_reloadWDT(EF_WDT32_TYPE_PTR wdt);

EF_DRIVER_STATUS EF_WDT32_clearTimeOutFlag(EF_WDT32_TYPE_PTR wdt);

EF_DRIVER_STATUS EF_WDT32_isTimeOut(EF_WDT32_TYPE_PTR wdt, uint32_t* is_timeout);

/******************************************************************************
* External Variables
******************************************************************************/


#endif // EF_WDT32_H

/******************************************************************************
* End of File
******************************************************************************/

