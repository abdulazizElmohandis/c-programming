#include <stdio.h>

void main(void){

int salary, hours;

printf("please enter your working hours: ");

scanf("%d", &hours);

salary = 50 * hours;

if(hours < 40){
salary -= (0.1* salary);	
}

printf("your salary is: %d", salary);
}