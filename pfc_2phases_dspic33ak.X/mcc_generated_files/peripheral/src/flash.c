/**
  FLASH Generated Driver Source File
 
  @Company
    Microchip Technology Inc.
 
  @File Name
    flash.c
 
  @Summary
    This is the generated driver source file for FLASH driver using CCL.
 
  @Description
    This file provides API definitions for FLASH driver.
    Generation Information :
        Product Revision  :  CCL 
        Driver Revision   :  0.1.0
        Device            :  dsPIC33AK128MC106
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "../flash.h"

/**
  Section: FLASH Module APIs
*/

// Set the FLASH module to the options selected in the user interface.
void FLASH_Initialize(void) {
    // WRRE disabled; WR Program or erase operation is complete and inactive; WREN Inhibit Flash program/erase operations; WRERR The program or erase operation completed normally; NVMPIDL disabled; SFTSWP Awaiting panel swap using BOOTSWP instruction; LOCK disabled; DRBV disabled; NVMOP Memory word program operation; 
    NVMCON = 0x1;
    // NVMADR 0x0; 
    NVMADR = 0x0;
    // DATA0 0x0; 
    NVMDATA0 = 0x0;
    // DATA1 0x0; 
    NVMDATA1 = 0x0;
    // DATA2 0x0; 
    NVMDATA2 = 0x0;
    // DATA3 0x0; 
    NVMDATA3 = 0x0;
    // SRCADR 0x0; 
    NVMSRCADR = 0x0;
    // ECCLOCK disabled; SECIE disabled; FLTINJ disabled; 
    NVMECCCON = 0x0;
    // ESEL disabled; SECO disabled; SEC disabled; DEDO disabled; DED disabled; 
    NVMECCSTAT = 0x0;
    // FLT2LPTR 0x0; FLT1LPTR 0x0; 
    NVMECCFPTR = 0x0;
    // ECCFADR 0x0; 
    NVMECCFADDR = 0x0;
    // ECCEADR 0x0; 
    NVMECCEADDR = 0x0;
    // ECCEDATA0 0x0; 
    NVMECCEDATA0 = 0x0;
    // ECCEDATA1 0x0; 
    NVMECCEDATA1 = 0x0;
    // ECCEDATA2 0x0; 
    NVMECCEDATA2 = 0x0;
    // ECCEDATA3 0x0; 
    NVMECCEDATA3 = 0x0;
    // 
    NVMECCVAL = 0x0;
    // 
    NVMECCSYND = 0x0;
    // DELAY 0x0; ON disabled; START disabled; CRCIDL disabled; OM disabled; 
    NVMCRCCON = 0x0;
    // CRCSTART 0x0; 
    NVMCRCST = 0x0;
    // CRCEND 0x0; 
    NVMCRCEND = 0x0;
    // CRCSEED 0x0; 
    NVMCRCSEED = 0x0;
    // 
    NVMCRCDATA = 0x0;

}

