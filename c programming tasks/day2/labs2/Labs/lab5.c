#include <stdio.h>

void main(void){
while(1){
	
	int id;
	
	printf("Enter ur ID:\n");
	
	scanf("%d",&id);
	
	switch (id){
		
		case 1234:
			printf("Welcome Ahmed\n");
		
		break;
			
		case 5678:
			printf("Welcome Yussef\n");
		break;
		
		case 1145:
			printf("Welcome Mina\n");
		break;
		
		default:
		
		printf("Wrong ID:\n");
		
	}
	
	
	
	}
}