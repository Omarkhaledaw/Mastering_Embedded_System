/*
 * main1.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

int main(){

	int i,j;
	float array1[2][2];
	float array2[2][2];
	float sum[2][2];

	printf("Enter the elements of 1st matrix\n");
	for(i = 0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&array1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for(i = 0;i<2;i++){
		for(j = 0;j<2;j++){
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&array2[i][j]);
		}
	}
	for(i = 0;i<2;i++){
		for(j = 0;j<2;j++){
			sum[i][j] = array1[i][j]+array2[i][j];
		}
	}
	printf("\nSum Of Matrix:\n");
	for(i = 0;i<2;i++){
		for(j = 0;j<2;j++){
			printf("%.1f\t",sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}
