/**
 * PTG Generated Driver Interface Header File
 * 
 * @file      ptg_interface.h
 *            
 * @defgroup  ptgdriver PTG Driver
 *            
 * @brief     Peripheral Trigger Generator Driver is a user-programmable sequencer 
 *            that is capable of generating complex trigger signal sequences to 
 *            coordinate the operation of other peripherals using dsPIC MCUs.
 *
 * @skipline @version   PLIB Version 1.0.2
 *            
 * @skipline  Device : dsPIC33AK128MC106
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

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

#ifndef PTG_INTERFACE_H
#define PTG_INTERFACE_H


// Section: Included Files
#include <stdbool.h>
#include "ptg_types.h"

// Section: Data Type Definitions
        
/**
 @ingroup  ptgdriver
 @struct   PTG_INTERFACE
 @brief    Structure containing the function pointers of PTG driver
*/
struct PTG_INTERFACE
{ 
    void (*Initialize)(void);
    ///< Pointer to \ref PTG_Initialize
    
    void (*Deinitialize)(void);
    ///< Pointer to \ref PTG_Deinitialize
    
    void (*Enable)(void);
    ///< Pointer to \ref PTG_Enable
    
    void (*Disable)(void);
    ///< Pointer to \ref PTG_Disable
    
    void (*StepSequenceStart)(void);
    ///< Pointer to \ref PTG_StepSequenceStart 
    
    void (*SoftwareTriggerSet)(void);
    ///< Pointer to \ref PTG_SoftwareTriggerSet 
    
    void (*SoftwareTriggerClear)(void);
    ///< Pointer to \ref PTG_SoftwareTriggerClear 
    
    bool (*WatchdogTimeoutStatusGet)(void);
    ///< Pointer to \ref PTG_WatchdogTimeoutStatusGet
    
    void (*StepSequenceStop)(void);
    ///< Pointer to \ref PTG_StepSequenceStop
  
    void (*EventCallbackRegister)(enum PTG_EVENTS event, void (*callback)(void));
    ///< Pointer to \ref PTG_EventCallbackRegister

    void (*Tasks)(enum PTG_EVENTS event);
    ///< Pointer to \ref PTG_Tasks (Supported only in polling mode)
};

#endif //PTG_INTERFACE_H



