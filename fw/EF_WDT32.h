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

//! Sets the GCLK enable bit in the GCLK register to a certain value
    /*!
        \param [in] wdt           Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
        \param [in] value The value of the GCLK enable bit
        
        \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code 
    */
EF_DRIVER_STATUS EF_WDT32_setGclkEnable(EF_WDT32_TYPE_PTR wdt, uint32_t value);


//! Reads the current timer value from the WDT32 peripheral.
/*!
    This function retrieves the current value of the timer register in the specified WDT32 peripheral.

    \param [in] wdt           Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [out] timer_value  Pointer to a variable where the current timer value will be stored.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_readTimerValue(EF_WDT32_TYPE_PTR wdt, uint32_t* timer_value);



//! Sets the reload value in the WDT32 peripheral.
/*!
    This function sets the reload value in the load register of the specified WDT32 peripheral.

    \param [in] wdt      Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [in] load_val The value to be loaded into the WDT32 reload register.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.

*/
EF_DRIVER_STATUS EF_WDT32_setReloadValue(EF_WDT32_TYPE_PTR wdt, uint32_t load_val);


//! Gets the raw interrupt status (RIS) from the WDT32 peripheral.
/*!
    This function retrieves the raw interrupt status (RIS) from the specified WDT32 peripheral.

    \param [in] wdt   Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [out] ris  Pointer to a variable where the RIS value will be stored.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_getRIS(EF_WDT32_TYPE_PTR wdt, uint32_t* ris);


//! Gets the masked interrupt status (MIS) from the WDT32 peripheral.
/*!
    This function retrieves the masked interrupt status (MIS) from the specified WDT32 peripheral.

    \param [in] wdt   Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [out] mis  Pointer to a variable where the MIS value will be stored.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_getMIS(EF_WDT32_TYPE_PTR wdt, uint32_t* mis);


//! Sets the interrupt mask (IM) in the WDT32 peripheral.
/*!
    This function sets the interrupt mask (IM) register in the specified WDT32 peripheral.

    \param [in] wdt   Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [in] mask  The value to be written to the interrupt mask (IM) register.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_setIM(EF_WDT32_TYPE_PTR wdt, uint32_t mask);



//! Gets the interrupt mask (IM) from the WDT32 peripheral.
/*!
    This function retrieves the interrupt mask (IM) from the specified WDT32 peripheral.

    \param [in] wdt  Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [out] im  Pointer to a variable where the IM value will be stored.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_getIM(EF_WDT32_TYPE_PTR wdt, uint32_t* im);



//! Sets the interrupt clear (IC) register in the WDT32 peripheral.
/*!
    This function sets the interrupt clear (IC) register in the specified WDT32 peripheral to clear interrupts.

    \param [in] wdt   Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [in] mask  The value to be written to the interrupt clear (IC) register.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_setICR(EF_WDT32_TYPE_PTR wdt, uint32_t mask);


// The following functions are not verified yet
/******************************************************************************************************************************************/
/******************************************************************************************************************************************/


//! Sets the GCLK enable bit for the specified WDT32 peripheral.
/*!
    This function enables or disables the GCLK for the WDT32 peripheral.

    \param [in] wdt   Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [in] value The value to set (0 to disable, 1 to enable).

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_I2C_setGclkEnable (EF_WDT32_TYPE_PTR wdt, uint32_t value);


//! Enables the WDT32 peripheral.
/*!
    This function sets the enable bit in the control register of the WDT32 peripheral.

    \param [in] wdt  Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_enable(EF_WDT32_TYPE_PTR wdt);


//! Disables the WDT32 peripheral.
/*!
    This function clears the enable bit in the control register of the WDT32 peripheral.

    \param [in] wdt  Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_disable(EF_WDT32_TYPE_PTR wdt);

//! Reloads the WDT32 timer by disabling and re-enabling it.
/*!
    This function clears the timeout flag, disables the WDT32, and then re-enables it.

    \param [in] wdt  Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/
EF_DRIVER_STATUS EF_WDT32_reloadWDT(EF_WDT32_TYPE_PTR wdt);



//! Clears the timeout flag in the WDT32 peripheral.
/*!
    This function writes to the interrupt clear register (IC) to clear the WDT timeout flag.

    \param [in] wdt  Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/

EF_DRIVER_STATUS EF_WDT32_clearTimeOutFlag(EF_WDT32_TYPE_PTR wdt);


//! Checks if the WDT32 has timed out.
/*!
    This function reads the raw interrupt status (RIS) to determine if a timeout has occurred.

    \param [in] wdt          Pointer to the WDT32 base address structure \ref EF_WDT32_TYPE_PTR.
    \param [out] is_timeout  Pointer to a variable where the timeout status will be stored (1 if timeout, 0 otherwise).

    \return status A value of type \ref EF_DRIVER_STATUS : returns a success or error code.
*/

EF_DRIVER_STATUS EF_WDT32_isTimeOut(EF_WDT32_TYPE_PTR wdt, uint32_t* is_timeout);

/******************************************************************************
* External Variables
******************************************************************************/


#endif // EF_WDT32_H

/******************************************************************************
* End of File
******************************************************************************/

