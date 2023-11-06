/*
 * main4.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){
	float num = 0.0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&num);

	if(num > 0){
		printf("%0.2f is positive",num);
	}else{
		printf("%0.2f is negative",num);
	}

	return 0;
}
