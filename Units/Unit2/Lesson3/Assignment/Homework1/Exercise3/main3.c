/*
 * main3.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	int num1 = 0,num2 = 0;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("Sum: %d",num1+num2);

	return 0;
}
