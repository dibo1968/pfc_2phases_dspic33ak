/**
 * ADC2 Generated Driver Header File
 * 
 * @file      adc2.h
 *            
 * @ingroup   adcdriver
 *            
 * @brief     This is the generated driver header file for the ADC2 driver          
 *
 * @skipline @version   PLIB Version 1.1.0
 *            
 * @skipline  Device : dsPIC33AK128MC106
*/

/*disclaimer*/

#ifndef ADC2_H
#define ADC2_H

// Section: Included Files

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>
#include "adc_types.h"
#include "adc_interface.h"

// Section: Driver Interface Functions

/**
 * @ingroup  adcdriver
 * @brief    Initializes ADC2 module, using the given initialization data
 *           This function must be called before any other ADC2 function is called.
 * @param    none
 * @return   none  
 */
void ADC2_Initialize (void);

/**
 * @ingroup  adcdriver
 * @brief    Deinitializes the ADC2 to POR values
 * @param    none
 * @return   none  
 */
void ADC2_Deinitialize(void);


#endif //_ADC2_H
    
/**
 End of File
*/

