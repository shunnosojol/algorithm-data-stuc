#include<stdio.h>

void swap(int *number1, int *number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

void selectionSort(int arr[], int n){
    int i, j, min;

    for(i=0; i < n-1 ; i++){
        min = i;
        for(j = i+1; j< n; j++){
            if (arr[j] < arr[min]){
                min =j;
            }

        swap(&arr[min], &arr[i]);
        }
    }
}


void printArray(int arr[], int size){
    int i;
    for (i =0; i< size ; i++){
        print("%d", arr[i]);
    }
}

int
