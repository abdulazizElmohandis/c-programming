#include <stdio.h>
#include<stdbool.h> /*bool library*/
void main(void){

	
	int arr[10];
	int x;
	bool found = 0;
		
	printf("Enter 10 numbers:\n");
	
	
	
	for(int i = 0; i < 10; i++){ /*assigning 10 numbers*/
		
		printf("\nEnter number %d:", i);
		scanf("%d", &arr[i]);
	
	}
	
	printf("\nEnter number to search");
	
	scanf("%d", &x);
	
	for(int i = 0; i < 10; i++){ /*linear search*/
		if(arr[i] == x){
			printf("\nvalue is in element no. %d",i);
			found = 1;
		}
	
	}
	if(!found){ 
		printf("\nNumber not found!");
	}
	
	}
