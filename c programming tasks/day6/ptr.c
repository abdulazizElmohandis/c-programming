#include <stdio.h>

void func(int *a, int *b);

void main(void){

int x,y;

printf("\nEnter 1st number:");

scanf(" %d", &x);
printf("\nEnter 2nd number:");
scanf(" %d", &y);

func(&x, &y);

}	

void func(int *a, int *b){
	int sum = *a + *b;
	printf("the sum is: %d",sum);
}