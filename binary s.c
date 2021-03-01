#include<stdio.h>

int binarySearch(int arr[], int l, int h, int x ){
    while (l <= h){
        int m = (l+(h-1))/2; //mid point

        //if x is in middle
        if(arr[m] == x)
            return m;
        //if x is grater, ignore left side
        if (arr[m] < x)
            l = m+1;
        //if x is less, ignore right side
        else
            h = m-1;
    }
    return -1;
}

int main(void){
    int arr[] = {1,3,5,7,9,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;
    int result = binarySearch(arr, 0, n-1, key);

    (result == -1) ? printf("Element is not present in the array")
                      : printf("Element is present at index %d", result);

    return 0;
}
