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


/*! \file EF_WDT32_example.c
    \brief C file containing an example of how to use the WDT32 APIs
    
*/


#ifndef EF_WDT32_EXAMPLE_C
#define EF_WDT32_EXAMPLE_C

/******************************************************************************
* Includes
******************************************************************************/
#include "EF_WDT32_example.h"

/******************************************************************************
* File-Specific Macros and Constants
******************************************************************************/
#define Example_WDT32_BASE_ADDRESS 0x40000000
#define WDT0 ((EF_WDT32_TYPE_PTR)Example_WDT32_BASE_ADDRESS)


/******************************************************************************
* Static Variables
******************************************************************************/



/******************************************************************************
* Static Function Prototypes
******************************************************************************/



/******************************************************************************
* Function Definitions
******************************************************************************/


EF_DRIVER_STATUS EF_WDT32_example(void) {
    EF_DRIVER_STATUS status;
    uint32_t timer_value;
    uint32_t timeout_status;

    // Step 1: Enable the Watchdog Timer (WDT0)
    status = EF_WDT32_enable(WDT0);
    if (status != EF_DRIVER_OK) {return status;}

    // Step 2: Set the reload value to prevent timeout
    status = EF_WDT32_setReloadValue(WDT0, 0x0FFFFF);
    if (status != EF_DRIVER_OK) {return status;}

    // Step 3: Simulate some processing
    for (volatile int i = 0; i < 1000000; ++i);

    // Step 4: Check if the WDT0 has timed out
    status = EF_WDT32_isTimeOut(WDT0, &timeout_status);
    if (status != EF_DRIVER_OK) {return status;}

    // Step 5: If a timeout occurred, handle it
    if (timeout_status == 1) {
        // Clear the timeout flag to acknowledge the timeout
        status = EF_WDT32_clearTimeOutFlag(WDT0);
        if (status != EF_DRIVER_OK) {return status;}

        // Reload the WDT0 to prevent a system reset
        status = EF_WDT32_reloadWDT(WDT0);
        if (status != EF_DRIVER_OK) {return status;}
    }

    // Step 6: Read the current timer value to see if it is still running
    status = EF_WDT32_readTimerValue(WDT0, &timer_value);
    if (status != EF_DRIVER_OK) {return status;}

    // Step 7: Simulate some more processing
    for (volatile int i = 0; i < 1000000; ++i);

    // Step 8: Disable the Watchdog Timer
    status = EF_WDT32_disable(WDT0);
    if (status != EF_DRIVER_OK) {return status;}

    return EF_DRIVER_OK;
}

/******************************************************************************
* Static Function Definitions
******************************************************************************/



#endif // EF_WDT32_EXAMPLE_C

/******************************************************************************
* End of File
******************************************************************************/
