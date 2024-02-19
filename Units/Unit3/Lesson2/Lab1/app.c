/*
 * app.c
 *
 *  Created on: Feb 19, 2024
 *      Author: Omar Awad
 */
#include "uart.h"

unsigned char text_buffer[100] = "learn-in-depth<Omar>";

void main(void){

	UARTSendString(text_buffer);
}