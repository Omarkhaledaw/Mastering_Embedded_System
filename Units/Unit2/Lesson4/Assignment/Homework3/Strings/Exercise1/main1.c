/*
 * main1.c
 *
 *  Created on: Nov 18, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){

	char text[100],ch;
	int i,count = 0;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(text);

	printf("Enter a character to find frequency: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&ch);

	for(i=0;text[i]!='\0';i++){
		if(ch == text[i])
			count++;
	}
	printf("Frequency of %c = %d",ch,count);
	return 0;
}
