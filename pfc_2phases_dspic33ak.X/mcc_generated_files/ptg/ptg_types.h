/**
 * PTG Generated Driver Types Header File
 * 
 * @file      ptg_types.h
 *            
 * @ingroup   ptgdriver
 *            
 * @brief     This is the generated driver types header file for the PTG driver
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

#ifndef PTG_TYPES_H
#define PTG_TYPES_H

// Section: Data Type Definitions

/**
 @ingroup  ptgdriver
 @enum     PTG_EVENTS
 @brief    Defines the PTG events that are available.
*/
enum PTG_EVENTS
{
    Trigger0,    /**<PTG Trigger0 Event */
    Trigger1,    /**<PTG Trigger1 Event */
    Trigger2,    /**<PTG Trigger2 Event */
    Trigger3,    /**<PTG Trigger3 Event */
    WatchDogTimer,    /**<PTG WatchDogTimer Event */
};

#endif  //PTG_TYPES_H
