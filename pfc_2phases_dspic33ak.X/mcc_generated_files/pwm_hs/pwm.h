/**
 * PWM Generated Driver Header File 
 * 
 * @file      pwm.h
 * 
 * @ingroup   pwmhsdriver
 * 
 * @brief     This is the generated driver header file for the PWM driver
 *
 * @skipline @version   PLIB Version 1.1.0
 *
 * @skipline  Device : 
*/

/*disclaimer*/

#ifndef PWM_H
#define PWM_H

// Section: Included Files

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include "pwm_hs_types.h"
#include "pwm_hs_interface.h"

// Section: Data Type Definitions


/**
 @ingroup  pwmhsdriver
 @brief    Structure object of type PWM_HS_INTERFACE with the 
           custom name given by the user in the Melody Driver User interface. 
           The default name e.g. PWM_HS can be changed by the 
           user in the PWM user interface. 
           This allows defining a structure with application specific name 
           using the 'Custom Name' field. Application specific name allows the 
           API Portability.
*/
extern const struct PWM_HS_INTERFACE PWM_HS;

/** 
  @ingroup  pwmdriver
  @brief    This macro is used to read the input clock frequency (in Hz) for 
            Master settings.
*/
#define PWM_MASTER_CLOCK_FREQUENCY_IN_HZ        4000000UL

/** 
  @ingroup  pwmdriver
  @brief    This macro is used to read the input clock frequency (in Hz) for 
            PWM Generator 1.
*/
#define PWM_GENERATOR_1_CLOCK_FREQUENCY_IN_HZ        4000000UL
/** 
  @ingroup  pwmdriver
  @brief    This macro is used to read the input clock frequency (in Hz) for 
            PWM Generator 2.
*/
#define PWM_GENERATOR_2_CLOCK_FREQUENCY_IN_HZ        4000000UL
/** 
  @ingroup  pwmdriver
  @brief    This macro is used to read the input clock frequency (in Hz) for 
            PWM Generator 3.
*/
#define PWM_GENERATOR_3_CLOCK_FREQUENCY_IN_HZ        4000000UL

/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Initialize API
 */
#define PWM_HS_Initialize PWM_Initialize
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Deinitialize API
 */
#define PWM_HS_Deinitialize PWM_Deinitialize
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Disable API
 */
#define PWM_HS_Disable PWM_Disable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Enable API
 */
#define PWM_HS_Enable PWM_Enable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_MasterPeriodSet API
 */
#define PWM_HS_MasterPeriodSet PWM_MasterPeriodSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_MasterDutyCycleSet API
 */
#define PWM_HS_MasterDutyCycleSet PWM_MasterDutyCycleSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_MasterPhaseSet API
 */
#define PWM_HS_MasterPhaseSet PWM_MasterPhaseSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_PeriodSet API
 */
#define PWM_HS_PeriodSet PWM_PeriodSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_ModeSet API
 */
#define PWM_HS_ModeSet PWM_ModeSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OutputModeSet API
 */
#define PWM_HS_OutputModeSet PWM_OutputModeSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_DutyCycleSet API
 */
#define PWM_HS_DutyCycleSet PWM_DutyCycleSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_PhaseSelect API
 */
#define PWM_HS_PhaseSelect PWM_PhaseSelect
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_PhaseSet API
 */
#define PWM_HS_PhaseSet PWM_PhaseSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideDataSet API
 */
#define PWM_HS_OverrideDataSet PWM_OverrideDataSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideDataHighSet API
 */
#define PWM_HS_OverrideDataHighSet PWM_OverrideDataHighSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideDataLowSet API
 */
#define PWM_HS_OverrideDataLowSet PWM_OverrideDataLowSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideDataGet API
 */
#define PWM_HS_OverrideDataGet PWM_OverrideDataGet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideHighEnable API
 */
#define PWM_HS_OverrideHighEnable PWM_OverrideHighEnable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideLowEnable API
 */
#define PWM_HS_OverrideLowEnable PWM_OverrideLowEnable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideHighDisable API
 */
#define PWM_HS_OverrideHighDisable PWM_OverrideHighDisable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_OverrideLowDisable API
 */
#define PWM_HS_OverrideLowDisable PWM_OverrideLowDisable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_DeadTimeLowSet API
 */
#define PWM_HS_DeadTimeLowSet PWM_DeadTimeLowSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_DeadTimeHighSet API
 */
#define PWM_HS_DeadTimeHighSet PWM_DeadTimeHighSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_DeadTimeSet API
 */
#define PWM_HS_DeadTimeSet PWM_DeadTimeSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_TriggerCompareValueSet API
 */
#define PWM_HS_TriggerCompareValueSet PWM_TriggerCompareValueSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorInterruptEnable API
 */
#define PWM_HS_GeneratorInterruptEnable PWM_GeneratorInterruptEnable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorInterruptDisable API
 */
#define PWM_HS_GeneratorInterruptDisable PWM_GeneratorInterruptDisable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorEventStatusGet API
 */
#define PWM_HS_GeneratorEventStatusGet PWM_GeneratorEventStatusGet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorEventStatusClear API
 */
#define PWM_HS_GeneratorEventStatusClear PWM_GeneratorEventStatusClear
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorDisable API
 */
#define PWM_HS_GeneratorDisable PWM_GeneratorDisable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorEnable API
 */
#define PWM_HS_GeneratorEnable PWM_GeneratorEnable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_TriggerACompareValueSet API
 */
#define PWM_HS_TriggerACompareValueSet PWM_TriggerACompareValueSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_TriggerBCompareValueSet API
 */
#define PWM_HS_TriggerBCompareValueSet PWM_TriggerBCompareValueSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_TriggerCCompareValueSet API
 */
#define PWM_HS_TriggerCCompareValueSet PWM_TriggerCCompareValueSet
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_SoftwareUpdateRequest API
 */
#define PWM_HS_SoftwareUpdateRequest PWM_SoftwareUpdateRequest
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_SoftwareUpdatePending API
 */
#define PWM_HS_SoftwareUpdatePending PWM_SoftwareUpdatePending
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_FaultModeLatchClear API
 */
#define PWM_HS_FaultModeLatchClear PWM_FaultModeLatchClear
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Trigger1Enable API
 */
 #define PWM_HS_Trigger1Enable PWM_Trigger1Enable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Trigger1Disable API
 */
#define PWM_HS_Trigger1Disable PWM_Trigger1Disable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Trigger2Enable API
 */
 #define PWM_HS_Trigger2Enable PWM_Trigger2Enable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_Trigger2Disable API
 */
#define PWM_HS_Trigger2Disable PWM_Trigger2Disable
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorEOCEventCallbackRegister API
 */
#define PWM_HS_GeneratorEOCEventCallbackRegister PWM_GeneratorEOCEventCallbackRegister

/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_GeneratorTasks API
 */
#define PWM_HS_GeneratorTasks PWM_GeneratorTasks
/**
 * @ingroup  pwmdriver
 * @brief    This macro defines the Custom Name for \ref PWM_CommonEventTasks API
 */
#define PWM_HS_CommonEventTasks PWM_CommonEventTasks

// Section: PWM Module APIs

/**
 * @ingroup  pwmhsdriver
 * @brief    Initializes PWM module, using the given initialization data
 * @param    none
 * @return   none  
 */
void PWM_Initialize(void);

/**
 * @ingroup  pwmhsdriver
 * @brief    Deinitializes the PWM to POR values
 * @param    none
 * @return   none  
 */
void PWM_Deinitialize(void);

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function enables the specific PWM generator selected by the argument 
 *             PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number  
 * @return     none  
 */
inline static void PWM_GeneratorEnable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1CONbits.ON = 1U;              
                break;       
        case PWM_GENERATOR_2:
                PG2CONbits.ON = 1U;              
                break;       
        case PWM_GENERATOR_3:
                PG3CONbits.ON = 1U;              
                break;       
        default:break;    
    }     
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables the specific PWM generator selected by the argument 
 *             PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
inline static void PWM_GeneratorDisable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1CONbits.ON = 0U;
                break;       
        case PWM_GENERATOR_2:
                PG2CONbits.ON = 0U;
                break;       
        case PWM_GENERATOR_3:
                PG3CONbits.ON = 0U;
                break;       
        default:break;    
    }    
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the operating mode of specific PWM generator selected                  
 *             by the argument PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @param[in]  mode - PWM operating mode
 * @return     none  
 */
inline static void PWM_ModeSet(enum PWM_GENERATOR genNum, enum PWM_MODES mode)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1CONbits.MODSEL = mode; 
                break;
        case PWM_GENERATOR_2:
                PG2CONbits.MODSEL = mode; 
                break;
        case PWM_GENERATOR_3:
                PG3CONbits.MODSEL = mode; 
                break;
        default:break;    
    }    
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the output mode of specific PWM generator selected                  
 *             by the argument PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @param[in]  outputMode - PWM output mode
 * @return     none  
 */
inline static void PWM_OutputModeSet(enum PWM_GENERATOR genNum, enum PWM_HS_OUTPUT_MODES outputMode)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.PMOD = outputMode;
                break;
        case PWM_GENERATOR_2:
                PG2IOCONbits.PMOD = outputMode;
                break;
        case PWM_GENERATOR_3:
                PG3IOCONbits.PMOD = outputMode;
                break;
        default:break;
    }
}

/**
 * @ingroup  pwmhsdriver
 * @brief    This inline function will enable all the generators of PWM module
 * @param    none
 * @return   none  
 */
inline static void PWM_Enable(void)
{
    PG1CONbits.ON = 1U;              
    PG2CONbits.ON = 1U;              
    PG3CONbits.ON = 1U;              
}

/**
 * @ingroup  pwmhsdriver
 * @brief    This inline function will disable all the generators of PWM module
 * @param    none
 * @return   none  
 */
inline static void PWM_Disable(void)
{
    PG1CONbits.ON = 0U;              
    PG2CONbits.ON = 0U;              
    PG3CONbits.ON = 0U;              
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the period value in count for the Master Time Base generator
 * @param[in]  masterPeriod - Period value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_MasterPeriodSet(uint32_t masterPeriod)
{
    MPER = masterPeriod & 0x000FFFF0UL;
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the PWM master duty cycle register
 * @param[in]  masterDutyCycle - Master Duty Cycle value
 * @return     none
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_MasterDutyCycleSet(uint32_t masterDutyCycle)
{
    MDC = masterDutyCycle & 0x000FFFF0UL;
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the phase value in count for the Master Time Base generator
 * @param[in]  masterPhase - Phase value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_MasterPhaseSet(uint32_t masterPhase)
{
    MPHASE = masterPhase & 0x000FFFF0UL;
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the period value in count for the PWM generator specific Time Base.
 * @param[in]  genNum - PWM generator number
 * @param[in]  period - PWM generator period value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_PeriodSet(enum PWM_GENERATOR genNum,uint32_t period)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1PER = period & 0x000FFFF0UL;
                break;       
        case PWM_GENERATOR_2:
                PG2PER = period & 0x000FFFF0UL;
                break;       
        case PWM_GENERATOR_3:
                PG3PER = period & 0x000FFFF0UL;
                break;       
        default:break;    
    }   
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the PWM generator specific duty cycle register
 * @param[in]  genNum      - PWM generator number
 * @param[in]  dutyCycle   - PWM generator duty cycle
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_DutyCycleSet(enum PWM_GENERATOR genNum,uint32_t dutyCycle)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1DC = dutyCycle & 0x000FFFF0UL;
                break;       
        case PWM_GENERATOR_2:
                PG2DC = dutyCycle & 0x000FFFF0UL;
                break;       
        case PWM_GENERATOR_3:
                PG3DC = dutyCycle & 0x000FFFF0UL;
                break;       
        default:break;    
    }  
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function selects the PWM generator source for Phase
 * @param[in]  genNum - PWM generator number
 * @param[in]  source - PWM generator source select
 * @return     none  
 */
inline static void PWM_PhaseSelect(enum PWM_GENERATOR genNum,enum PWM_SOURCE_SELECT source)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1CONbits.MPHSEL = source;              
                break;       
        case PWM_GENERATOR_2:
                PG2CONbits.MPHSEL = source;              
                break;       
        case PWM_GENERATOR_3:
                PG3CONbits.MPHSEL = source;              
                break;       
        default:break;    
    } 
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the phase value in count for the PWM generator specific Time Base
 * @param[in]  genNum - PWM generator number
 * @param[in]  phase - PWM generator phase value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_PhaseSet(enum PWM_GENERATOR genNum,uint32_t phase)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1PHASE = phase & 0x000FFFF0UL; 
                break;       
        case PWM_GENERATOR_2:
                PG2PHASE = phase & 0x000FFFF0UL; 
                break;       
        case PWM_GENERATOR_3:
                PG3PHASE = phase & 0x000FFFF0UL; 
                break;       
        default:break;    
    } 
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM override data bits with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum          -   PWM generator number
 * @param[in]  overrideData    -   Override data  
 * @return     none  
 */
inline static void PWM_OverrideDataSet(enum PWM_GENERATOR genNum,uint16_t overrideData)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRDAT = overrideData;              
                break;       
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRDAT = overrideData;              
                break;       
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRDAT = overrideData;              
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM override high data bit with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum              - PWM generator number
 * @param[in]  overrideDataHigh    - Override data  
 * @return     none  
 */
inline static void PWM_OverrideDataHighSet(enum PWM_GENERATOR genNum,bool overrideDataHigh)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRDAT = (PG1IOCONbits.OVRDAT & 0x1) | ((uint8_t)overrideDataHigh << 0x1);
                break;
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRDAT = (PG2IOCONbits.OVRDAT & 0x1) | ((uint8_t)overrideDataHigh << 0x1);
                break;
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRDAT = (PG3IOCONbits.OVRDAT & 0x1) | ((uint8_t)overrideDataHigh << 0x1);
                break;
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM override low data bit with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR. 
 * @param[in]  genNum             - PWM generator number
 * @param[in]  overrideDataLow    - Override data  
 * @return     none  
 */
inline static void PWM_OverrideDataLowSet(enum PWM_GENERATOR genNum,bool overrideDataLow)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRDAT = (PG1IOCONbits.OVRDAT & 0x2) | overrideDataLow;
                break;  
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRDAT = (PG2IOCONbits.OVRDAT & 0x2) | overrideDataLow;
                break;  
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRDAT = (PG3IOCONbits.OVRDAT & 0x2) | overrideDataLow;
                break;  
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function gets PWM override value for the PWM Generator selected by the 
 *             argument \ref PWM_GENERATOR. 
 * @param[in]  genNum  -  PWM generator number
 * @return     Override data for the PWM Generator selected by the argument 
 *             PWM_GENERATOR.  
 */
inline static uint16_t PWM_OverrideDataGet(enum PWM_GENERATOR genNum)
{
    uint16_t overrideData = 0x0U;
    switch(genNum) { 
        case PWM_GENERATOR_1:
                overrideData = PG1IOCONbits.OVRDAT;             
                break;
        case PWM_GENERATOR_2:
                overrideData = PG2IOCONbits.OVRDAT;             
                break;
        case PWM_GENERATOR_3:
                overrideData = PG3IOCONbits.OVRDAT;             
                break;
        default:break;    
    }
    return overrideData;
}

/**
 * @ingroup  pwmhsdriver
 * @brief    This inline function enables PWM override on PWMH output for specific PWM generator selected 
 *           by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number  
 * @return   none  
 */
inline static void PWM_OverrideHighEnable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRENH = 1;    
                break;
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRENH = 1;    
                break;
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRENH = 1;    
                break;
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function enables PWM override on PWML output for specific PWM generator selected 
 *             by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
inline static void PWM_OverrideLowEnable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRENL = 1;              
                break; 
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRENL = 1;              
                break; 
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRENL = 1;              
                break; 
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables PWM override on PWMH output for specific PWM generator selected 
 *             by the argument \ref PWM_GENERATOR.    
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
inline static void PWM_OverrideHighDisable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRENH = 0;              
                break;
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRENH = 0;              
                break;
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRENH = 0;              
                break;
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables PWM override on PWML output for specific PWM generator selected 
 *             by the argument \ref PWM_GENERATOR.    
 * @param[in]  genNum - PWM generator number 
 * @return     none  
 */
inline static void PWM_OverrideLowDisable(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1IOCONbits.OVRENL = 0;              
                break;   
        case PWM_GENERATOR_2:
                PG2IOCONbits.OVRENL = 0;              
                break;   
        case PWM_GENERATOR_3:
                PG3IOCONbits.OVRENL = 0;              
                break;   
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM Deadtime low register with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum      - PWM generator number
 * @param[in]  deadtimeLow - Deadtime low value
 * @return     none  
 */
inline static void PWM_DeadTimeLowSet(enum PWM_GENERATOR genNum,uint16_t deadtimeLow)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1DT = (PG1DT & 0xFFFF0000UL) | (deadtimeLow & (uint16_t)0x7FFF) ;
                break;       
        case PWM_GENERATOR_2:
                PG2DT = (PG2DT & 0xFFFF0000UL) | (deadtimeLow & (uint16_t)0x7FFF) ;
                break;       
        case PWM_GENERATOR_3:
                PG3DT = (PG3DT & 0xFFFF0000UL) | (deadtimeLow & (uint16_t)0x7FFF) ;
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM Deadtime high register with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum          - PWM generator number
 * @param[in]  deadtimeHigh    - Deadtime high value
 * @return     none  
 */
inline static void PWM_DeadTimeHighSet(enum PWM_GENERATOR genNum,uint16_t deadtimeHigh)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1DT = (((uint32_t)deadtimeHigh & (uint16_t)0x7FFF) << 16) | (uint16_t)PG1DT;              
                break;       
        case PWM_GENERATOR_2:
                PG2DT = (((uint32_t)deadtimeHigh & (uint16_t)0x7FFF) << 16) | (uint16_t)PG2DT;              
                break;       
        case PWM_GENERATOR_3:
                PG3DT = (((uint32_t)deadtimeHigh & (uint16_t)0x7FFF) << 16) | (uint16_t)PG3DT;              
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function updates PWM Deadtime low and high register with the requested value for a 
 *             specific PWM generator selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum          - PWM generator number
 * @param[in]  deadtimeHigh    - Deadtime value
 * @return     none  
 */
inline static void PWM_DeadTimeSet(enum PWM_GENERATOR genNum,uint16_t deadtime)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1DT = (((uint32_t)deadtime & (uint16_t)0x7FFF) << 16) | (deadtime & (uint16_t)0x7FFF);
                break;       
        case PWM_GENERATOR_2:
                PG2DT = (((uint32_t)deadtime & (uint16_t)0x7FFF) << 16) | (deadtime & (uint16_t)0x7FFF);
                break;       
        case PWM_GENERATOR_3:
                PG3DT = (((uint32_t)deadtime & (uint16_t)0x7FFF) << 16) | (deadtime & (uint16_t)0x7FFF);
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the PWM trigger compare value in count for the PWM Generator 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum          - PWM generator number
 * @param[in]  trigCompValue   - Trigger compare value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_TriggerCompareValueSet(enum PWM_GENERATOR genNum,uint32_t trigCompValue)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1TRIGA = trigCompValue & 0x000FFFF0UL;  
                break;      
        case PWM_GENERATOR_2:
                PG2TRIGA = trigCompValue & 0x000FFFF0UL;  
                break;      
        case PWM_GENERATOR_3:
                PG3TRIGA = trigCompValue & 0x000FFFF0UL;  
                break;      
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function enables interrupt requests for the PWM Generator selected by the 
 *             argument \ref PWM_GENERATOR.   
 * @param[in]  genNum - PWM generator number
 * @param[in]  interrupt - PWM generator interrupt source
 * @return     none  
 */
inline static void PWM_GeneratorInterruptEnable(enum PWM_GENERATOR genNum, enum PWM_GENERATOR_INTERRUPT interrupt)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG1EVTbits.FLTIEN = 1;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG1EVTbits.CLIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG1EVTbits.FFIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG1EVTbits.SIEN = 1;
                                        break;                                                        
                        default:break;  
                }
                break;   
        case PWM_GENERATOR_2:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG2EVTbits.FLTIEN = 1;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG2EVTbits.CLIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG2EVTbits.FFIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG2EVTbits.SIEN = 1;
                                        break;                                                        
                        default:break;  
                }
                break;   
        case PWM_GENERATOR_3:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG3EVTbits.FLTIEN = 1;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG3EVTbits.CLIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG3EVTbits.FFIEN = 1;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG3EVTbits.SIEN = 1;
                                        break;                                                        
                        default:break;  
                }
                break;   
        default:break;  
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables interrupt requests for the PWM Generator selected by the 
 *             argument \ref PWM_GENERATOR.
 * @param[in]  genNum 	 - PWM generator number
 * @param[in]  interrupt - PWM generator interrupt source
 * @return     none  
 */
inline static void PWM_GeneratorInterruptDisable(enum PWM_GENERATOR genNum, enum PWM_GENERATOR_INTERRUPT interrupt)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG1EVTbits.FLTIEN = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG1EVTbits.CLIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG1EVTbits.FFIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG1EVTbits.SIEN = 0;
                                        break;                                                        
                        default:break;  
                }
                break;  
        case PWM_GENERATOR_2:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG2EVTbits.FLTIEN = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG2EVTbits.CLIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG2EVTbits.FFIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG2EVTbits.SIEN = 0;
                                        break;                                                        
                        default:break;  
                }
                break;  
        case PWM_GENERATOR_3:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG3EVTbits.FLTIEN = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG3EVTbits.CLIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG3EVTbits.FFIEN = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG3EVTbits.SIEN = 0;
                                        break;                                                        
                        default:break;  
                }
                break;  
        default:break;  
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function clears the PWM interrupt status for the PWM Generator selected by the 
 *             argument \ref PWM_GENERATOR.   
 * @param[in]  genNum 	- PWM generator number
 * @param[in]  interrupt - PWM generator interrupt source
 * @return     none  
 */
inline static void PWM_GeneratorEventStatusClear(enum PWM_GENERATOR genNum, enum PWM_GENERATOR_INTERRUPT interrupt)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG1STATbits.FLTEVT = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG1STATbits.CLEVT = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG1STATbits.FFEVT = 0;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG1STATbits.SEVT = 0;
                                        break;                            
                        default:break;  
                }              
                break; 
        case PWM_GENERATOR_2:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG2STATbits.FLTEVT = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG2STATbits.CLEVT = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG2STATbits.FFEVT = 0;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG2STATbits.SEVT = 0;
                                        break;                            
                        default:break;  
                }              
                break; 
        case PWM_GENERATOR_3:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        PG3STATbits.FLTEVT = 0;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        PG3STATbits.CLEVT = 0;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        PG3STATbits.FFEVT = 0;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        PG3STATbits.SEVT = 0;
                                        break;                            
                        default:break;  
                }              
                break; 
        default:break;  
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function gets the PWM interrupt status for the PWM Generator selected by the 
 *             argument \ref PWM_GENERATOR.   
 * @param[in]  genNum 	- PWM generator number
 * @param[in]  interrupt - PWM generator interrupt source
 * @return     true  - Interrupt is pending
 * @return     false - Interrupt is not pending
 */
inline static bool PWM_GeneratorEventStatusGet(enum PWM_GENERATOR genNum, enum PWM_GENERATOR_INTERRUPT interrupt)
{
    bool status = false;
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        status = PG1STATbits.FLTEVT;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        status = PG1STATbits.CLEVT;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        status = PG1STATbits.FFEVT;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        status = PG1STATbits.SEVT;
                                        break;                            
                        default:break;  
                }              
                break; 
        case PWM_GENERATOR_2:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        status = PG2STATbits.FLTEVT;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        status = PG2STATbits.CLEVT;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        status = PG2STATbits.FFEVT;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        status = PG2STATbits.SEVT;
                                        break;                            
                        default:break;  
                }              
                break; 
        case PWM_GENERATOR_3:
                switch(interrupt) { 
                        case PWM_GENERATOR_INTERRUPT_FAULT:
                                        status = PG3STATbits.FLTEVT;
                                        break;       
                        case PWM_GENERATOR_INTERRUPT_CURRENT_LIMIT:
                                        status = PG3STATbits.CLEVT;
                                        break;
                        case PWM_GENERATOR_INTERRUPT_FEED_FORWARD:
                                        status = PG3STATbits.FFEVT;
                                        break;    
                        case PWM_GENERATOR_INTERRUPT_SYNC:
                                        status = PG3STATbits.SEVT;
                                        break;                            
                        default:break;  
                }              
                break; 
        default:break;  
    }
    return status;
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function requests to update the data registers for specific PWM generator 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
inline static void PWM_SoftwareUpdateRequest(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1STATbits.UPDREQ = 1;
                break;       
        case PWM_GENERATOR_2:
                PG2STATbits.UPDREQ = 1;
                break;       
        case PWM_GENERATOR_3:
                PG3STATbits.UPDREQ = 1;
                break;       
        default:break;    
    }

}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function gets the status of the update request for specific PWM generator 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @return     true  - Software update is pending
 * @return     false - Software update is not pending 
 */
inline static bool PWM_SoftwareUpdatePending(enum PWM_GENERATOR genNum)
{
    bool status = false;
    switch(genNum) { 
        case PWM_GENERATOR_1:
                status = PG1STATbits.UPDATE;
                break;       
        case PWM_GENERATOR_2:
                status = PG2STATbits.UPDATE;
                break;       
        case PWM_GENERATOR_3:
                status = PG3STATbits.UPDATE;
                break;       
        default:break;   
    }
    return status;
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the Trigger A compare value in count for a specific PWM generator 
 *             selected by the argument \ref PWM_GENERATOR.  
 * @param[in]  genNum - PWM generator number
 * @param[in]  trigA  - Trigger A compare value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_TriggerACompareValueSet(enum PWM_GENERATOR genNum,uint32_t trigA)
{ 
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1TRIGA = trigA & 0x800FFFF0UL;
                break;       
        case PWM_GENERATOR_2:
                PG2TRIGA = trigA & 0x800FFFF0UL;
                break;       
        case PWM_GENERATOR_3:
                PG3TRIGA = trigA & 0x800FFFF0UL;
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the Trigger B compare value in count for a specific PWM generator 
 *             selected by the argument \ref PWM_GENERATOR.   
 * @param[in]  genNum - PWM generator number
 * @param[in]  trigB  - Trigger B compare value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_TriggerBCompareValueSet(enum PWM_GENERATOR genNum,uint32_t trigB)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1TRIGB = trigB & 0x800FFFF0UL;
                break;       
        case PWM_GENERATOR_2:
                PG2TRIGB = trigB & 0x800FFFF0UL;
                break;       
        case PWM_GENERATOR_3:
                PG3TRIGB = trigB & 0x800FFFF0UL;
                break;       
        default:break;    
    }
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function sets the Trigger C compare value in count for a specific PWM generator 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @param[in]  trigC  - Trigger C compare value in count
 * @return     none  
 * @Note       Refer datasheet for valid size of data bits
 */
inline static void PWM_TriggerCCompareValueSet(enum PWM_GENERATOR genNum,uint32_t trigC)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                PG1TRIGC = trigC & 0x800FFFF0UL;
                break;
        case PWM_GENERATOR_2:
                PG2TRIGC = trigC & 0x800FFFF0UL;
                break;
        case PWM_GENERATOR_3:
                PG3TRIGC = trigC & 0x800FFFF0UL;
                break;
        default:break;    
    }
}


/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function enables ADC trigger 1 for the specific compare register 
 *             selected by the argument \ref PWM_GENERATOR.
 * @pre        Trigger value has to be set using \ref PWM_TriggerACompareValueSet, 
 *             \ref PWM_TriggerBCompareValueSet or \ref PWM_TriggerCCompareValueSet
 *             before calling this function.
 * @param[in]  genNum - PWM generator number
 * @param[in]  compareRegister - PWM generator trigger compare register 
 * @return     none  
 */
inline static void PWM_Trigger1Enable(enum PWM_GENERATOR genNum, enum PWM_TRIGGER_COMPARE compareRegister)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG1EVTbits.ADTR1EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG1EVTbits.ADTR1EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG1EVTbits.ADTR1EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_2:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG2EVTbits.ADTR1EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG2EVTbits.ADTR1EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG2EVTbits.ADTR1EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_3:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG3EVTbits.ADTR1EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG3EVTbits.ADTR1EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG3EVTbits.ADTR1EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        default:break;    
    }

}  

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables ADC trigger 1 for the specific compare register 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @param[in]  compareRegister - PWM generator trigger compare register 
 * @return     none  
 */
inline static void PWM_Trigger1Disable(enum PWM_GENERATOR genNum, enum PWM_TRIGGER_COMPARE compareRegister)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG1EVTbits.ADTR1EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG1EVTbits.ADTR1EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG1EVTbits.ADTR1EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_2:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG2EVTbits.ADTR1EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG2EVTbits.ADTR1EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG2EVTbits.ADTR1EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_3:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG3EVTbits.ADTR1EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG3EVTbits.ADTR1EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG3EVTbits.ADTR1EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        default:break;    
    }

}

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function enables ADC trigger 2 for the specific compare register 
 *             selected by the argument \ref PWM_GENERATOR.
 * @pre        Trigger value has to be set using \ref PWM_TriggerACompareValueSet, 
 *             \ref PWM_TriggerBCompareValueSet or \ref PWM_TriggerCCompareValueSet
 *             before calling this function.
 * @param[in]  genNum - PWM generator number
 * @param[in]  compareRegister - PWM generator trigger compare register 
 * @return     none  
 */
inline static void PWM_Trigger2Enable(enum PWM_GENERATOR genNum, enum PWM_TRIGGER_COMPARE compareRegister)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG1EVTbits.ADTR2EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG1EVTbits.ADTR2EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG1EVTbits.ADTR2EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_2:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG2EVTbits.ADTR2EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG2EVTbits.ADTR2EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG2EVTbits.ADTR2EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_3:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG3EVTbits.ADTR2EN1 = 1;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG3EVTbits.ADTR2EN2 = 1;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG3EVTbits.ADTR2EN3 = 1;
                                        break;                           
                        default:break;  
                }              
                break;       
        default:break;    
    }

}  

/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function disables ADC trigger 2 for the specific compare register 
 *             selected by the argument \ref PWM_GENERATOR.
 * @param[in]  genNum - PWM generator number
 * @param[in]  compareRegister - PWM generator trigger compare register 
 * @return     none  
 */
inline static void PWM_Trigger2Disable(enum PWM_GENERATOR genNum, enum PWM_TRIGGER_COMPARE compareRegister)
{
    switch(genNum) { 
        case PWM_GENERATOR_1:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG1EVTbits.ADTR2EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG1EVTbits.ADTR2EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG1EVTbits.ADTR2EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_2:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG2EVTbits.ADTR2EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG2EVTbits.ADTR2EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG2EVTbits.ADTR2EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        case PWM_GENERATOR_3:
                switch(compareRegister) { 
                        case PWM_TRIGGER_COMPARE_A:
                                        PG3EVTbits.ADTR2EN1 = 0;
                                        break;       
                        case PWM_TRIGGER_COMPARE_B:
                                        PG3EVTbits.ADTR2EN2 = 0;
                                        break;
                        case PWM_TRIGGER_COMPARE_C:
                                        PG3EVTbits.ADTR2EN3 = 0;
                                        break;                           
                        default:break;  
                }              
                break;       
        default:break;    
    }

}


/**
 * @ingroup    pwmhsdriver
 * @brief      This inline function clears the status of PWM latched fault mode for the PWM Generator 
 *             selected by the argument \ref PWM_GENERATOR.   
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
inline static void PWM_FaultModeLatchClear(enum PWM_GENERATOR genNum)
{
    switch(genNum) { 
        case PWM_GENERATOR_1: 
                PG1FPCIbits.SWTERM = 1;
                break;   
        case PWM_GENERATOR_2: 
                PG2FPCIbits.SWTERM = 1;
                break;   
        case PWM_GENERATOR_3: 
                PG3FPCIbits.SWTERM = 1;
                break;   
        default:break;   
    }   
}

/**
 * @ingroup    pwmhsdriver
 * @brief      This function can be used to override default callback 
 *             \ref PWM_GeneratorEOCEventCallback and to define custom callback for 
 *             PWM EOCEvent event.
 * @param[in]  callback - Address of the callback function
 * @return     none  
 */
void PWM_GeneratorEOCEventCallbackRegister(void (*callback)(enum PWM_GENERATOR genNum));

/**
 * @ingroup    pwmhsdriver
 * @brief      This is the default callback with weak attribute. The user can 
 *             override and implement the default callback without weak attribute 
 *             or can register a custom callback function using PWM_EOCEventCallbackRegister.
 * @param[in]  genNum - PWM generator number
 * @return     none  
 */
void PWM_GeneratorEOCEventCallback(enum PWM_GENERATOR genNum);


/**
 * @ingroup    pwmhsdriver
 * @brief      This is a tasks function for PWM1
 * @param[in]  intGen - PWM generator number
 * @return     none  
 */
void PWM_GeneratorTasks(enum PWM_GENERATOR intGen);

/**
 * @ingroup    pwmhsdriver
 * @brief      This function call used only in polling mode, if commonEvent occured for PWM, 
 *             then calls the respective callback function
 * @param[in]  event - Common event instance           
 * @return     none
 */
void PWM_CommonEventTasks(enum PWM_COMMON_EVENT event);

#endif //PWM_H

