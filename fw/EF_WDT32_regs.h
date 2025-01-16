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

#ifndef EF_WDT32REGS_H
#define EF_WDT32REGS_H



/******************************************************************************
* Includes
******************************************************************************/
#include "EF_Driver_Common.h"


/******************************************************************************
* Macros and Constants
******************************************************************************/
#ifndef IO_TYPES
#define IO_TYPES
#define   __R     volatile const uint32_t
#define   __W     volatile       uint32_t
#define   __RW    volatile       uint32_t
#endif


#define EF_WDT32_WDTTO_FLAG	     ((uint32_t)0x1)
#define EF_WDT32_CTRL_EN_MASK	 ((uint32_t)0x1)

/******************************************************************************
* Typedefs and Enums
******************************************************************************/
typedef struct _EF_WDT32_TYPE_ {
	__R 	timer;
	__W 	load;
	__W 	control;
	__R 	reserved_0[16317];
	__RW	IM;
	__R 	MIS;
	__R 	RIS;
	__W 	IC;
	__W 	GCLK;
} EF_WDT32_TYPE;

typedef EF_WDT32_TYPE* EF_WDT32_TYPE_PTR;

/******************************************************************************
* Function Prototypes
******************************************************************************/



/******************************************************************************
* External Variables
******************************************************************************/




#endif // EF_WDT32REGS_H

/******************************************************************************
* End of File
******************************************************************************/
