/**
 * CONFIGURATION_BITS Generated Driver Source File 
 * 
 * @file      configuration_bits.c
 *            
 * @defgroup  config_bits_driver Config Bits Driver
 *            
 * @brief     Device Configuration Bits using dsPIC MCUs
 *
 * @version   PLIB Version 1.1.0
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

// Configuration bits: selected in the GUI

// FCP
#pragma config FCP_CP = OFF    //Memory protection enable bit->Memory protection is disabled
#pragma config FCP_CRC = OFF    //CRC enable bit->CRC is disabled
#pragma config FCP_WPUCA = OFF    //User configuration areas write protection enable bits->Protection is disabled

// FICD
#pragma config FICD_JTAGEN = OFF    //JTAG enable bit->JTAG is disabled

// FDEVOPT
#pragma config FDEVOPT_ALTI2C1 = OFF    //Alternate I2C1 pins selection bit->Primary I2C1 pins are used
#pragma config FDEVOPT_ALTI2C2 = OFF    //Alternate I2C2 pins selection bit->Primary I2C2 pins are used
#pragma config FDEVOPT_BISTDIS = OFF    //Hardware RAM test disable bit->RAM test after reset is enabled
#pragma config FDEVOPT_SPI2PIN = OFF    //SPI2 peripheral pin selection disable bit->SPI2 pins are selected by peripheral pin selection feature

// FWDT
#pragma config FWDT_WINDIS = ON    //Watchdog Timer Window Disable bit->Watchdog Timer operates in Non-Window mode
#pragma config FWDT_SWDTMPS = PS2147483648    //Sleep Mode Watchdog Timer Post Scaler select bits->1:2147483648
#pragma config FWDT_RCLKSEL = BFRC256    //Watchdog Timer Clock select bits->WDT Run Mode uses BFRC:256
#pragma config FWDT_RWDTPS = PS2147483648    //Run Mode Watchdog Timer Post Scaler select bits->1:2147483648
#pragma config FWDT_WDTWIN = WIN25    //Watchdog Timer Window Size Select bits->WDT Window is 25% of WDT period
#pragma config FWDT_WDTEN = SW    //Watchdog Timer Enable bit->WDT is controlled by software, use WDTCON.ON bit
#pragma config FWDT_WDTRSTEN = ON    //Watchdog Timer Reset Enable bit->WDT event generates a reset

// FPR0CTRL
#pragma config FPR0CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR0CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR0CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR0CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR0CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR0CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR0ST
#pragma config FPR0ST_START = 0x7ff    //Region start address bits

// FPR0END
#pragma config FPR0END_END = 0x7ff    //Region end address bits

// FPR1CTRL
#pragma config FPR1CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR1CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR1CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR1CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR1CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR1CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR1ST
#pragma config FPR1ST_START = 0x7ff    //Region start address bits

// FPR1END
#pragma config FPR1END_END = 0x7ff    //Region end address bits

// FPR2CTRL
#pragma config FPR2CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR2CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR2CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR2CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR2CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR2CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR2ST
#pragma config FPR2ST_START = 0x7ff    //Region start address bits

// FPR2END
#pragma config FPR2END_END = 0x7ff    //Region end address bits

// FPR3CTRL
#pragma config FPR3CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR3CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR3CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR3CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR3CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR3CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR3ST
#pragma config FPR3ST_START = 0x7ff    //Region start address bits

// FPR3END
#pragma config FPR3END_END = 0x7ff    //Region end address bits

// FPR4CTRL
#pragma config FPR4CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR4CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR4CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR4CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR4CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR4CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR4ST
#pragma config FPR4ST_START = 0x7ff    //Region start address bits

// FPR4END
#pragma config FPR4END_END = 0x7ff    //Region end address bits

// FPR5CTRL
#pragma config FPR5CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR5CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR5CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR5CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR5CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR5CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR5ST
#pragma config FPR5ST_START = 0x7ff    //Region start address bits

// FPR5END
#pragma config FPR5END_END = 0x7ff    //Region end address bits

// FPR6CTRL
#pragma config FPR6CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR6CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR6CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR6CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR6CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR6CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR6ST
#pragma config FPR6ST_START = 0x7ff    //Region start address bits

// FPR6END
#pragma config FPR6END_END = 0x7ff    //Region end address bits

// FPR7CTRL
#pragma config FPR7CTRL_RDIS = ON    //Region protection disable bit->Protection is disabled
#pragma config FPR7CTRL_EX = ON    //Execute permission bit->Code execution is enabled
#pragma config FPR7CTRL_RD = ON    //Read permission bit->Read operation is enabled
#pragma config FPR7CTRL_WR = ON    //Write permission bit->Write and erase operation is enabled
#pragma config FPR7CTRL_CRC = ON    //CRC enable bit->NVM controller CRC calculation is enabled
#pragma config FPR7CTRL_RTYPE = FIRMWARE    //Region type selection bits->Firmware configurable region

// FPR7ST
#pragma config FPR7ST_START = 0x7ff    //Region start address bits

// FPR7END
#pragma config FPR7END_END = 0x7ff    //Region end address bits

// FIRT
#pragma config FIRT_IRT = OFF    //Immutable Root of Trust enable bit->Immutable root of trust (IRT) regions are disabled

// FSECDBG
#pragma config FSECDBG_SECDBG = OFF    //Secure debug enable bit->Secure debug is disabled

// FPED
#pragma config FPED_ICSPPED = OFF    //ICSP Program and Erase disable bit->ICSP can program and erase

// FEPUCB
#pragma config FEPUCB_EPUCB = 0xffffffff    //UCB erase protection bits

// FWPUCB
#pragma config FWPUCB_WPUCB = 0xffffffff    //UCB write protection bits

#pragma message("This generated MCC Melody content with device json version 5.12.5 is most compatible with dsPIC33AK-MC_DFP v1.2.125.")

/**
 End of File
*/