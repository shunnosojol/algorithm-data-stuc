#include<stdio.h>

void swap(int *numberone, int *numbertwo){
    int temp = *numberone;
    *numberone = *numbertwo;
    *numbertwo = temp;
}

void bubbleSort( int arr[], int n){
    int i, j;
    for(i = 0; i <n-1 ; i++){
        for(j = 0 ; j < n-i-1 ; j ++){
            if(arr[j]> arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void printResult(int arr[], int n){
    int i;
    for (i =0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main(){
    int arr[] = {12, 2,1,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printResult(arr, n);
}
