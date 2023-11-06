/*
 * main6.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){
	int num = 0,sum = 0,i;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);

	for(i = 1;i<=num;i++){
		sum +=i;
	}
	printf("Sum = %d",sum);
	return 0;
}
