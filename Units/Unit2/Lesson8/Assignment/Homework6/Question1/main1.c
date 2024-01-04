/*
 * main1.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){
	int m = 29;
	printf("Address of m : 0x%x",&m);
	printf("\nValue of m : %d\n",m);
	int *ab = &m;
	printf("\nNow ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%x",ab);
	printf("\nValue of pointer ab : %d\n",*ab);
	m = 34;
	printf("\nThe value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%x",ab);
	printf("\nValue of pointer ab : %d\n",*ab);
	*ab = 7;
	printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : 0x%x",&m);
	printf("\nValue of m : %d",m);
	return 0;
}