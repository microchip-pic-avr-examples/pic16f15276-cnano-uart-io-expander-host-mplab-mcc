/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef APPLICATION_H
#define	APPLICATION_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include "mcc_generated_files/system/system.h"

/*
 ***********************************************************
 *                                                         *
 *              User Defined MACROS                        *
 *                                                         *
 ***********************************************************
*/

#define LED_HOLD_PERIOD         (100)
#define START_7_SEG_DISP_LOOP   ('1')

/*
 ***********************************************************
 *                                                         *
 *              User Defined Structure                     *
 *                                                         *
 ***********************************************************
*/

typedef enum {
    RELEASED,
    PRESSED,
    STATE_READ
}buttonState_t;
buttonState_t button = STATE_READ;

/*
 ***********************************************************
 *                                                         *
 *         User Defined Function Declaration               *
 *                                                         *
 ***********************************************************
*/

/**
   @Param
    none
   @Returns
    none
   @Description
    Sets the button state as PRESSED on pressing the button
   @Example
    none
 */
void TMR2_UserInterruptHandler(void);

/**
   @Param
    none
   @Returns
    none
   @Description
    Performs the action of sending the EUSART command to start 7 segment display counter
   @Example
    none
 */
void Application(void);


#endif	/* APPLICATION_H */

