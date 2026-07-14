#include <stdio.h>

int main()
{

    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;

    for (i = 0; i < size - 1; i++)     // outer loop -> one element is plased in its correct position
    {
                  //    5  - 0  - 1  -> 4
        for (j = 0; j < size - i - 1; j++)
        {
                // 5  > (0+1) = 2 v = 3       5 > 3 
            if(arr[j] > arr[j + 1]){

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n Sorted Array :");
    for (i = 0; i < size; i++)
    {   
        printf("%d ", arr[i]);
    }
    
}