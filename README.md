# MS_WDT32
A simple 32-bit WatchDog Timer (WDT). It can be used to interrupt the CPU to:
- Indicate a software malfunction.
- Wakeup the CPU after a certain sleep time.

The WDT is a simple 32-bit down-counter which is decremented every system clock cycle. When it reached zero, the counter is loaded with the value stored in the load register and the TO flag is raised.. 

The WDT can be enabled/disabled. When it is disabled the counter is loaded with the value in the load register.
	
## Registers
|Offset|Register| Size |Description|
|------|--------|------|-----------|
|0x0000| Timer | 32 | The current value of the timer |
|0x0004| Load | 32 | The value loaded into the timer when it reaches zero|
|0x0008| Control | 1 | Writing 0 disables the WDT and writing 1 enables it |
|0x0F00| RIS | 1 | Raw Status Register |
|0x0F04| MIS | 1 | Masked Status Register |
|0x0F08| IM | 1 | Interrupts Masking Register; enable and disables interrupts |
|0x0F0C| ICR | 1 | Interrupts Clear Register; write 1 to clear the flag |

## Interrupt Flags
The Time Out (TO) flag is the only available flag. The TO is raised when the down-counter reaches 0. 

## How to use
### Configuring the timeout value
Timeout Value (sec) = load/clk_freq

### Restarting the WDT (software monitoring)
Just disable then re-enable the WDT. You code should do this frequently before the WDT times out.

