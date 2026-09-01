#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
} 

int partition(int arr[], int low, int high){

    int pivot = arr[high];
    int i = low - 1; 

    for (int j = low; j < high; j++)
    {
        if(arr[j] < pivot){

            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    // put pivot in its correct position
    swap(&arr[i + 1], &arr[high]);

    return i + 1;
}

int QuickSort(int arr[], int low, int high){

    if(low < high){

        // find pivot position
        int pi = partition(arr, low, high);

        // seft side 
        QuickSort(arr, low , pi - 1);

        // right side
        QuickSort(arr, pi + 1, high);
    }

}

int main(){


    int arr[] = {20, 2, 9, 7, 12, 15, 3, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\n Before Sorting !\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    
    // function calling 
    QuickSort(arr, 0 , n - 1);

    printf("\n After Sorting !\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

}