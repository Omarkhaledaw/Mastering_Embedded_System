/*
 * main3.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){
	float num1 = 0.0,num2 = 0.0,num3 = 0.0;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);

	if(num1 > num2){
		if(num1 > num3){
			printf("Largest number = %0.2f",num1);
		}else{
			printf("Largest number = %0.2f",num3);
		}
	}else{
		if(num2 > num3){
			printf("Largest number = %0.2f",num2);
		}else{
			printf("Largest number = %0.2f",num3);
		}
	}

	return 0;
}
