/**
 * ADC2 Generated Driver Source File
 * 
 * @file      adc2.c
 *            
 * @ingroup   adcdriver
 *            
 * @brief     This is the generated driver source file for ADC2 driver        
 *
 * @skipline @version   PLIB Version 1.1.0
 *           
 * @skipline  Device : dsPIC33AK128MC106
*/

/*disclaimer*/

// Section: Included Files
#include <stddef.h>
#include "../adc2.h"

void ADC2_Initialize (void)
{
    //CALCNT Wait for 2 activity free ADC clock cycles; BUFEN disabled; TSTEN disabled; SIDL disabled; ON enabled; STNDBY disabled; VREFMOD enabled; RPTCNT 1 ADC clock cycles between triggers; CALRATE Every second; ACALEN disabled; CALREQ Calibration cycle is not requested; 
    AD2CON = 0x28000UL;
    //DATAOVR 0x0; 
    AD2DATAOVR = 0x0UL;
    //CH0RDY disabled; CH1RDY disabled; CH2RDY disabled; CH3RDY disabled; CH4RDY disabled; CH5RDY disabled; CH6RDY disabled; CH7RDY disabled; CH8RDY disabled; CH9RDY disabled; CH10RDY disabled; CH11RDY disabled; CH12RDY disabled; CH13RDY disabled; CH14RDY disabled; CH15RDY disabled; CH16RDY disabled; CH17RDY disabled; CH18RDY disabled; CH19RDY disabled; 
    AD2STAT = 0x0UL;
    //CH0CMP disabled; CH1CMP disabled; CH2CMP disabled; CH3CMP disabled; CH4CMP disabled; CH5CMP disabled; CH6CMP disabled; CH7CMP disabled; CH8CMP disabled; CH9CMP disabled; CH10CMP disabled; CH11CMP disabled; CH12CMP disabled; CH13CMP disabled; CH14CMP disabled; CH15CMP disabled; CH16CMP disabled; CH17CMP disabled; CH18CMP disabled; CH19CMP disabled; 
    AD2CMPSTAT = 0x0UL;
    //CH0TRG disabled; CH1TRG disabled; CH2TRG disabled; CH3TRG disabled; CH4TRG disabled; CH5TRG disabled; CH6TRG disabled; CH7TRG disabled; CH8TRG disabled; CH9TRG disabled; CH10TRG disabled; CH11TRG disabled; CH12TRG disabled; CH13TRG disabled; CH14TRG disabled; CH15TRG disabled; CH16TRG disabled; CH17TRG disabled; CH18TRG disabled; CH19TRG disabled; 
    AD2SWTRG = 0x0UL;
    //TRG1SRC PWM1 Trigger1; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH0CON = 0x4UL;
    //TRG1SRC PWM1 Trigger2; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN1; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH1CON = 0x805UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH2CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH3CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH4CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH5CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH6CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH7CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH8CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH9CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH10CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH11CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH12CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH13CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH14CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH15CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH16CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH17CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH18CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD2AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD2CH19CON = 0x0UL;
    //CNT 0x0; 
    AD2CH0CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH1CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH2CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH3CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH4CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH5CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH6CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH7CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH8CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH9CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH10CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH11CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH12CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH13CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH14CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH15CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH16CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH17CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH18CNT = 0x0UL;
    //CNT 0x0; 
    AD2CH19CNT = 0x0UL;
    //CMPLO 0x0; 
    AD2CH0CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH1CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH2CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH3CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH4CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH5CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH6CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH7CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH8CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH9CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH10CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH11CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH12CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH13CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH14CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH15CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH16CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH17CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH18CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD2CH19CMPLO = 0x0UL;
    //CMPHI 0x0; 
    AD2CH0CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH1CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH2CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH3CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH4CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH5CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH6CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH7CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH8CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH9CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH10CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH11CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH12CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH13CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH14CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH15CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH16CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH17CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH18CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD2CH19CMPHI = 0x0UL;
    
}

void ADC2_Deinitialize (void)
{
    
    AD2CONbits.ON = 0U;
    
    
    AD2CON = 0x4A0000;
    AD2DATAOVR = 0x0;
    AD2STAT = 0x0;
    AD2CMPSTAT = 0x0;
    AD2SWTRG = 0x0;
    AD2CH0CON = 0x0;
    AD2CH1CON = 0x0;
    AD2CH2CON = 0x0;
    AD2CH3CON = 0x0;
    AD2CH4CON = 0x0;
    AD2CH5CON = 0x0;
    AD2CH6CON = 0x0;
    AD2CH7CON = 0x0;
    AD2CH8CON = 0x0;
    AD2CH9CON = 0x0;
    AD2CH10CON = 0x0;
    AD2CH11CON = 0x0;
    AD2CH12CON = 0x0;
    AD2CH13CON = 0x0;
    AD2CH14CON = 0x0;
    AD2CH15CON = 0x0;
    AD2CH16CON = 0x0;
    AD2CH17CON = 0x0;
    AD2CH18CON = 0x0;
    AD2CH19CON = 0x0;
    AD2CH0CNT = 0x0;
    AD2CH1CNT = 0x0;
    AD2CH2CNT = 0x0;
    AD2CH3CNT = 0x0;
    AD2CH4CNT = 0x0;
    AD2CH5CNT = 0x0;
    AD2CH6CNT = 0x0;
    AD2CH7CNT = 0x0;
    AD2CH8CNT = 0x0;
    AD2CH9CNT = 0x0;
    AD2CH10CNT = 0x0;
    AD2CH11CNT = 0x0;
    AD2CH12CNT = 0x0;
    AD2CH13CNT = 0x0;
    AD2CH14CNT = 0x0;
    AD2CH15CNT = 0x0;
    AD2CH16CNT = 0x0;
    AD2CH17CNT = 0x0;
    AD2CH18CNT = 0x0;
    AD2CH19CNT = 0x0;
    AD2CH0CMPLO = 0x0;
    AD2CH1CMPLO = 0x0;
    AD2CH2CMPLO = 0x0;
    AD2CH3CMPLO = 0x0;
    AD2CH4CMPLO = 0x0;
    AD2CH5CMPLO = 0x0;
    AD2CH6CMPLO = 0x0;
    AD2CH7CMPLO = 0x0;
    AD2CH8CMPLO = 0x0;
    AD2CH9CMPLO = 0x0;
    AD2CH10CMPLO = 0x0;
    AD2CH11CMPLO = 0x0;
    AD2CH12CMPLO = 0x0;
    AD2CH13CMPLO = 0x0;
    AD2CH14CMPLO = 0x0;
    AD2CH15CMPLO = 0x0;
    AD2CH16CMPLO = 0x0;
    AD2CH17CMPLO = 0x0;
    AD2CH18CMPLO = 0x0;
    AD2CH19CMPLO = 0x0;
    AD2CH0CMPHI = 0x0;
    AD2CH1CMPHI = 0x0;
    AD2CH2CMPHI = 0x0;
    AD2CH3CMPHI = 0x0;
    AD2CH4CMPHI = 0x0;
    AD2CH5CMPHI = 0x0;
    AD2CH6CMPHI = 0x0;
    AD2CH7CMPHI = 0x0;
    AD2CH8CMPHI = 0x0;
    AD2CH9CMPHI = 0x0;
    AD2CH10CMPHI = 0x0;
    AD2CH11CMPHI = 0x0;
    AD2CH12CMPHI = 0x0;
    AD2CH13CMPHI = 0x0;
    AD2CH14CMPHI = 0x0;
    AD2CH15CMPHI = 0x0;
    AD2CH16CMPHI = 0x0;
    AD2CH17CMPHI = 0x0;
    AD2CH18CMPHI = 0x0;
    AD2CH19CMPHI = 0x0;
}
