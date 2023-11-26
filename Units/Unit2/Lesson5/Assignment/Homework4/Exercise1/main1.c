/*
 * main1.c
 *
 *  Created on: Nov 26, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

void primeNumbersRange(int,int);

int main(){

	int num1,num2;
	printf("Enter two numbers (intervals): ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&num1,&num2);
	primeNumbersRange(num1,num2);

	return 0;
}
void primeNumbersRange(int num1,int num2){
	int i;
	printf("Prime numbers between %d and %d are: ",num1,num2);
	for(i = num1;i<=num2;i++){
		if(i%2 == 0 || i%3 == 0){
			continue;
		}else{
			printf("%d ",i);
		}
	}
}
