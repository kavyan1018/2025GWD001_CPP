#include<stdio.h>
#include<conio.h>

void main(){

    int arr[5] = {64, 25, 12, 22, 11};
    int i, j, temp, min;

    for(i = 0; i < 5; i++){
        min = i;

        for(j = i + 1; j < 5; j++){

            if(arr[j] < arr[min]){   // 25 < 64
                min = j;
            }
        }
        
        // swap
        temp = arr[i];     // 64
        arr[i] = arr[min];  // 11
        arr[min] = temp;  // 64
    }

    printf("Sorted array: \n");
    for(i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}