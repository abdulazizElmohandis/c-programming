#include <stdio.h>



void main(void){

int size;
printf("\nEnter size of array:");
scanf("%d", &size);

int arr[size];

for(int i = 0; i < size; i++){
    printf("\nElement %d = ", i);
    scanf("%d", &arr[i]);
}

bubblesort(arr, size);/*arr is a pointer*/
}


void bubblesort(int arr[], int size){
    for(int i = 0; i < size; i++){

        for(int j = 0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                /*swapping*/
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }

    }

    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);

    }
}
