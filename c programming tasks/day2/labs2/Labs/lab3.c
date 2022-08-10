#include <stdio.h>

void main(void){
while(1){
	int x;

	printf("Enter a number:\n");

	scanf("%d", &x);

	if(x % 2 == 0){
		printf("Number is even\n");
	}else{
		printf("Number is odd\n");
	}


	}
}