/**
 * CLC1 Generated Driver Source File
 * 
 * @file      clc1.c
 *            
 * @ingroup   clcdriver
 *            
 * @brief     This is the generated driver source file for CLC1 driver
 *
 * @skipline @version   PLIB Version 1.1.0
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
#include <stddef.h>
#include "../clc1.h"

// Section: File specific functions

static void (*CLC1_PositiveEdgeHandler)(void) = NULL;
static void (*CLC1_NegativeEdgeHandler)(void) = NULL;

// Section: File specific data type definitions

//Defines an object for CLC_INTERFACE

const struct CLC_INTERFACE CLC1 = {
    .Initialize         = &CLC1_Initialize,
    .Deinitialize       = &CLC1_Deinitialize,
    .Enable             = &CLC1_Enable,
    .Disable            = &CLC1_Disable,
    .OutputStatusGet    =&CLC1_OutputStatusGet,
    .PositiveEdgeCallbackRegister = &CLC1_PositiveEdgeCallbackRegister,
    .NegativeEdgeCallbackRegister = &CLC1_NegativeEdgeCallbackRegister,
    .Tasks              = &CLC1_Tasks,
};
// Section: Driver Interface Function Definitions

void CLC1_Initialize(void)
{
    // Set the CLC1 to the options selected in the User Interface

    // MODE AND-OR; LCPOL non-inverted; LCOUT Low; LCOE enabled; INTN disabled; INTP disabled; ON disabled; G1POL non-inverted; G2POL non-inverted; G3POL non-inverted; G4POL non-inverted; 
    CLC1CON = 0x80UL;
    // DS1 CLCINA I/O pin; DS2 CLCINB I/O pin; DS3 CLCINC I/O pin; DS4 CLCIND I/O pin; 
    CLC1SEL = 0x5000UL;
    // G1D1N disabled; G1D1T disabled; G1D2N disabled; G1D2T disabled; G1D3N disabled; G1D3T disabled; G1D4N disabled; G1D4T disabled; G2D1N disabled; G2D1T disabled; G2D2N disabled; G2D2T disabled; G2D3N disabled; G2D3T disabled; G2D4N disabled; G2D4T disabled; G3D1N disabled; G3D1T disabled; G3D2N disabled; G3D2T disabled; G3D3N disabled; G3D3T disabled; G3D4N disabled; G3D4T disabled; G4D1N disabled; G4D1T disabled; G4D2N disabled; G4D2T disabled; G4D3N disabled; G4D3T disabled; G4D4N disabled; G4D4T disabled; 
    CLC1GLS = 0x0UL;
    
    CLC1_PositiveEdgeCallbackRegister(&CLC1_PositiveEdgeCallback);
    CLC1_NegativeEdgeCallbackRegister(&CLC1_NegativeEdgeCallback);
    
    CLC1_Enable();
    
}

void CLC1_Deinitialize(void)
{
    CLC1_Disable();
    
    CLC1CON = 0x0UL;
    CLC1SEL = 0x0UL;
    CLC1GLS = 0x0UL;
}

void CLC1_PositiveEdgeCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        CLC1_PositiveEdgeHandler = handler;
    }
}

void __attribute__ ((weak)) CLC1_PositiveEdgeCallback ( void )
{ 

} 

void CLC1_NegativeEdgeCallbackRegister(void (*handler)(void))
{
    if(NULL != handler)
    {
        CLC1_NegativeEdgeHandler = handler;
    }
}

void __attribute__ ((weak)) CLC1_NegativeEdgeCallback ( void )
{ 

} 



void CLC1_Tasks( void )
{
    if(IFS7bits.CLC1PIF == 1)
    {
        if(NULL != CLC1_PositiveEdgeHandler)
        {
            (*CLC1_PositiveEdgeHandler)();
        }
        
        // Clear the CLC1 Positive Edge Interrupt flag
        IFS7bits.CLC1PIF = 0;
    }
    if(IFS7bits.CLC1NIF == 1)
    {
        if(NULL != CLC1_NegativeEdgeHandler)
        {
            (*CLC1_NegativeEdgeHandler)();
        }
        
        // Clear the CLC1 Negative Edge Interrupt flag
        IFS7bits.CLC1NIF = 0;
    }
}

bool CLC1_OutputStatusGet(void)
{
    return(CLC1CONbits.LCOUT);

}
/**
 End of File
*/

