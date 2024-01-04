/*
 * main2.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){
	char alphabets[26];
	char *ptr = alphabets;
	int i = 0;
	while(i<26){
		*ptr= i+'A';
		i++;
		ptr++;
	}
	i = 0;
	ptr = alphabets;
	printf("Alphabets are:\n");
	while(i<26){
		printf("%c ",*ptr);
		ptr++;
		i++;
	}

	return 0;
}
