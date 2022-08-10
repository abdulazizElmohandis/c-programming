#include <stdio.h>
#include <string.h>
void main(void){

int x, reverse = 0, remaining;  

  
printf("\nEnter number:"); 
   
  scanf("%d",&x);   
  
  while(x != 0)    
  {    
     remaining = x % 10;    /*get last digit*/ 
	 
     reverse = (reverse * 10) + remaining;   
     x /= 10;    /*remove last digit*/ 
  }    
  
  
  printf("\nReversed number: %d",reverse);   



}
