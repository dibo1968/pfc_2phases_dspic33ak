// <editor-fold defaultstate="collapsed" desc="Description/Instruction ">
/**
 * @file board_service.h
 *
 * @brief This header file lists variable types and interface functions for 
 * board services
 * 
 * Definitions in this file are for dsPIC33AK128MC106
 *
 * Component: BOARD SERVICE
 *
 */
// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="Disclaimer ">

/*******************************************************************************
* SOFTWARE LICENSE AGREEMENT
* 
* � [2024] Microchip Technology Inc. and its subsidiaries
* 
* Subject to your compliance with these terms, you may use this Microchip 
* software and any derivatives exclusively with Microchip products. 
* You are responsible for complying with third party license terms applicable to
* your use of third party software (including open source software) that may 
* accompany this Microchip software.
* 
* Redistribution of this Microchip software in source or binary form is allowed 
* and must include the above terms of use and the following disclaimer with the
* distribution and accompanying materials.
* 
* SOFTWARE IS "AS IS." NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
* APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,
* MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL 
* MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR 
* CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO
* THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE 
* POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY
* LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL
* NOT EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR THIS
* SOFTWARE
*
* You agree that you are solely responsible for testing the code and
* determining its suitability.  Microchip has no obligation to modify, test,
* certify, or support the code.
*
*******************************************************************************/
// </editor-fold>

#ifndef __BOARD_SERVICE_H
#define __BOARD_SERVICE_H

// <editor-fold defaultstate="collapsed" desc="HEADER FILES ">

#include <stdint.h>
#include <stdbool.h>
#include <xc.h>

#include "port_config.h"
/*#include "uart1.h"*/
#include "pwm_manual.h"
#include "clock_manual.h"
#include "adc_manual.h"
#include "measure.h"
#include "pfc_measure.h"
#include "timer1_manual.h"

// </editor-fold>

#ifdef __cplusplus  // Provide C++ Compatability
    extern "C" {
#endif
        
// <editor-fold defaultstate="collapsed" desc="TYPE DEFINITIONS ">
        
/* Button Scanning State

  Description:
    This structure will host parameters required by Button scan routine.
 */
typedef enum tagBUTTON_STATE
{
    BUTTON_NOT_PRESSED = 0, // wait for button to be pressed
    BUTTON_PRESSED = 1, // button was pressed, check if short press / long press
    BUTTON_DEBOUNCE = 2
} BUTTON_STATE;
    
// *****************************************************************************
/* Button data type

  Description:
    This structure will host parameters required by Button scan routine.
 */
typedef struct
{
   BUTTON_STATE state;
   uint16_t debounceCount;
   bool logicState;
   bool status;
} BUTTON_T;

// </editor-fold>

// <editor-fold defaultstate="collapsed" desc="DEFINITIONS/CONSTANTS ">

/** Button De-bounce in milli Seconds */
#define	BUTTON_DEBOUNCE_COUNT      30
/** The board service Tick is set as 1 millisecond - specify the count in terms 
    PWM ISR cycles (i.e. BOARD_SERVICE_TICK_COUNT = 1 milli Second / PWM period)*/
#define BOARD_SERVICE_TICK_COUNT   20
/* Heart beat LED Counts - specify in no.of milli secs*/
#define HEART_BEAT_LED_COUNT       250
/*Potentiometer - saturation and scaling definitions*/
/* POT Saturation Voltage Level in volts*/
#define POT_SATURATION_VOLTS        2.2
/* POT Saturation Voltage Level in ADC Counts for 3.3V MCU - To be changed for a 5V MCU*/
#define POT_SATURATION_COUNTS      (POT_SATURATION_VOLTS/3.3) * 4096
/* POT Scaling Factor for 3.3V MCU - To be changed for a 5V MCU*/
#define POT_SCALE_FACTOR           (3.3/POT_SATURATION_VOLTS)  

// </editor-fold>

// <editor-fold defaultstate="expanded" desc="INTERFACE FUNCTIONS ">

void HAL_PFCPWMDisableOutputs(void);
void HAL_PFCPWMEnableOutputs(void);
void ClearPWMPCIFault(void);
void BoardServiceInit(void);
void BoardServiceStepIsr(void);
void BoardService(void);
bool IsPressed_Button1(void);
bool IsPressed_Button2(void);
void HAL_InitPeripherals(void);
// </editor-fold>

#ifdef __cplusplus
}
#endif

#endif /* __BOARD_SERVICE_H */
