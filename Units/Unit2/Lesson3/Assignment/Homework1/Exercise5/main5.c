/*
 * main5.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	char ch;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);

	return 0;
}
