/*
 * main6.c
 *
 *  Created on: Dec 20, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

union job{	//defining a union
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1{
	char name[32];
	float salary;
	int worker_no;
}s;
int main(){
	printf("size of union=%d",sizeof(u));
	printf("\nsize of structure=%d",sizeof(s));
	return 0;
}
