/*
 * main3.c
 *
 *  Created on: Nov 18, 2023
 *      Author: Omar Awad
 */
#include<stdio.h>

int main(){
	int i,j,rows,columns;
	printf("Enter rows and column of matrix: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&rows,&columns);

	printf("Enter elements of matrix:\n");
	int array[rows][columns];
	for(i = 0;i<rows;i++){
		for(j = 0;j<columns;j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
		for(i = 0;i<rows;i++){
			for(j = 0;j<columns;j++){
				printf("%d\t",array[i][j]);
			}
			printf("\n");
		}
	return 0;
}
