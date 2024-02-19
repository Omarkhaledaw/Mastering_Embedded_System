/*
 * uart.c
 *
 *  Created on: Feb 19, 2024
 *      Author: Omar Awad
 */
#include "uart.h"

/*Defines*/
#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))
/*
* UARTSendString
* Parameters: pointer to string
* Description: Sends a entrie string using UART
* Returns: none
*/
void UARTSendString(unsigned char* PString){
	
	while(*PString != '\0'){ /*Making sure to tansmit the entry string*/
		UART0DR = (unsigned int)(*PString); /*Transmiting every character*/
		PString++; /*Incrementing the pointer*/
	}
}