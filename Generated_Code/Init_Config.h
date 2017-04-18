/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.h
**     Project     : FreeRTOS example
**     Processor   : MK64FN1M0VLL12
**     Component   : MK64FN1M0LL12
**     Version     : Component 01.046, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Datasheet   : K64P144M120SF5RM, Rev.2, January 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-04-17, 17:40, # CodeGen: 0
**     Abstract    :
**         This file collects Processor Expert components configuration 
**         and interface files.
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MK64FN1M0VLL12
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Clock settings                                 : 
**            Clock sources                                : 
**              Internal oscillator                        : 
**                Slow internal reference clock [kHz]      : 32.768
**                Initialize slow trim value               : no
**                Fast internal reference clock [MHz]      : 4
**                Initialize fast trim value               : no
**              RTC oscillator                             : Enabled
**                Clock frequency [MHz]                    : 0.032768
**                Capacitor load                           : 0pF
**              System oscillator 0                        : Enabled
**                Clock source                             : External crystal
**                  Clock input pin                        : 
**                    Pin name                             : RMII_RXCLK
**                  Clock output pin                       : 
**                    Pin name                             : XTAL_K64_MAIN
**                  Clock frequency [MHz]                  : 8
**                  Capacitor load                         : 0pF
**                  Oscillator operating mode              : Low power
**            Clock source settings                        : 5
**              Clock source setting 0                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Disabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 0
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                MCG settings                             : 
**                  MCG mode                               : FEI
**                  MCG output clock                       : FLL clock
**                  MCG output [MHz]                       : 20.97152
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 8
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Enabled
**                    FLL output [MHz]                     : 20.97152
**                    MCGFFCLK clock [kHz]                 : 32.768
**                    Reference clock source               : Slow internal clock
**                    FLL reference clock [kHz]            : 32.768
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Disabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 0
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 1
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**              Clock source setting 1                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 8
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                MCG settings                             : 
**                  MCG mode                               : PEE
**                  MCG output clock                       : PLL clock
**                  MCG output [MHz]                       : 120
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 8
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Disabled
**                    FLL output [MHz]                     : 0
**                    MCGFFCLK clock [kHz]                 : 31.25
**                    Reference clock source               : External clock
**                      Reference clock divider            : Auto select
**                    FLL reference clock [kHz]            : 31.25
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Enabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 120
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 4
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**              Clock source setting 2                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Fast
**                    Reference divider                    : 1
**                  MCGIRCLK clock [MHz]                   : 4
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 8
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                MCG settings                             : 
**                  MCG mode                               : BLPI
**                  MCG output clock                       : Internal clock
**                  MCG output [MHz]                       : 4
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 8
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Disabled
**                    FLL output [MHz]                     : 0
**                    MCGFFCLK clock [kHz]                 : 32.768
**                    Reference clock source               : Slow internal clock
**                    FLL reference clock [kHz]            : 32.768
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Disabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 0
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 1
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**              Clock source setting 3                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Fast
**                    Reference divider                    : 2
**                  MCGIRCLK clock [MHz]                   : 2
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Disabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 0
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                MCG settings                             : 
**                  MCG mode                               : BLPE
**                  MCG output clock                       : External clock
**                  MCG output [MHz]                       : 0.032768
**                  MCG external ref. clock source         : RTC oscillator
**                  MCG external ref. clock [MHz]          : 0.032768
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Disabled
**                    FLL output [MHz]                     : 0
**                    MCGFFCLK clock [kHz]                 : 0
**                    Reference clock source               : External clock
**                      Reference clock divider            : Auto select
**                    FLL reference clock [kHz]            : 32.768
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Disabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 0
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 1
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**              Clock source setting 4                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 8
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                MCG settings                             : 
**                  MCG mode                               : PEE
**                  MCG output clock                       : PLL clock
**                  MCG output [MHz]                       : 120
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 8
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Disabled
**                    FLL output [MHz]                     : 0
**                    MCGFFCLK clock [kHz]                 : 31.25
**                    Reference clock source               : External clock
**                      Reference clock divider            : Auto select
**                    FLL reference clock [kHz]            : 31.25
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Enabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 120
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 4
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**            Clock configurations                         : 5
**              Clock configuration 0                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 2
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0.032768
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 0
**                  MCG mode                               : FEI
**                  MCG output [MHz]                       : 20.97152
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                  OSCERCLK clock [MHz]                   : 0
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                  MCGFFCLK [kHz]                         : 32.768
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 20.97152
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 20.97152
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 10.48576
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 10.48576
**                  PLL/FLL clock selection                : Auto select
**                    Clock frequency [MHz]                : 20.97152
**              Clock configuration 1                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 2
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0.032768
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 1
**                  MCG mode                               : PEE
**                  MCG output [MHz]                       : 120
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                  OSCERCLK clock [MHz]                   : 8
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                  MCGFFCLK [kHz]                         : 31.25
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 120
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 60
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 60
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 24
**                  PLL/FLL clock selection                : Auto select
**                    Clock frequency [MHz]                : 120
**              Clock configuration 2                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 4
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0.032768
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 2
**                  MCG mode                               : BLPI
**                  MCG output [MHz]                       : 4
**                  MCGIRCLK clock [MHz]                   : 4
**                  OSCERCLK clock [MHz]                   : 8
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                  MCGFFCLK [kHz]                         : 32.768
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 4
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 4
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 4
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 0.8
**                  PLL/FLL clock selection                : Auto select
**                    Clock frequency [MHz]                : 48
**              Clock configuration 3                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 2
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0.032768
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 3
**                  MCG mode                               : BLPE
**                  MCG output [MHz]                       : 0.032768
**                  MCGIRCLK clock [MHz]                   : 2
**                  OSCERCLK clock [MHz]                   : 0
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                  MCGFFCLK [kHz]                         : 0
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 0.032768
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 0.032768
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 0.032768
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 0.032768
**                  PLL/FLL clock selection                : Auto select
**                    Clock frequency [MHz]                : 48
**              Clock configuration 4                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 2
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0.032768
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 4
**                  MCG mode                               : PEE
**                  MCG output [MHz]                       : 120
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                  OSCERCLK clock [MHz]                   : 8
**                  ERCLK32K. clock [kHz]                  : 0.032768
**                  MCGFFCLK [kHz]                         : 31.25
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 120
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 60
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 60
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 24
**                  PLL/FLL clock selection                : PLL clock
**                    Clock frequency [MHz]                : 120
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              Very low power modes                       : Allowed
**              Low leakage stop mode                      : Not allowed
**              Very low leakage stop mode                 : Not allowed
**            Operation mode settings                      : 
**              WAIT operation mode                        : 
**                Return to wait after ISR                 : no
**              SLEEP operation mode                       : 
**                Return to stop after ISR                 : no
**              STOP operation mode                        : Disabled
**          External memory settings                       : Disabled
**          Common settings                                : 
**            Initialization priority                      : minimal priority
**            Watchdog disable                             : yes
**            Utilize after reset values                   : default
**            NMI pin                                      : Disabled
**            Reset pin                                    : Enabled
**              Reset Pin                                  : RESET_b
**            Debug interface (JTAG)                       : 
**              JTAG Mode                                  : JTAG
**                TDI                                      : Enabled
**                  TDI Pin                                : J1_8
**                TDO                                      : Enabled
**                  TDO Pin                                : J1_12
**                TCK                                      : Enabled
**                  TCK Pin                                : J2_2/J11_1
**                TMS                                      : Enabled
**                  TMS Pin                                : J9_2/SWD_DIO_TGTMCU/J12_2
**                nTRST                                    : Disabled
**            Flash memory organization                    : 
**              Flash blocks                               : 2
**                Flash block 0                            : PFlash
**                  Address                                : 0x0
**                  Size                                   : 524288
**                  Write unit size                        : 8
**                  Erase unit size                        : 4096
**                  Protection unit size                   : 32768
**                Flash block 1                            : PFlash
**                  Address                                : 0x80000
**                  Size                                   : 524288
**                  Write unit size                        : 8
**                  Erase unit size                        : 4096
**                  Protection unit size                   : 32768
**            Flash configuration field                    : Disabled
**          CPU interrupts/resets                          : 
**            Non-maskable interrupt                       : Enabled
**              Interrupt                                  : INT_NMI
**            Hard fault                                   : Disabled
**            Supervisor call                              : Disabled
**            Pendable service                             : Disabled
**            MCG Loss of lock                             : Disabled
**     Contents    :
**         SetClockConfiguration - LDD_TError Cpu_SetClockConfiguration(LDD_TClockConfiguration ModeID);
**         GetClockConfiguration - LDD_TClockConfiguration Cpu_GetClockConfiguration(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.h
** @version 01.00
** @brief
**         This file collects Processor Expert components configuration 
**         and interface files.
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#ifndef __Init_Config_H
#define __Init_Config_H
  
/* MODULE Init_Config.h */

/* Processor Expert types and constants */
#include "PE_Types.h"

/* Processor configuration file */
#include "CPU_Config.h"

/* PinSettings component header file */
#include "Pins1.h"
  
  
#endif /* __Init_Config_H */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
