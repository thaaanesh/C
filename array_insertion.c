#include<stdio.h>

void main()
{
    int position,value;
    int arr_1[5] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++)
        printf("%d ",arr_1[i]);
    printf("\nEnter the position and the new value to insert:\n");
    printf("Enter position: ");
    scanf("%d",&position);
    printf("Enter value to insert: ");
    scanf("%d",&value);
    int arr_2[6];

    for(int i = 0;i < 5;i++)
        arr_2[i] = arr_1[i];
    
    for(int i = 5;i >= position;i--)
        arr_2[i] = arr_1[i-1];
    arr_2[position] = value;
    printf("Array with inserted element:\n");
    for(int i = 0;i < 6;i++)
        printf("%d ",arr_2[i]);
}