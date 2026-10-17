/* ========================================
 *
 * Copyright YMM ENG, 2023
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF YMM ENG.
 *
 * ========================================
*/
#include <project.h>
#include <stdbool.h>
#include "header01.h" // Include the header file with the definitions

int main(void)
{
    int LED1 = OFF;
    uint8_t PortValue = 0x00; // Initialize all LEDs to off

    LED_OUTPUT_WIRTE(PORTVALUE);

    while (1)
    {
        if (LED1 == OFF)
        {
            LED1 = ON;
            PortValue |= TurnON_LED1;
            PortValue &= TurnOFF_LED2;
        }
        else
        {
            LED1 = OFF;
            PortValue |= TurnOFF_LED1;
            PortValue &= TurnON_LED2;
        }
        LED_OUTPUT_WRITE(PortValue);
        CyDelay(WaitTime);
    }
}

/* [] END OF FILE */
