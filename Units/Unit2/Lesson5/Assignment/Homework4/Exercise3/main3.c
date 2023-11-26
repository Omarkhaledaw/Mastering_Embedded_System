/*
 * main3.c
 *
 *  Created on: Nov 26, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

void reverseUsingRecusrion();

int main(){

	printf("Enter a sentence: ");
	reverseUsingRecusrion();

	return 0;
}
void reverseUsingRecusrion(){
	char c;
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	if(c != '\n'){
		reverseUsingRecusrion();
		printf("%c",c);
	}
}
