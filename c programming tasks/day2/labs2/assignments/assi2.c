#include <stdio.h>

void main(void){
while(1){
	int pass, id;
	
	/*users ID: ahmed = 1234, mohammed = , amr = 789  */ 
	
	/*passwords*/
	int ahmed_Pass = 12340, mohammed_Pass = 4560, amr_Pass = 7890 ;
	
	printf("\nEnter ur ID:");
	
	scanf("%d",&id);
	
	
	/*checking for IDs & passwords*/
	switch(id){
	case 1234:
		printf("\nEnter ur password:");
		scanf("%d",&pass);
		if(pass == ahmed_Pass)
			printf("Welcome Ahmed");
		else
			printf("password is not correct");
		
	break;
		
	case 456:
		printf("\nEnter ur password:");
		scanf("%d",&pass);
		if(pass == mohammed_Pass)
			printf("Welcome Mohammed");
		else
			printf("password is not correct");
		
	break;
	
	case 789:
		printf("\nEnter ur password:");
		scanf("%d",&pass);
		if(pass == amr_Pass)
			printf("Welcome amr");
		else
			printf("password is not correct");
	break;
	
	default:
		printf("\nId is wrong!");
	
	}
	
}
	
	
	}
