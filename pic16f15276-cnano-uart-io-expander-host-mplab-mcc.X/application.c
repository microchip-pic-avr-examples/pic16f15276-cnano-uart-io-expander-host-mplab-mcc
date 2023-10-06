/*
 * File:   application.c
 * Author: I62418
 *
 * Created on October 7, 2021, 10:30 AM
 */


#include <xc.h>
#include "application.h"

/*
 ***********************************************************
 *                                                         *
 *          User Defined Function Definitions              *
 *                                                         *
 ***********************************************************
*/
    
void Application(void)
{
    if (button == PRESSED)                          // Check if button is pressed
    {
        button = STATE_READ;                        // Reset button state
        EUSART1_Write(START_7_SEG_DISP_LOOP);       // Send command to initiate communication
        LED_SetLow();                               // Toggle LED for visual indication
        while(!EUSART1_IsTxReady());                // Check if transmit has happened successfully        
        __delay_ms(LED_HOLD_PERIOD);
        LED_SetHigh();
    }
}

void TMR2_UserInterruptHandler(void)
{
    button = PRESSED;
}