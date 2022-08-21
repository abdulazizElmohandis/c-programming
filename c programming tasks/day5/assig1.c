#include <stdio.h>


int max(int arr[]);
int min(int arr[]);

void main(void){

    int arr[10];
    printf("Enter 10 numbers:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    printf("maximum is: %d, minimum is: %d", max(arr), min(arr));
}

int max(int arr[]){

    int max = arr[0];

    for(int i = 0; i < 10; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[]){

    int min = arr[0];

    for(int i = 0; i < 10; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }


    return min;
}
