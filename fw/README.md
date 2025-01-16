# API Reference

## Header files

- [EF_Driver_Common.h](#file-ef_driver_commonh)
- [EF_WDT32.h](#file-ef_wdt32h)
- [EF_WDT32_regs.h](#file-ef_wdt32_regsh)

## File EF_Driver_Common.h

_C header file for common driver definitions and types._



## Structures and Types

| Type | Name |
| ---: | :--- |
| typedef uint32\_t | [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status)  <br>_A type that is used to return the status of the driver functions._ |


## Macros

| Type | Name |
| ---: | :--- |
| define  | [**EF\_DRIVER\_ERROR**](#define-ef_driver_error)  ((uint32\_t)1)<br>_Unspecified error._ |
| define  | [**EF\_DRIVER\_ERROR\_BUSY**](#define-ef_driver_error_busy)  ((uint32\_t)2)<br>_Driver is busy._ |
| define  | [**EF\_DRIVER\_ERROR\_PARAMETER**](#define-ef_driver_error_parameter)  ((uint32\_t)5)<br>_Parameter error._ |
| define  | [**EF\_DRIVER\_ERROR\_SPECIFIC**](#define-ef_driver_error_specific)  ((uint32\_t)6)<br>_Start of driver specific errors._ |
| define  | [**EF\_DRIVER\_ERROR\_TIMEOUT**](#define-ef_driver_error_timeout)  ((uint32\_t)3)<br>_Timeout occurred._ |
| define  | [**EF\_DRIVER\_ERROR\_UNSUPPORTED**](#define-ef_driver_error_unsupported)  ((uint32\_t)4)<br>_Operation not supported._ |
| define  | [**EF\_DRIVER\_OK**](#define-ef_driver_ok)  ((uint32\_t)0)<br>_Operation succeeded._ |

## Structures and Types Documentation

### typedef `EF_DRIVER_STATUS`

_A type that is used to return the status of the driver functions._
```c
typedef uint32_t EF_DRIVER_STATUS;
```



## Macros Documentation

### define `EF_DRIVER_ERROR`

_Unspecified error._
```c
#define EF_DRIVER_ERROR ((uint32_t)1)
```

### define `EF_DRIVER_ERROR_BUSY`

_Driver is busy._
```c
#define EF_DRIVER_ERROR_BUSY ((uint32_t)2)
```

### define `EF_DRIVER_ERROR_PARAMETER`

_Parameter error._
```c
#define EF_DRIVER_ERROR_PARAMETER ((uint32_t)5)
```

### define `EF_DRIVER_ERROR_SPECIFIC`

_Start of driver specific errors._
```c
#define EF_DRIVER_ERROR_SPECIFIC ((uint32_t)6)
```

### define `EF_DRIVER_ERROR_TIMEOUT`

_Timeout occurred._
```c
#define EF_DRIVER_ERROR_TIMEOUT ((uint32_t)3)
```

### define `EF_DRIVER_ERROR_UNSUPPORTED`

_Operation not supported._
```c
#define EF_DRIVER_ERROR_UNSUPPORTED ((uint32_t)4)
```

### define `EF_DRIVER_OK`

_Operation succeeded._
```c
#define EF_DRIVER_OK ((uint32_t)0)
```


## File EF_WDT32.h

_H header file for EF\_WDT32 APIs which contains the function prototypes._




## Functions

| Type | Name |
| ---: | :--- |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_I2C\_setGclkEnable**](#function-ef_i2c_setgclkenable) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t value) <br>_Sets the GCLK enable bit for the specified WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_clearTimeOutFlag**](#function-ef_wdt32_cleartimeoutflag) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt) <br>_Clears the timeout flag in the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_disable**](#function-ef_wdt32_disable) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt) <br>_Disables the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_enable**](#function-ef_wdt32_enable) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt) <br>_Enables the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_getIM**](#function-ef_wdt32_getim) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t \*im) <br>_Gets the interrupt mask (IM) from the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_getMIS**](#function-ef_wdt32_getmis) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t \*mis) <br>_Gets the masked interrupt status (MIS) from the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_getRIS**](#function-ef_wdt32_getris) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t \*ris) <br>_Gets the raw interrupt status (RIS) from the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_isTimeOut**](#function-ef_wdt32_istimeout) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t \*is\_timeout) <br>_Checks if the WDT32 has timed out._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_readTimerValue**](#function-ef_wdt32_readtimervalue) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t \*timer\_value) <br>_Reads the current timer value from the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_reloadWDT**](#function-ef_wdt32_reloadwdt) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt) <br>_Reloads the WDT32 timer by disabling and re-enabling it._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_setICR**](#function-ef_wdt32_seticr) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t mask) <br>_Sets the interrupt clear (IC) register in the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_setIM**](#function-ef_wdt32_setim) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t mask) <br>_Sets the interrupt mask (IM) in the WDT32 peripheral._ |
|  [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) | [**EF\_WDT32\_setReloadValue**](#function-ef_wdt32_setreloadvalue) ([**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr) wdt, uint32\_t load\_val) <br>_Sets the reload value in the WDT32 peripheral._ |



## Functions Documentation

### function `EF_I2C_setGclkEnable`

_Sets the GCLK enable bit for the specified WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_I2C_setGclkEnable (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t value
) 
```


This function enables or disables the GCLK for the WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `value` The value to set (0 to disable, 1 to enable).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_clearTimeOutFlag`

_Clears the timeout flag in the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_clearTimeOutFlag (
    EF_WDT32_TYPE_PTR wdt
) 
```


This function writes to the interrupt clear register (IC) to clear the WDT timeout flag.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_disable`

_Disables the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_disable (
    EF_WDT32_TYPE_PTR wdt
) 
```


This function clears the enable bit in the control register of the WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_enable`

_Enables the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_enable (
    EF_WDT32_TYPE_PTR wdt
) 
```


This function sets the enable bit in the control register of the WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_getIM`

_Gets the interrupt mask (IM) from the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_getIM (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t *im
) 
```


This function retrieves the interrupt mask (IM) from the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `im` Pointer to a variable where the IM value will be stored.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_getMIS`

_Gets the masked interrupt status (MIS) from the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_getMIS (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t *mis
) 
```


This function retrieves the masked interrupt status (MIS) from the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `mis` Pointer to a variable where the MIS value will be stored.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_getRIS`

_Gets the raw interrupt status (RIS) from the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_getRIS (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t *ris
) 
```


This function retrieves the raw interrupt status (RIS) from the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `ris` Pointer to a variable where the RIS value will be stored.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_isTimeOut`

_Checks if the WDT32 has timed out._
```c
EF_DRIVER_STATUS EF_WDT32_isTimeOut (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t *is_timeout
) 
```


This function reads the raw interrupt status (RIS) to determine if a timeout has occurred.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `is_timeout` Pointer to a variable where the timeout status will be stored (1 if timeout, 0 otherwise).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_readTimerValue`

_Reads the current timer value from the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_readTimerValue (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t *timer_value
) 
```


This function retrieves the current value of the timer register in the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `timer_value` Pointer to a variable where the current timer value will be stored.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_reloadWDT`

_Reloads the WDT32 timer by disabling and re-enabling it._
```c
EF_DRIVER_STATUS EF_WDT32_reloadWDT (
    EF_WDT32_TYPE_PTR wdt
) 
```


This function clears the timeout flag, disables the WDT32, and then re-enables it.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_setICR`

_Sets the interrupt clear (IC) register in the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_setICR (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t mask
) 
```


This function sets the interrupt clear (IC) register in the specified WDT32 peripheral to clear interrupts.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `mask` The value to be written to the interrupt clear (IC) register.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_setIM`

_Sets the interrupt mask (IM) in the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_setIM (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t mask
) 
```


This function sets the interrupt mask (IM) register in the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `mask` The value to be written to the interrupt mask (IM) register.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.
### function `EF_WDT32_setReloadValue`

_Sets the reload value in the WDT32 peripheral._
```c
EF_DRIVER_STATUS EF_WDT32_setReloadValue (
    EF_WDT32_TYPE_PTR wdt,
    uint32_t load_val
) 
```


This function sets the reload value in the load register of the specified WDT32 peripheral.



**Parameters:**


* `wdt` Pointer to the WDT32 base address structure [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr).
* `load_val` The value to be loaded into the WDT32 reload register.


**Returns:**

status A value of type [**EF\_DRIVER\_STATUS**](#typedef-ef_driver_status) : returns a success or error code.


## File EF_WDT32_regs.h





## Structures and Types

| Type | Name |
| ---: | :--- |
| typedef struct [**\_EF\_WDT32\_TYPE\_**](#struct-_ef_wdt32_type_) | [**EF\_WDT32\_TYPE**](#typedef-ef_wdt32_type)  <br> |
| typedef [**EF\_WDT32\_TYPE**](#typedef-ef_wdt32_type) \* | [**EF\_WDT32\_TYPE\_PTR**](#typedef-ef_wdt32_type_ptr)  <br> |
| struct | [**\_EF\_WDT32\_TYPE\_**](#struct-_ef_wdt32_type_) <br> |


## Macros

| Type | Name |
| ---: | :--- |
| define  | [**EF\_WDT32\_CTRL\_EN\_MASK**](#define-ef_wdt32_ctrl_en_mask)  ((uint32\_t)0x1)<br> |
| define  | [**EF\_WDT32\_WDTTO\_FLAG**](#define-ef_wdt32_wdtto_flag)  ((uint32\_t)0x1)<br> |
| define  | [**IO\_TYPES**](#define-io_types)  <br> |
| define  | [**\_\_R**](#define-__r)  volatile const uint32\_t<br> |
| define  | [**\_\_RW**](#define-__rw)  volatile       uint32\_t<br> |
| define  | [**\_\_W**](#define-__w)  volatile       uint32\_t<br> |

## Structures and Types Documentation

### typedef `EF_WDT32_TYPE`

```c
typedef struct _EF_WDT32_TYPE_ EF_WDT32_TYPE;
```

### typedef `EF_WDT32_TYPE_PTR`

```c
typedef EF_WDT32_TYPE* EF_WDT32_TYPE_PTR;
```

### struct `_EF_WDT32_TYPE_`


Variables:

-  [**\_\_W**](#define-__w) GCLK  

-  [**\_\_W**](#define-__w) IC  

-  [**\_\_RW**](#define-__rw) IM  

-  [**\_\_R**](#define-__r) MIS  

-  [**\_\_R**](#define-__r) RIS  

-  [**\_\_W**](#define-__w) control  

-  [**\_\_W**](#define-__w) load  

-  [**\_\_R**](#define-__r) reserved_0  

-  [**\_\_R**](#define-__r) timer  



## Macros Documentation

### define `EF_WDT32_CTRL_EN_MASK`

```c
#define EF_WDT32_CTRL_EN_MASK ((uint32_t)0x1)
```

### define `EF_WDT32_WDTTO_FLAG`

```c
#define EF_WDT32_WDTTO_FLAG ((uint32_t)0x1)
```

### define `IO_TYPES`

```c
#define IO_TYPES 
```

### define `__R`

```c
#define __R volatile const uint32_t
```

### define `__RW`

```c
#define __RW volatile       uint32_t
```

### define `__W`

```c
#define __W volatile       uint32_t
```


