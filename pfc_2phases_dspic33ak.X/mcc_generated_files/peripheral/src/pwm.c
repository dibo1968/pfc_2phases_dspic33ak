/**
  PWM Generated Driver Source File
 
  @Company
    Microchip Technology Inc.
 
  @File Name
    pwm.c
 
  @Summary
    This is the generated driver source file for PWM driver using CCL.
 
  @Description
    This file provides API definitions for PWM driver.
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
#include "../pwm.h"

/**
  Section: PWM Module APIs
*/

// Set the PWM module to the options selected in the user interface.
void PWM_Initialize(void) {
    // LOCK disabled; DIVSEL 1:2; MCLKSEL Standard Speed Peripheral Clock; 
    PCLKCON = 0x0;
    // FSCL disabled; 
    FSCL = 0x0;
    // FSMINPER disabled; 
    FSMINPER = 0x0;
    // MPHASE 0x0; 
    MPHASE = 0x0;
    // MDC 0x0; 
    MDC = 0x0;
    // MPER 0x0; 
    MPER = 0x0;
    // LFSR disabled; 
    LFSR = 0x0;
    // CTB8EN disabled; CTB7EN disabled; CTB6EN disabled; CTB5EN disabled; CTB4EN disabled; CTB3EN disabled; CTB2EN disabled; CTB1EN disabled; CTA8EN disabled; CTA7EN disabled; CTA6EN disabled; CTA5EN disabled; CTA4EN disabled; CTA3EN disabled; CTA2EN disabled; CTA1EN disabled; 
    CMBTRIG = 0x0;
    // PWMS1A PWM1H; PWMS2A PWM1H; S1APOL Positive Logic; S2APOL Positive Logic; PWMLFA OR; PWMLFAD PWM Generator 1; 
    LOGCONA = 0x0;
    // PWMS1B PWM1H; PWMS2B PWM1H; S1BPOL disabled; S2BPOL disabled; PWMLFB OR; PWMLFBD disabled; 
    LOGCONB = 0x0;
    // PWMS1C PWM1H; PWMS2C PWM1H; S1CPOL disabled; S2CPOL disabled; PWMLFC OR; PWMLFCD disabled; 
    LOGCONC = 0x0;
    // PWMS1D PWM1H; PWMS2D PWM1H; S1DPOL disabled; S2DPOL disabled; PWMLFD OR; PWMLFDD disabled; 
    LOGCOND = 0x0;
    // PWMS1E PWM1H; PWMS2E PWM1H; S1EPOL disabled; S2EPOL disabled; PWMLFE OR; PWMLFED disabled; 
    LOGCONE = 0x0;
    // PWMS1F PWM1H; PWMS2F PWM1H; S1FPOL disabled; S2FPOL disabled; PWMLFF OR; PWMLFFD disabled; 
    LOGCONF = 0x0;
    // MDCSEL disabled; MPERSEL disabled; MPHSEL disabled; MSTEN disabled; UPDMOD SOC; TRGMOD PWM Generator operates in Single Trigger mode; SOCS Self-trigger; ON disabled; TRGCNT 1; CLKSEL no clock; MODSEL Independent Edge; 
    PG1CON = 0x0;
    // MDCSEL disabled; MPERSEL disabled; MPHSEL disabled; MSTEN disabled; UPDMOD SOC; TRGMOD PWM Generator operates in Single Trigger mode; SOCS Self-trigger; ON disabled; TRGCNT 1; CLKSEL no clock; MODSEL Independent Edge; 
    PG2CON = 0x0;
    // MDCSEL disabled; MPERSEL disabled; MPHSEL disabled; MSTEN disabled; UPDMOD SOC; TRGMOD PWM Generator operates in Single Trigger mode; SOCS Self-trigger; ON disabled; TRGCNT 1; CLKSEL no clock; MODSEL Independent Edge; 
    PG3CON = 0x0;
    // MDCSEL disabled; MPERSEL disabled; MPHSEL disabled; MSTEN disabled; UPDMOD SOC; TRGMOD PWM Generator operates in Single Trigger mode; SOCS Self-trigger; ON disabled; TRGCNT 1; CLKSEL no clock; MODSEL Independent Edge; 
    PG4CON = 0x0;
    // EVTAOEN disabled; EVTAPOL disabled; EVTASTRD disabled; EVTASYNC disabled; EVTASEL PGTRGSEL bits; EVTAPGS PG1; 
    PWMEVTA = 0x0;
    // EVTBOEN disabled; EVTBPOL disabled; EVTBSTRD disabled; EVTBSYNC disabled; EVTBSEL PGTRGSEL bits; EVTBPGS PG1; 
    PWMEVTB = 0x0;
    // EVTCOEN disabled; EVTCPOL disabled; EVTCSTRD disabled; EVTCSYNC disabled; EVTCSEL PGTRGSEL bits; EVTCPGS PG1; 
    PWMEVTC = 0x0;
    // EVTDOEN disabled; EVTDPOL disabled; EVTDSTRD disabled; EVTDSYNC disabled; EVTDSEL PGTRGSEL bits; EVTDPGS PG1; 
    PWMEVTD = 0x0;
    // EVTEOEN disabled; EVTEPOL disabled; EVTESTRD disabled; EVTESYNC disabled; EVTESEL PGTRGSEL bits; EVTEPGS PG1; 
    PWMEVTE = 0x0;
    // EVTFOEN disabled; EVTFPOL disabled; EVTFSTRD disabled; EVTFSYNC disabled; EVTFSEL PGTRGSEL bits; EVTFPGS PG1; 
    PWMEVTF = 0x0;
    // SEVT disabled; FLTEVT disabled; CLEVT disabled; FFEVT disabled; TRSET disabled; TRCLR disabled; CAP disabled; UPDATE disabled; UPDREQ disabled; 
    PG1STAT = 0x0;
    // SEVT disabled; FLTEVT disabled; CLEVT disabled; FFEVT disabled; TRSET disabled; TRCLR disabled; CAP disabled; UPDATE disabled; UPDREQ disabled; 
    PG2STAT = 0x0;
    // SEVT disabled; FLTEVT disabled; CLEVT disabled; FFEVT disabled; TRSET disabled; TRCLR disabled; CAP disabled; UPDATE disabled; UPDREQ disabled; 
    PG3STAT = 0x0;
    // SEVT disabled; FLTEVT disabled; CLEVT disabled; FFEVT disabled; TRSET disabled; TRCLR disabled; CAP disabled; UPDATE disabled; UPDREQ disabled; 
    PG4STAT = 0x0;
    // CAPSRC Software; PPSEN disabled; DTCMPSEL PCI Sync Logic; PMOD Complementary; PENH disabled; PENL disabled; POLH Active-high; POLL Active-high; CLMOD disabled; SWAP disabled; OVRENH disabled; OVRENL disabled; OVRDAT 0x0; OSYNC User output overrides are synchronized to the local PWM time base; FLTDAT 0x0; CLDAT 0x0; FFDAT 0x0; DBDAT 0x0; 
    PG1IOCON = 0x0;
    // CAPSRC Software; PPSEN disabled; DTCMPSEL PCI Sync Logic; PMOD Complementary; PENH disabled; PENL disabled; POLH Active-high; POLL Active-high; CLMOD disabled; SWAP disabled; OVRENH disabled; OVRENL disabled; OVRDAT 0x0; OSYNC User output overrides are synchronized to the local PWM time base; FLTDAT 0x0; CLDAT 0x0; FFDAT 0x0; DBDAT 0x0; 
    PG2IOCON = 0x0;
    // CAPSRC Software; PPSEN disabled; DTCMPSEL PCI Sync Logic; PMOD Complementary; PENH disabled; PENL disabled; POLH Active-high; POLL Active-high; CLMOD disabled; SWAP disabled; OVRENH disabled; OVRENL disabled; OVRDAT 0x0; OSYNC User output overrides are synchronized to the local PWM time base; FLTDAT 0x0; CLDAT 0x0; FFDAT 0x0; DBDAT 0x0; 
    PG3IOCON = 0x0;
    // CAPSRC Software; PPSEN disabled; DTCMPSEL PCI Sync Logic; PMOD Complementary; PENH disabled; PENL disabled; POLH Active-high; POLL Active-high; CLMOD disabled; SWAP disabled; OVRENH disabled; OVRENL disabled; OVRDAT 0x0; OSYNC User output overrides are synchronized to the local PWM time base; FLTDAT 0x0; CLDAT 0x0; FFDAT 0x0; DBDAT 0x0; 
    PG4IOCON = 0x0;
    // FLTIEN disabled; CLIEN disabled; FFIEN disabled; SIEN disabled; IEVTSEL EOC; ADTR2EN3 disabled; ADTR2EN2 disabled; ADTR2EN1 disabled; ADTR1OFS None; ADTR1PS 1:1; ADTR1EN3 disabled; ADTR1EN2 disabled; ADTR1EN1 disabled; PWMPCI PWM1; UPDTRG Manual; PGTRGSEL EOC event; 
    PG1EVT = 0x0;
    // FLTIEN disabled; CLIEN disabled; FFIEN disabled; SIEN disabled; IEVTSEL EOC; ADTR2EN3 disabled; ADTR2EN2 disabled; ADTR2EN1 disabled; ADTR1OFS None; ADTR1PS 1:1; ADTR1EN3 disabled; ADTR1EN2 disabled; ADTR1EN1 disabled; PWMPCI PWM1; UPDTRG Manual; PGTRGSEL EOC event; 
    PG2EVT = 0x0;
    // FLTIEN disabled; CLIEN disabled; FFIEN disabled; SIEN disabled; IEVTSEL EOC; ADTR2EN3 disabled; ADTR2EN2 disabled; ADTR2EN1 disabled; ADTR1OFS None; ADTR1PS 1:1; ADTR1EN3 disabled; ADTR1EN2 disabled; ADTR1EN1 disabled; PWMPCI PWM1; UPDTRG Manual; PGTRGSEL EOC event; 
    PG3EVT = 0x0;
    // FLTIEN disabled; CLIEN disabled; FFIEN disabled; SIEN disabled; IEVTSEL EOC; ADTR2EN3 disabled; ADTR2EN2 disabled; ADTR2EN1 disabled; ADTR1OFS None; ADTR1PS 1:1; ADTR1EN3 disabled; ADTR1EN2 disabled; ADTR1EN1 disabled; PWMPCI PWM1; UPDTRG Manual; PGTRGSEL EOC event; 
    PG4EVT = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG1FPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG2FPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG3FPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG4FPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG1CLPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG2CLPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG3CLPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG4CLPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG1FFPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG2FFPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG3FFPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG4FFPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG1SPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG2SPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG3SPCI = 0x0;
    // BPEN disabled; BPSEL PWM Generator 1; TERMPS disabled; ACP Level-sensitive; SWPCI Drives '0'; SWPCIM PCI acceptance logic; LATMOD disabled; TQPS Not inverted; TQSS None; TSYNCDIS PWM EOC; TERM Manual Terminate; AQPS Not inverted; AQSS None; SWTERM disabled; PSYNC disabled; PPS Not inverted; PSS Tied to 0; 
    PG4SPCI = 0x0;
    // PHR disabled; PHF disabled; PLR disabled; PLF disabled; LEB disabled; 
    PG1LEB = 0x0;
    // PHR disabled; PHF disabled; PLR disabled; PLF disabled; LEB disabled; 
    PG2LEB = 0x0;
    // PHR disabled; PHF disabled; PLR disabled; PLF disabled; LEB disabled; 
    PG3LEB = 0x0;
    // PHR disabled; PHF disabled; PLR disabled; PLF disabled; LEB disabled; 
    PG4LEB = 0x0;
    // CAHALF disabled; TRIGB 0x0; 
    PG1TRIGB = 0x0;
    // CAHALF disabled; TRIGB 0x0; 
    PG2TRIGB = 0x0;
    // CAHALF disabled; TRIGB 0x0; 
    PG3TRIGB = 0x0;
    // CAHALF disabled; TRIGB 0x0; 
    PG4TRIGB = 0x0;
    // CAHALF disabled; TRIGC 0x0; 
    PG1TRIGC = 0x0;
    // CAHALF disabled; TRIGC 0x0; 
    PG2TRIGC = 0x0;
    // CAHALF disabled; TRIGC 0x0; 
    PG3TRIGC = 0x0;
    // CAHALF disabled; TRIGC 0x0; 
    PG4TRIGC = 0x0;
    // CAHALF disabled; TRIGA 0x0; 
    PG1TRIGA = 0x0;
    // CAHALF disabled; TRIGA 0x0; 
    PG2TRIGA = 0x0;
    // CAHALF disabled; TRIGA 0x0; 
    PG3TRIGA = 0x0;
    // CAHALF disabled; TRIGA 0x0; 
    PG4TRIGA = 0x0;
    // PHASE 0x0; 
    PG1PHASE = 0x0;
    // PHASE 0x0; 
    PG2PHASE = 0x0;
    // PHASE 0x0; 
    PG3PHASE = 0x0;
    // PHASE 0x0; 
    PG4PHASE = 0x0;
    // DC 0x0; 
    PG1DC = 0x0;
    // DC 0x0; 
    PG2DC = 0x0;
    // DC 0x0; 
    PG3DC = 0x0;
    // DC 0x0; 
    PG4DC = 0x0;
    // DCA 0x0; 
    PG1DCA = 0x0;
    // DCA 0x0; 
    PG2DCA = 0x0;
    // DCA 0x0; 
    PG3DCA = 0x0;
    // DCA 0x0; 
    PG4DCA = 0x0;
    // PER 0x0; 
    PG1PER = 0x0;
    // PER 0x0; 
    PG2PER = 0x0;
    // PER 0x0; 
    PG3PER = 0x0;
    // PER 0x0; 
    PG4PER = 0x0;
    // DTH 0x0; DTL 0x0; 
    PG1DT = 0x0;
    // DTH 0x0; DTL 0x0; 
    PG2DT = 0x0;
    // DTH 0x0; DTL 0x0; 
    PG3DT = 0x0;
    // DTH 0x0; DTL 0x0; 
    PG4DT = 0x0;
    // 
    PG1CAP = 0x0;
    // 
    PG2CAP = 0x0;
    // 
    PG3CAP = 0x0;
    // 
    PG4CAP = 0x0;

}

