/**
 * ADC1 Generated Driver Source File
 * 
 * @file      adc1.c
 *            
 * @ingroup   adcdriver
 *            
 * @brief     This is the generated driver source file for ADC1 driver        
 *
 * @skipline @version   PLIB Version 1.1.0
 *           
 * @skipline  Device : dsPIC33AK128MC106
*/

/*disclaimer*/

// Section: Included Files
#include <stddef.h>
#include "../adc1.h"

void ADC1_Initialize (void)
{
    //CALCNT Wait for 2 activity free ADC clock cycles; BUFEN disabled; TSTEN disabled; SIDL disabled; ON enabled; STNDBY disabled; VREFMOD enabled; RPTCNT 1 ADC clock cycles between triggers; CALRATE Every second; ACALEN disabled; CALREQ Calibration cycle is not requested; 
    AD1CON = 0x28000UL;
    //DATAOVR 0x0; 
    AD1DATAOVR = 0x0UL;
    //CH0RDY disabled; CH1RDY disabled; CH2RDY disabled; CH3RDY disabled; CH4RDY disabled; CH5RDY disabled; CH6RDY disabled; CH7RDY disabled; CH8RDY disabled; CH9RDY disabled; CH10RDY disabled; CH11RDY disabled; CH12RDY disabled; CH13RDY disabled; CH14RDY disabled; CH15RDY disabled; CH16RDY disabled; CH17RDY disabled; CH18RDY disabled; CH19RDY disabled; 
    AD1STAT = 0x0UL;
    //CH0CMP disabled; CH1CMP disabled; CH2CMP disabled; CH3CMP disabled; CH4CMP disabled; CH5CMP disabled; CH6CMP disabled; CH7CMP disabled; CH8CMP disabled; CH9CMP disabled; CH10CMP disabled; CH11CMP disabled; CH12CMP disabled; CH13CMP disabled; CH14CMP disabled; CH15CMP disabled; CH16CMP disabled; CH17CMP disabled; CH18CMP disabled; CH19CMP disabled; 
    AD1CMPSTAT = 0x0UL;
    //CH0TRG disabled; CH1TRG disabled; CH2TRG disabled; CH3TRG disabled; CH4TRG disabled; CH5TRG disabled; CH6TRG disabled; CH7TRG disabled; CH8TRG disabled; CH9TRG disabled; CH10TRG disabled; CH11TRG disabled; CH12TRG disabled; CH13TRG disabled; CH14TRG disabled; CH15TRG disabled; CH16TRG disabled; CH17TRG disabled; CH18TRG disabled; CH19TRG disabled; 
    AD1SWTRG = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH0CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH1CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH2CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH3CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH4CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH5CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH6CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH7CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH8CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH9CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH10CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH11CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH12CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH13CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH14CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH15CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH16CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH17CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH18CON = 0x0UL;
    //TRG1SRC disabled; SAMC 0.5 TAD; NINSEL disabled; LEFT Integer; PINSEL AD1AN0; DIFF disabled; CMPMOD NONE; TRG2SRC disabled; EIEN disabled; TRG1POL disabled; ACCRO disabled; ACCBRST disabled; ACCNUM 4 samples, 13 bits result; MODE Single sample initiated by TRG1SRC[4:0] trigger; 
    AD1CH19CON = 0x0UL;
    //CNT 0x0; 
    AD1CH0CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH1CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH2CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH3CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH4CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH5CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH6CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH7CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH8CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH9CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH10CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH11CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH12CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH13CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH14CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH15CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH16CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH17CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH18CNT = 0x0UL;
    //CNT 0x0; 
    AD1CH19CNT = 0x0UL;
    //CMPLO 0x0; 
    AD1CH0CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH1CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH2CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH3CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH4CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH5CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH6CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH7CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH8CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH9CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH10CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH11CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH12CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH13CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH14CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH15CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH16CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH17CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH18CMPLO = 0x0UL;
    //CMPLO 0x0; 
    AD1CH19CMPLO = 0x0UL;
    //CMPHI 0x0; 
    AD1CH0CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH1CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH2CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH3CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH4CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH5CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH6CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH7CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH8CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH9CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH10CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH11CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH12CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH13CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH14CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH15CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH16CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH17CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH18CMPHI = 0x0UL;
    //CMPHI 0x0; 
    AD1CH19CMPHI = 0x0UL;
    
}

void ADC1_Deinitialize (void)
{
    
    AD1CONbits.ON = 0U;
    
    
    AD1CON = 0x4A0000;
    AD1DATAOVR = 0x0;
    AD1STAT = 0x0;
    AD1CMPSTAT = 0x0;
    AD1SWTRG = 0x0;
    AD1CH0CON = 0x0;
    AD1CH1CON = 0x0;
    AD1CH2CON = 0x0;
    AD1CH3CON = 0x0;
    AD1CH4CON = 0x0;
    AD1CH5CON = 0x0;
    AD1CH6CON = 0x0;
    AD1CH7CON = 0x0;
    AD1CH8CON = 0x0;
    AD1CH9CON = 0x0;
    AD1CH10CON = 0x0;
    AD1CH11CON = 0x0;
    AD1CH12CON = 0x0;
    AD1CH13CON = 0x0;
    AD1CH14CON = 0x0;
    AD1CH15CON = 0x0;
    AD1CH16CON = 0x0;
    AD1CH17CON = 0x0;
    AD1CH18CON = 0x0;
    AD1CH19CON = 0x0;
    AD1CH0CNT = 0x0;
    AD1CH1CNT = 0x0;
    AD1CH2CNT = 0x0;
    AD1CH3CNT = 0x0;
    AD1CH4CNT = 0x0;
    AD1CH5CNT = 0x0;
    AD1CH6CNT = 0x0;
    AD1CH7CNT = 0x0;
    AD1CH8CNT = 0x0;
    AD1CH9CNT = 0x0;
    AD1CH10CNT = 0x0;
    AD1CH11CNT = 0x0;
    AD1CH12CNT = 0x0;
    AD1CH13CNT = 0x0;
    AD1CH14CNT = 0x0;
    AD1CH15CNT = 0x0;
    AD1CH16CNT = 0x0;
    AD1CH17CNT = 0x0;
    AD1CH18CNT = 0x0;
    AD1CH19CNT = 0x0;
    AD1CH0CMPLO = 0x0;
    AD1CH1CMPLO = 0x0;
    AD1CH2CMPLO = 0x0;
    AD1CH3CMPLO = 0x0;
    AD1CH4CMPLO = 0x0;
    AD1CH5CMPLO = 0x0;
    AD1CH6CMPLO = 0x0;
    AD1CH7CMPLO = 0x0;
    AD1CH8CMPLO = 0x0;
    AD1CH9CMPLO = 0x0;
    AD1CH10CMPLO = 0x0;
    AD1CH11CMPLO = 0x0;
    AD1CH12CMPLO = 0x0;
    AD1CH13CMPLO = 0x0;
    AD1CH14CMPLO = 0x0;
    AD1CH15CMPLO = 0x0;
    AD1CH16CMPLO = 0x0;
    AD1CH17CMPLO = 0x0;
    AD1CH18CMPLO = 0x0;
    AD1CH19CMPLO = 0x0;
    AD1CH0CMPHI = 0x0;
    AD1CH1CMPHI = 0x0;
    AD1CH2CMPHI = 0x0;
    AD1CH3CMPHI = 0x0;
    AD1CH4CMPHI = 0x0;
    AD1CH5CMPHI = 0x0;
    AD1CH6CMPHI = 0x0;
    AD1CH7CMPHI = 0x0;
    AD1CH8CMPHI = 0x0;
    AD1CH9CMPHI = 0x0;
    AD1CH10CMPHI = 0x0;
    AD1CH11CMPHI = 0x0;
    AD1CH12CMPHI = 0x0;
    AD1CH13CMPHI = 0x0;
    AD1CH14CMPHI = 0x0;
    AD1CH15CMPHI = 0x0;
    AD1CH16CMPHI = 0x0;
    AD1CH17CMPHI = 0x0;
    AD1CH18CMPHI = 0x0;
    AD1CH19CMPHI = 0x0;
}
