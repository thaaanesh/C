#include<stdio.h>
int natural(int n)
{
    if(n<=1)
    return 1;
    return n+natural(n-1);
}
int main()
{
    int sum,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    sum=natural(n);
    printf("sum=%d",sum);

}