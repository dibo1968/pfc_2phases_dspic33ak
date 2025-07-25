/**
 * DMT Generated Driver Header File
 * 
 * @file      dmt.h
 * 
 * @defgroup  dmtdriver DMT Driver
 * 
 * @brief     Deadman Timer (DMT) driver using dsPIC MCUs. The functionality 
 *            is to interrupt the processor in the event of a software 
 *            malfunction.
 *
 * @skipline @version   PLIB Version 1.0.1
 *
 * @skipline  Device : dsPIC33AK128MC106
*/

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef DMT_H
#define DMT_H

// Section: Included Files
#include <stdbool.h>
#include <stdint.h>

// Section: DMT APIs

/**
 * @ingroup  dmtdriver
 * @brief    Initializes the DMT module
 * @param    none
 * @return   none
 */
void DMT_Initialize ( void );

/**
 * @ingroup  dmtdriver
 * @brief    Writes the PreClear Pattern for DMTPRECLR register. 
 * @pre      This function should be called before calling \ref DMT_Clear
 * @param    none
 * @return   none
 */
void DMT_PreClear(void);

/**
 * @ingroup  dmtdriver
 * @brief    Enables the DMT module
 * @param    none
 * @return   none
 */
void DMT_Enable(void);

/**
 * @ingroup  dmtdriver
 * @brief    Checks the PreClear Status and clears the DMT Fetch Counter
 * @pre      \ref DMT_PreClear() should be called for the associated function to work
 * @param    none
 * @return   none
 */
void DMT_Clear(void);

/**
 * @ingroup  dmtdriver
 * @brief    Returns the Window Open status
 * @param    none
 * @return   true  - Window Open status bit is set 
 * @return   false - Window Open status bit is not set
 */
bool DMT_IsWindowOpen(void);

/**
 * @ingroup  dmtdriver
 * @brief    Checks for the PreClear sequence was initiated and 
 *           done before the Clear sequence is done.
 * @param    none
 * @return   true  - PreClear sequence performed successfully 
 * @return   false - PreClear sequence failed 
 */
bool DMT_IsPreCleared(void);

/**
 * @ingroup  dmtdriver
 * @brief    Performs clear sequence for the DMT Event and all other DMT flags, 
 * 			 post occurance of DMT Event.
 * @param    none
 * @return   none 
 */
void DMT_PostEventClear(void);

/**
 * @ingroup  dmtdriver
 * @brief    Reads the DMT counter register 
 * @param    none
 * @return   32 bit timeout counter value
 */
uint32_t DMT_TimeoutCounterGet(void);

/**
 * @ingroup  dmtdriver
 * @brief    Reads the DMT Window Interval Counter
 * @param    none
 * @return   32-bit window interval counter value
 */
uint32_t DMT_WindowTimeoutCounterGet(void);

/**
 * @ingroup  dmtdriver
 * @brief    Gets the DMT status
 * @param    none
 * @return   status value of DMT
 */
uint32_t DMT_StatusGet(void);
 
/**
 * @ingroup  dmtdriver
 * @brief    Returns the current counter value 
 * @pre      Value will not be compensated for the instructions involved in 
 *           call-stack-push, reading SFR and call-stack-pop operations.
 * @param    none
 * @return   Returns the 32 bit counter value
 */
uint32_t DMT_CounterGet(void);

/**
 * @ingroup  dmtdriver
 * @brief    Returns the current counter value
 * @pre      Value will be compensated for the instructions involved in 
 *           call-stack-push, reading SFR and call-stack-pop operations.
 * @param    none
 * @return   Returns the 32 bit counter value
 */
uint32_t DMT_CalibratedCounterGet(void);

#endif  // DMT.h




