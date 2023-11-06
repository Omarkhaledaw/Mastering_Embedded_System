/*
 * main7.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){
	int num = 0,factorial = 1,i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num > 0){
		for(i = 1;i<=num;i++){
			factorial *=i;
		}
		printf("Factorial = %d",factorial);
	}else{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}

	return 0;
}
