/*
 * main2.c
 *
 *  Created on: Nov 26, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int FactorialWithRecursion(int);

int main(){

	int num,result;
	printf("Enter a positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	result = FactorialWithRecursion(num);
	printf("Factorial of %d = %d",num,result);

	return 0;
}
int FactorialWithRecursion(int num){
	if(num == 1 || num == 0){
		return 1;
	}else{
		return num*FactorialWithRecursion(num-1);
	}
}
