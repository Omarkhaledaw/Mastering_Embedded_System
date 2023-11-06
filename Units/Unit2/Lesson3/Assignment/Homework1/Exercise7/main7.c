/*
 * main7.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	float a = 0.0, b = 0.0;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	a+=b;
	b = a - b;
	a = a - b;

	printf("\nAfter swapping, value of a = %f",a);
	printf("\nAfter swapping, value of b = %f",b);

	return 0;
}
