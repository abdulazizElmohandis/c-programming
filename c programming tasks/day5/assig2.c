#include <stdio.h>


int max(int arr[]);
int min(int arr[]);
int passednum(int arr[]);
int avggrade(int arr[]);

void main(void){

    int class1[10] = {53,74,76,37,37,44,57,64,74,32};
    int class2[10] = {83,77,36,17,77,44,37,54,34,54};
    int class3[10] = {83,64,96,97,97,94,67,78,84,92};

    int choosen;
    int *ptr;
    printf(" choose the class:\n type 1 or 2 or 3:");
    scanf("%d", &choosen);


    if(choosen == 1 ){
        ptr = class1;
    }
    else if(choosen == 2){
        ptr = class2;
    }else if(choosen == 3){
        ptr = class3;
    }

    printf("\nHighest grade is: %d, lowest grade is: %d", max(ptr), min(ptr));
    printf("\nNumber of passed students is: %d\nNumber of failed student is: %d", passednum(ptr), (10 - passednum(ptr)));
    printf("\nAverage grade is: %d", avggrade(ptr));

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


int passednum(int arr[]){
    int c =0;
     for(int i = 0; i < 10; i++){
        if(arr[i] >= 50 ){
            c++;
        }
    }

    return c;
}

int avggrade(int arr[]){
    int sum =0;
     for(int i = 0; i < 10; i++){
        sum += arr[i];
    }

    float avg = sum / 10;

    return avg;
}
