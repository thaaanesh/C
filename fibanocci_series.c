#include<stdio.h>
void main()
{
    int n;
    int t1=0,t2=1;
    int nexterm=t1+t2;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("%d,%d",t1,t2);
    for(int i=3;i<=n;i++)
    {
        printf(",%d",nexterm);
        t1=t2;
        t2=nexterm;
        nexterm=t1+t2;

    }
}