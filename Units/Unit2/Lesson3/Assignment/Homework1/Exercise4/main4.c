/*
 * main4.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	float num1 = 0 , num2 = 0;
	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	printf("Product: %f",num1*num2);

	return 0;
}
