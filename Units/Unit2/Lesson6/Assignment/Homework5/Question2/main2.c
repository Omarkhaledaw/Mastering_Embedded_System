/*
 * main2.c
 *
 *  Created on: Dec 19, 2023
 *      Author: Omar Awad
 */
#include <stdio.h>

struct S_Distance{
	int feet;
	float inch;
}D1,D2,D3;

int main(){

	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&D1.feet);
	printf("Enter inch: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&D1.inch);

	printf("\nEnter information for 2nd distance\n");
	printf("Enter feet: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&D2.feet);
	printf("Enter inch: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&D2.inch);

	D3.feet = D1.feet+D2.feet;
	D3.inch=D1.inch+D2.inch;
	while(D3.inch >= 12){
		D3.feet++;
		D3.inch -= 12;
	}
	printf("\nSum of distance=%d'%.1f\"",D3.feet,D3.inch);
	return 0;
}
