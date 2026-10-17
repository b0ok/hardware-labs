/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include "header01.h"

int main(void)
{
    
    uint8 portvalue = 0x00;
    LED_Write(portvalue);

    while(1)
    {
        portvalue = portvalue | TurnON_LED0;
        LED_Write(portvalue);
        CyDelay(WaitTime);
        
        portvalue = portvalue | TurnON_LED1;
        LED_Write(portvalue);
        CyDelay(WaitTime);
        
        portvalue = portvalue | TurnON_LED2;
        LED_Write(portvalue);
        CyDelay(WaitTime);
        
        portvalue = portvalue | TurnON_LED3;
        LED_Write(portvalue);
        CyDelay(WaitTime);
        
        portvalue = portvalue & TurnOFF_LED;
        LED_Write(portvalue);
        CyDelay(WaitTime);
    }
}
/* [] END OF FILE */
