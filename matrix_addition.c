#include<stdio.h>
void main()
{
    int n,m;
    printf("enter the value of n and m:");
    scanf("%d %d",&n,&m);
    int arr1[n][m];
    int arr2[n][m];
    int arr3[n][m];
    printf("Enter the matrix 1:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the matrix 2:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr3[i][j]=0;
            for(int k=0;k<m;k++)
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];

            }
            printf("%d ",arr3[i][j]);
        
        }
        printf("\n");
    }
    



}