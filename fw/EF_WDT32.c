/*
	Copyright 2025 Efabless Corp.

	Author: Efabless Corp. (ip_admin@efabless.com)

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


/*! \file EF_WDT32.c
    \brief C file for WDT32 APIs which contains the function implmentations 
    
*/


#ifndef EF_WDT32_C
#define EF_WDT32_C

/******************************************************************************
* Includes
******************************************************************************/
#include "EF_WDT32.h"

/******************************************************************************
* File-Specific Macros and Constants
******************************************************************************/



/******************************************************************************
* Static Variables
******************************************************************************/



/******************************************************************************
* Static Function Prototypes
******************************************************************************/



/******************************************************************************
* Function Definitions
******************************************************************************/


EF_DRIVER_STATUS WDT32_readTimerValue(EF_WDT32_TYPE_PTR wdt, uint32_t* timer_value){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (timer_value == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if timer_value is NULL
    } else {
        *timer_value = wdt->timer;              // Set the timer_value to the value of the timer register
    }
    return status;
}

EF_DRIVER_STATUS WDT32_setReloadValue(EF_WDT32_TYPE_PTR wdt, uint32_t load_val){
    
    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->load = load_val;                   // Set the load register to the given value
    }
    return status;
}

EF_DRIVER_STATUS WDT32_getRIS(EF_WDT32_TYPE_PTR wdt, uint32_t* ris){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (ris == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if ris is NULL
    } else {
        *ris = wdt->RIS;                        // Set the ris to the value of the RIS register
    }
    return status;
}

EF_DRIVER_STATUS WDT32_getMIS(EF_WDT32_TYPE_PTR wdt, uint32_t* mis){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (mis == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if mis is NULL
    } else {
        *mis = wdt->MIS;                        // Set the mis to the value of the MIS register
    }
    return status;
}

EF_DRIVER_STATUS WDT32_setIM(EF_WDT32_TYPE_PTR wdt, uint32_t mask){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->IM = mask;                         // Set the IM register to the given mask
    }
    return status;
}

EF_DRIVER_STATUS WDT32_getIM(EF_WDT32_TYPE_PTR wdt, uint32_t* im){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (im == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if im is NULL
    } else {
        *im = wdt->IM;                          // Set the im to the value of the IM register
    }
    return status;
}

EF_DRIVER_STATUS WDT32_setICR(EF_WDT32_TYPE_PTR wdt, uint32_t mask){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->IC = mask;                         // Set the IC register to the given mask
    }
    return status;
}


// The following functions are not verified yet
/******************************************************************************************************************************************/
/******************************************************************************************************************************************/


EF_DRIVER_STATUS EF_I2C_setGclkEnable (EF_WDT32_TYPE_PTR wdt, uint32_t value){
    
    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (value > (uint32_t)0x1) {  
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if value is out of range
    }else {
        wdt->GCLK = value;                      // Set the GCLK enable bit to the given value
    }

    return status;
}

EF_DRIVER_STATUS WDT32_enable(EF_WDT32_TYPE_PTR wdt){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->control |= EF_WDT32_CTRL_EN_MASK;
    }
    return status;
}

EF_DRIVER_STATUS WDT32_disable(EF_WDT32_TYPE_PTR wdt){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->control &= ~EF_WDT32_CTRL_EN_MASK;
    }
    return status;
}

EF_DRIVER_STATUS WDT32_reloadWDT(EF_WDT32_TYPE_PTR wdt){
    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        status = WDT32_clearTimeOutFlag(wdt);
        if (status == EF_DRIVER_OK) { WDT32_disable(wdt);}else{}
        if (status == EF_DRIVER_OK) {WDT32_enable(wdt);} else{}
    }
    return status;
}

EF_DRIVER_STATUS WDT32_clearTimeOutFlag(EF_WDT32_TYPE_PTR wdt){

    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else {
        wdt->IC = EF_WDT32_WDTTO_FLAG;          // Clear the WDTTO flag
    }
    return status;
}
    
EF_DRIVER_STATUS WDT32_isTimeOut(EF_WDT32_TYPE_PTR wdt, uint32_t* is_timeout){
    EF_DRIVER_STATUS status = EF_DRIVER_OK;

    if (wdt == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if wdt is NULL
    } else if (is_timeout == NULL) {
        status = EF_DRIVER_ERROR_PARAMETER;     // Return EF_DRIVER_ERROR_PARAMETER if is_timeout is NULL
    } else {
        *is_timeout = wdt->RIS & EF_WDT32_WDTTO_FLAG;
    }

    return status;
}
/******************************************************************************
* Static Function Definitions
******************************************************************************/





#endif // EF_WDT32_C

/******************************************************************************
* End of File
******************************************************************************/

