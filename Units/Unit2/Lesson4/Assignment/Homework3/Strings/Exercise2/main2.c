/*
 * main2.c
 *
 *  Created on: Nov 18, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){

	char text[100];
	int i = 0,count = 0;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(text);
	while(text[i]!='\0'){
		count++;
		i++;
	}
	printf("Length of string: %d",count);
	return 0;
}
