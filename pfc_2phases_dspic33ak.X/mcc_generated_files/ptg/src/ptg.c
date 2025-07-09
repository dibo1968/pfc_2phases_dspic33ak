/**
 * PTG Generated Driver Source File
 * 
 * @file      ptg.c
 *            
 * @ingroup   ptgdriver
 *            
 * @brief     This is the generated driver source file for PTG driver
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

// Section: Included Files

#include <stdlib.h>
#include "../ptg.h"

// Section: File specific functions

static void (*PTG_Trigger0Handler)(void) = NULL;    
static void (*PTG_Trigger1Handler)(void) = NULL;    
static void (*PTG_Trigger2Handler)(void) = NULL;    
static void (*PTG_Trigger3Handler)(void) = NULL;    
static void (*PTG_WatchDogTimerHandler)(void) = NULL;    

// Section: Driver Interface

// PTG_INTERFACE object

const struct PTG_INTERFACE PTG = {

    .Initialize = &PTG_Initialize,
    .Deinitialize = &PTG_Deinitialize,
    .Enable = &PTG_Enable,
    .Disable = &PTG_Disable,
    .StepSequenceStart = &PTG_StepSequenceStart,
    .SoftwareTriggerSet = &PTG_SoftwareTriggerSet,
    .SoftwareTriggerClear = &PTG_SoftwareTriggerClear,
    .WatchdogTimeoutStatusGet = &PTG_WatchdogTimeoutStatusGet,
    .StepSequenceStop = &PTG_StepSequenceStop,

    .EventCallbackRegister = &PTG_EventCallbackRegister,
   
    .Tasks = &PTG_Tasks,
    
};

// Section: PTG Module APIs

void PTG_Initialize (void)
{
    // Clock Frequency = 8,000,000; PTGITM Single level detect with Step delay not executed on exit of command; PTGSTRT disabled; PTGIVIS disabled; PTGSSEN disabled; PTGSWT disabled; PTGTOGL disabled; SIDL disabled; ON disabled; PTGWDT 0; PTGPWD 1; PTGDIV 1; 
	PTGCON = (0x3UL & 0xFFFF77FFUL);  // disabling PTGEN bit and PTGSTRT bit
    // PTGBTE disabled; 
    PTGBTE = 0x0UL;
    // PTGHOLD 1; 
    PTGHOLD = 0x1UL;
    // Timer0 delay = 1; PTGT0LIM 8000; 
    PTGT0LIM = 0x1F40UL;    
    // Timer1 delay = 1; PTGT1LIM 8000; 
    PTGT1LIM = 0x1F40UL;    
    // Step delay = 1; PTGSDLIM 8000; 
    PTGSDLIM = 0x1F40UL;
    // PTGC0LIM 1; 
    PTGC0LIM = 0x1UL;
    // PTGC1LIM 1; 
    PTGC1LIM = 0x1UL;
    // PTGADJ 1; 
    PTGADJ = 0x1UL;
    // PTGL0 1; 
    PTGL0 = 0x1UL;
    // PTGQPTR 0x0; 
    PTGQPTR = 0x0UL;

  /** 
   Step Commands 
  */

    
	PTG_STEP0 = PTGCTRL | 0x0U; //NOP
	PTG_STEP1 = PTGCTRL | 0x0U; //NOP
	PTG_STEP2 = PTGCTRL | 0x0U; //NOP
	PTG_STEP3 = PTGCTRL | 0x0U; //NOP
	PTG_STEP4 = PTGCTRL | 0x0U; //NOP
	PTG_STEP5 = PTGCTRL | 0x0U; //NOP
	PTG_STEP6 = PTGCTRL | 0x0U; //NOP
	PTG_STEP7 = PTGCTRL | 0x0U; //NOP
	PTG_STEP8 = PTGCTRL | 0x0U; //NOP
	PTG_STEP9 = PTGCTRL | 0x0U; //NOP
	PTG_STEP10 = PTGCTRL | 0x0U; //NOP
	PTG_STEP11 = PTGCTRL | 0x0U; //NOP
	PTG_STEP12 = PTGCTRL | 0x0U; //NOP
	PTG_STEP13 = PTGCTRL | 0x0U; //NOP
	PTG_STEP14 = PTGCTRL | 0x0U; //NOP
	PTG_STEP15 = PTGCTRL | 0x0U; //NOP
	PTG_STEP16 = PTGCTRL | 0x0U; //NOP
	PTG_STEP17 = PTGCTRL | 0x0U; //NOP
	PTG_STEP18 = PTGCTRL | 0x0U; //NOP
	PTG_STEP19 = PTGCTRL | 0x0U; //NOP
	PTG_STEP20 = PTGCTRL | 0x0U; //NOP
	PTG_STEP21 = PTGCTRL | 0x0U; //NOP
	PTG_STEP22 = PTGCTRL | 0x0U; //NOP
	PTG_STEP23 = PTGCTRL | 0x0U; //NOP
	PTG_STEP24 = PTGCTRL | 0x0U; //NOP
	PTG_STEP25 = PTGCTRL | 0x0U; //NOP
	PTG_STEP26 = PTGCTRL | 0x0U; //NOP
	PTG_STEP27 = PTGCTRL | 0x0U; //NOP
	PTG_STEP28 = PTGCTRL | 0x0U; //NOP
	PTG_STEP29 = PTGCTRL | 0x0U; //NOP
	PTG_STEP30 = PTGCTRL | 0x0U; //NOP
	PTG_STEP31 = PTGCTRL | 0x0U; //NOP

    
    PTG_EventCallbackRegister(Trigger0, &PTG_Trigger0Callback);    
    PTG_EventCallbackRegister(Trigger1, &PTG_Trigger1Callback);    
    PTG_EventCallbackRegister(Trigger2, &PTG_Trigger2Callback);    
    PTG_EventCallbackRegister(Trigger3, &PTG_Trigger3Callback);    
    PTG_EventCallbackRegister(WatchDogTimer, &PTG_WatchDogTimerCallback);    
    
    PTG_Enable();
    
}

void PTG_Deinitialize (void)
{
    PTG_Disable();
    
    PTGCON = 0x0UL;
    PTGBTE = 0x0UL;
    PTGHOLD = 0x0UL;
    PTGT0LIM = 0x0UL;
    PTGT1LIM = 0x0UL;
    PTGSDLIM = 0x0UL;
    PTGC0LIM = 0x0UL;
    PTGC1LIM = 0x0UL;
    PTGADJ = 0x0UL;
    PTGL0 = 0x0UL;
    PTGQPTR = 0x0UL;
}


void PTG_Enable (void)
{
    PTGCONbits.ON = 1;
}

void PTG_StepSequenceStart (void)
{
    PTGCONbits.PTGSTRT = 1;
}

void PTG_SoftwareTriggerSet (void)
{
    PTGCONbits.PTGSWT = 1;    
}

void PTG_SoftwareTriggerClear (void)
{
    PTGCONbits.PTGSWT = 0;    
}

bool PTG_WatchdogTimeoutStatusGet (void)
{
    return( PTGCONbits.PTGWDTO);
}

void PTG_StepSequenceStop (void)
{
    PTGCONbits.PTGSTRT = 0;
}   

void PTG_Disable (void)
{
    PTGCONbits.ON = 0;
}

void PTG_EventCallbackRegister(enum PTG_EVENTS event, void (*callback)(void))
{
    switch(event)
    {
        case Trigger0:
            if(callback != NULL)
            {
                PTG_Trigger0Handler = callback;
            }
            break;
        case Trigger1:
            if(callback != NULL)
            {
                PTG_Trigger1Handler = callback;
            }
            break;
        case Trigger2:
            if(callback != NULL)
            {
                PTG_Trigger2Handler = callback;
            }
            break;
        case Trigger3:
            if(callback != NULL)
            {
                PTG_Trigger3Handler = callback;
            }
            break;
        case WatchDogTimer:
            if(callback != NULL)
            {
                PTG_WatchDogTimerHandler = callback;
            }
            break;
        default:
            break;
    }
}

void __attribute__ ((weak)) PTG_Trigger0Callback(void)
{
    // Add your custom callback code here
}

void __attribute__ ((weak)) PTG_Trigger1Callback(void)
{
    // Add your custom callback code here
}

void __attribute__ ((weak)) PTG_Trigger2Callback(void)
{
    // Add your custom callback code here
}

void __attribute__ ((weak)) PTG_Trigger3Callback(void)
{
    // Add your custom callback code here
}

void __attribute__ ((weak)) PTG_WatchDogTimerCallback(void)
{
    // Add your custom callback code here
}


void PTG_Tasks (enum PTG_EVENTS event)
{
    switch(event)
    {
        case Trigger0:
            if(IFS4bits.PTG0IF != 0U)
            {
                if(NULL !=  PTG_Trigger0Handler)
                {
                    // PTG Trigger0 callback function 
                    PTG_Trigger0Handler();
                }
                
                // clear the PTG Trigger0 interrupt flag
                IFS4bits.PTG0IF = 0;
            }
            break;
        case Trigger1:
            if(IFS4bits.PTG1IF != 0U)
            {
                if(NULL !=  PTG_Trigger1Handler)
                {
                    // PTG Trigger1 callback function 
                    PTG_Trigger1Handler();
                }
                
                // clear the PTG Trigger1 interrupt flag
                IFS4bits.PTG1IF = 0;
            }
            break;
        case Trigger2:
            if(IFS4bits.PTG2IF != 0U)
            {
                if(NULL !=  PTG_Trigger2Handler)
                {
                    // PTG Trigger2 callback function 
                    PTG_Trigger2Handler();
                }
                
                // clear the PTG Trigger2 interrupt flag
                IFS4bits.PTG2IF = 0;
            }
            break;
        case Trigger3:
            if(IFS4bits.PTG3IF != 0U)
            {
                if(NULL !=  PTG_Trigger3Handler)
                {
                    // PTG Trigger3 callback function 
                    PTG_Trigger3Handler();
                }
                
                // clear the PTG Trigger3 interrupt flag
                IFS4bits.PTG3IF = 0;
            }
            break;
        case WatchDogTimer:
            if(IFS4bits.PTGWDTIF != 0U)
            {
                if(NULL !=  PTG_WatchDogTimerHandler)
                {
                    // PTG WatchDogTimer callback function 
                    PTG_WatchDogTimerHandler();
                }
                
                // clear the PTG WatchDogTimer interrupt flag
                IFS4bits.PTGWDTIF = 0;
            }
            break;
        default:
            break;
    }
}
