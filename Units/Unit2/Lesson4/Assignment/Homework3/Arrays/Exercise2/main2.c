/*
 * main2.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){
	int i,size;
	float array[100]={0},sum = 0.0;
	printf("Enter the number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&size);

	for(i = 0;i<size;i++){
		printf("Enter the number: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&array[i]);
		sum += array[i];
	}
	printf("Average = %.2f",(sum/(float)size));

	return 0;

}
