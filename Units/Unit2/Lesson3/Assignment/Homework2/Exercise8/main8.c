/*
 * main8.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	float num1 = 0.0,num2 = 0.0,result = 0.0;
	char op;
	printf("Enter the operator either + or - or * or /: ");
	fflush(stdout);
	scanf("%c",&op);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(op){
		case '+':{
			result = num1 + num2;
			printf("%0.1f + %0.1f = %0.1f",num1,num2,result);
			break;
		}
		case '-':{
			result = num1 - num2;
			printf("%0.1f - %0.1f = %0.1f",num1,num2,result);
			break;
		}
		case '*':{
			result = num1 * num2;
			printf("%0.1f * %0.1f = %0.1f",num1,num2,result);
			break;
		}
		case '/':{
			result = num1 / num2;
			printf("%0.1f / %0.1f = %0.1f",num1,num2,result);
			break;
		}
		default:{
			printf("Error!!! Unknown operator, please try again later.");
		}
	}
	return 0;
}
