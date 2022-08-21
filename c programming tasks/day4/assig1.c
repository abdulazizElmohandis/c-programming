#include <stdio.h>
int n1,n2,n3,n4;

int max();

void main(void){

printf("\nEnter number:");
scanf("%d", &n1);

printf("\nEnter number:");
scanf("%d", &n2);

printf("\nEnter number:");
scanf("%d", &n3);

printf("\nEnter number:");
scanf("%d", &n4);

printf("\nThe max is: %d, the min is: %d", max(), min());


}

int max(){

    int max = n1;

    if(n2 > max){
        max = n2;
    }

    if(n3 > max){
        max = n3;
    }

    if(n4 > max){
        max = n4;
    }

    return max;
}

int min(){

    int min = n1;

    if(n2 < min){
        min = n2;
    }

    if(n3 < min){
        min = n3;
    }

    if(n4 < min){
        min = n4;
    }

    return min;
}
