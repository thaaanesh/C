#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int temp=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    printf("%d",temp);

}