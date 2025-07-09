/**
 * PTG Generated Driver Header File
 * 
 * @file      ptg.h
 *            
 * @ingroup   ptgdriver
 *            
 * @brief     This is the generated driver header file for the PTG driver
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

#ifndef PTG_H
#define PTG_H

// Section: Included Files

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include "ptg_types.h"
#include "ptg_interface.h"


/**
 * @ingroup  ptgdriver
 * @brief    Structure object of type PTG_INTERFACE with the custom name
 *           given by the user in the Melody Driver User interface. The default name 
 *           e.g. PTG can be changed by the user in the PTG user interface. 
 *           This allows defining a structure with application specific name using 
 *           the 'Custom Name' field. Application specific name allows the API Portability.
*/
extern const struct PTG_INTERFACE PTG;

// Section: Helper Macros

/**
 * @ingroup  ptgdriver
 * @brief    PTG execution steps
*/
 /* PTGQUE0 */                
#define PTG_STEP0 PTGQUE0bits.STEP0                
#define PTG_STEP1 PTGQUE0bits.STEP1                
 /* PTGQUE1 */                
#define PTG_STEP2 PTGQUE0bits.STEP2                
#define PTG_STEP3 PTGQUE0bits.STEP3                
 /* PTGQUE2 */                
#define PTG_STEP4 PTGQUE1bits.STEP4                
#define PTG_STEP5 PTGQUE1bits.STEP5                
 /* PTGQUE3 */                
#define PTG_STEP6 PTGQUE1bits.STEP6                
#define PTG_STEP7 PTGQUE1bits.STEP7                
 /* PTGQUE4 */                
#define PTG_STEP8 PTGQUE2bits.STEP8                
#define PTG_STEP9 PTGQUE2bits.STEP9                
 /* PTGQUE5 */                
#define PTG_STEP10 PTGQUE2bits.STEP10                
#define PTG_STEP11 PTGQUE2bits.STEP11                
 /* PTGQUE6 */                
#define PTG_STEP12 PTGQUE3bits.STEP12                
#define PTG_STEP13 PTGQUE3bits.STEP13                
 /* PTGQUE7 */                
#define PTG_STEP14 PTGQUE3bits.STEP14                
#define PTG_STEP15 PTGQUE3bits.STEP15                
 /* PTGQUE8 */                
#define PTG_STEP16 PTGQUE4bits.STEP16                
#define PTG_STEP17 PTGQUE4bits.STEP17                
 /* PTGQUE9 */                
#define PTG_STEP18 PTGQUE4bits.STEP18                
#define PTG_STEP19 PTGQUE4bits.STEP19                
 /* PTGQUE10 */                
#define PTG_STEP20 PTGQUE5bits.STEP20                
#define PTG_STEP21 PTGQUE5bits.STEP21                
 /* PTGQUE11 */                
#define PTG_STEP22 PTGQUE5bits.STEP22                
#define PTG_STEP23 PTGQUE5bits.STEP23                
 /* PTGQUE12 */                
#define PTG_STEP24 PTGQUE6bits.STEP24                
#define PTG_STEP25 PTGQUE6bits.STEP25                
 /* PTGQUE13 */                
#define PTG_STEP26 PTGQUE6bits.STEP26                
#define PTG_STEP27 PTGQUE6bits.STEP27                
 /* PTGQUE14 */                
#define PTG_STEP28 PTGQUE7bits.STEP28                
#define PTG_STEP29 PTGQUE7bits.STEP29                
 /* PTGQUE15 */                
#define PTG_STEP30 PTGQUE7bits.STEP30                
#define PTG_STEP31 PTGQUE7bits.STEP31

/**
 @ingroup  ptgdriver
 @brief    PTG command macros
*/
#define PTGCTRL  (0x0u << 4u )    //PTGCTRL command        
#define PTGCOPY  (0x1u << 4u )    //PTGCOPY command        
#define PTGADD  (0x1u << 4u )    //PTGADD command        
#define PTGSTRB  (0x2u << 4 )    //PTGSTRB command        
#define PTGWHI  (0x4u << 4u )    //PTGWHI command        
#define PTGWLO  (0x5u << 4u )    //PTGWLO command        
#define PTGIRQ  (0x7u << 4u )    //PTGIRQ command        
#define PTGTRIG  (0x8u << 4u )    //PTGTRIG command        
#define PTGJMP  (0xau << 4u )    //PTGJMP command        
#define PTGJMPC0  (0xcu << 4u )    //PTGJMPC0 command        
#define PTGJMPC1  (0xeu << 4u )    //PTGJMPC1 command

// Section: PTG Module APIs

/**
 * @ingroup  ptgdriver
 * @brief    Initializes PTG module 
 * @param    none
 * @return   none  
 */
void PTG_Initialize(void);

/**
 * @ingroup  ptgdriver
 * @brief    Deinitializes the PTG to POR values
 * @param    none
 * @return   none  
 */
void PTG_Deinitialize(void);

/**
 * @ingroup  ptgdriver
 * @brief    Enables the PTG module
 * @pre      \ref PTG_Initialize function should have been called 
 *           before calling this function.
 * @param    none
 * @return   none  
 */

void PTG_Enable (void);

/**
 * @ingroup  ptgdriver
 * @brief    Starts the PTG step sequence execution
 * @pre      \ref PTG_Initialize and \ref PTG_Enable functions 
 *           should have been called before calling this function.
 * @param    none
 * @return   none  
 */

void PTG_StepSequenceStart(void);

/**
 * @ingroup  ptgdriver
 * @brief    Sets the software trigger for PTG module
 * @param    none
 * @return   none  
 */

void PTG_SoftwareTriggerSet(void);

/**
 * @ingroup  ptgdriver
 * @brief    Clears the software trigger for PTG module
 * @param    none
 * @return   none
 * @Note     This API is added to resolve the Errata issue : 
 *           After executing the wait for software trigger step command followed by the same command, 
 *           the PTGSWT bit is not cleared by hardware, To clear PTGSWT User must call "PTG_SoftwareTriggerClear" API
 */

void PTG_SoftwareTriggerClear(void);

/**
 * @ingroup  ptgdriver
 * @brief    Returns the status of PTG watchdog timeout bit
 * @param    none
 * @return   true   - PTG watchdog timeout occurred
 * @return   false  - PTG watchdog timeout not occurred  
 */

bool PTG_WatchdogTimeoutStatusGet(void);

/**
 * @ingroup  ptgdriver
 * @brief    Stops the PTG step sequence execution
 * @param    none
 * @return   none  
 */

void PTG_StepSequenceStop(void);

/**
 * @ingroup  ptgdriver
 * @brief    Disables the PTG module
 * @param    none
 * @return   none  
 */

void PTG_Disable(void);

/**
 * @ingroup  ptgdriver
 * @brief    This function can be used to override default callback and to 
 *           define custom callback for PTG events.
 * @param[in]  event   -  PTG events that are available
 * @param[in]  callback -  Address of the callback function
 * @return   none  
 */
void PTG_EventCallbackRegister(enum PTG_EVENTS event, void (*callback)(void));

/**
 * @ingroup  ptgdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without 
 *           weak attribute or can register a custom callback function using 
 *           PTG_Trigger0CallbackRegister
 * @param    none
 * @return   none  
 */
void PTG_Trigger0Callback(void);

/**
 * @ingroup  ptgdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without 
 *           weak attribute or can register a custom callback function using 
 *           PTG_Trigger1CallbackRegister
 * @param    none
 * @return   none  
 */
void PTG_Trigger1Callback(void);

/**
 * @ingroup  ptgdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without 
 *           weak attribute or can register a custom callback function using 
 *           PTG_Trigger2CallbackRegister
 * @param    none
 * @return   none  
 */
void PTG_Trigger2Callback(void);

/**
 * @ingroup  ptgdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without 
 *           weak attribute or can register a custom callback function using 
 *           PTG_Trigger3CallbackRegister
 * @param    none
 * @return   none  
 */
void PTG_Trigger3Callback(void);

/**
 * @ingroup  ptgdriver
 * @brief    This is the default callback with weak attribute. 
 *           The user can override and implement the default callback without 
 *           weak attribute or can register a custom callback function using 
 *           PTG_WatchDogTimerCallbackRegister
 * @param    none
 * @return   none  
 */
void PTG_WatchDogTimerCallback(void);

/**
 * @ingroup    ptgdriver
 * @brief      This function is used to implement the tasks for polled implementations
 * @pre        PTG_Initialize() function should be called before 
 *             calling this function.
 * @param[in]  event  -  PTG events that are available
 * @return     none  
 */
void PTG_Tasks(enum PTG_EVENTS event);

#endif //_PTG_H
    
/**
 End of File
*/

