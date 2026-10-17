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
#include <stdio.h>
#include <main.h>

// Assuming these functions are part of an LCD library
void start(); // Initialize the LCD
void printstring(char* str); // Display a string on the LCD
void position(int row, int col); // Set the position on the LCD

int main() {
    // Initialize the LCD
    start();

    // Set the position on the LCD
    position(0, 0);

    // Display the message
    printstring("TERRY NGUYEN");

    return 0;
}


/* [] END OF FILE */
