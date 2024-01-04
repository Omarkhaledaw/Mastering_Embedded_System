/*
 * main5.c
 *
 *  Created on: Jan 4, 2024
 *      Author: Omar Awad
 */
#include <stdio.h>

struct SEmployee{
	char *name;
	int id;
};

int main(){
	struct SEmployee num1={"John",1001},num2={"Alex",1002},num3={"Taylor",1003};
	struct SEmployee (*arr[3])={&num1,&num2,&num3};
	struct SEmployee(*(*ptr)[3])=&arr;
	printf("Employee Name : %s\n",(**(*ptr+1)).name);
	printf("Employee ID : %d",(*(*ptr+1))->id);
	return 0;
}
