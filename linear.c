#include<stdio.h>

int linearSearch(int arr[], int n , int x ){
    int i;
    for(i =0; i <n ;i++){
        if(arr[i] == x)
            return i;
    }
    i = -1;
    return i;
}

int main(void){
    int arr[] = {0, 1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int result = linearSearch(arr, n, key);

    (result == -1) ? printf(" element is not present in the array")
                    : printf("element is at index %d", result);
}
