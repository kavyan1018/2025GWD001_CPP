#include<stdio.h>


struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

int main(){

    struct Node n1, n2, n3;


    printf("Enter Root :");
    scanf("%d", &n1.data);    
    
    printf("Enter left :");
    scanf("%d", &n2.data);    
    
    printf("Enter Right :");
    scanf("%d", &n3.data);


    n1.left = &n2;
    n1.right = &n3;


    n2.left = NULL;
    n2.right = NULL;

    n3.left = NULL;
    n3.right = NULL;

    printf("\nTree \n");
    printf("       %d\n", n1.data);
    printf("      /   \\\n");
    printf("     %d    %d\n", n2.data, n3.data);
}