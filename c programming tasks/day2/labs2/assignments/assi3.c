#include <stdio.h>

void main(void){
while(1){
	int x,y,z;
	
	printf("\nEnter 3 numbers:\n");
	
	scanf("%d%d%d",&x,&y,&z);
	
	int maximum = x; 
	if(maximum < y){
		maximum = y;
	}
	if(maximum < z){
		maximum = z;
	}
	
	printf("Maximum number is %d:",maximum);
}
}
