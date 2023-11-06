/*
 * main2.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>


int main(){

	char ch;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' || ch == 'y'\
			|| ch == 'A' || ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U' || ch == 'Y'	){
		printf("%c is a vowel",ch);
	}else{
		printf("%c is consonant",ch);
	}
	return 0;
}
