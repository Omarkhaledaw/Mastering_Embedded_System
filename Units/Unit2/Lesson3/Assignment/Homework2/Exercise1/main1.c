/*
 * main1.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>


int main(){

	int num = 0;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&num);

	if(num%2 == 0){
		printf("%d is even.",num);
	}else{
		printf("%d is odd.",num);
	}
	return 0;
}
