/*
 * main4.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){
	int arr[15];
	int size,i;
	int *ptr=arr;
	printf("Test Data:\n");
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&size);
	printf("Input %d number of elements in the array:\n",size);
	for(i=0;i<size;i++){
		printf("element %d : ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",ptr);
		ptr++;
	}
	printf("\nThe elements of array in reverse order are :\n");
	for(ptr--,i--;i>=0;i--){
		printf("element - %d : %d\n",i+1,*ptr);
		ptr--;
	}
	return 0;
}
