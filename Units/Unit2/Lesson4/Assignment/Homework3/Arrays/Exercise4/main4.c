/*
 * main4.c
 *
 *  Created on: Nov 18, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){

	int array[100],size,i,element,location;

	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&size);

	for(i = 0;i<size;i++){
		fflush(stdout);
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&element);

	printf("Enter the location: ");
	fflush(stdout);
	scanf("%d",&location);

	for(i = size;i>=location;i--){
		array[i]= array[i-1];
	}
	size++;
	array[location-1] = element;
	for(i = 0;i<size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}