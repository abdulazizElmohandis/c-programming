#include <stdio.h>

void main(void){

float grade;

printf("enter ur grade: ");

scanf("%f",&grade);

if(grade >= 85){
	printf("\nur rating is Ecellent");
}
else if(grade >= 75){
	printf("\nur rating is Very good");
}
else if(grade >= 65){
	printf("\nur rating is Good");
}
else if(grade >= 50){
	printf("\nur rating is Normal");
}
else
	printf("\nur rating is Failed");


}