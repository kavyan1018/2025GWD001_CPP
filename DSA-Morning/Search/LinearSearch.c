#include<stdio.h>
#include<conio.h>

void main(){

    int arr[100], i, n, key,  found = 0;

    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("\n Enter the Elements in array :");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    printf("\n Enter the value to Search :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("\n the %d Element Found in the array !", key);
    }
    else{
        printf("\n Element not found !");
    }
}