#include<stdio.h>

int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);


    // Insertion Sort Algorithm
    for(int i = 1; i < n; i++){

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){    // 12 > 11
            arr[j + 1] = arr[j];   // j + 1 -> 1
            j--; 
        }
        arr[j + 1] = key;   // arr[0] = 11
    }

    // Print the sorted array
    printf("Sorted array: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}