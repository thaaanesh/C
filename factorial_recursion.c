#include<stdio.h>
int factorial(int n)
{
    if(n<=1)
    return n;
    return n*factorial(n-1);
}
int main()
{
    int fact,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial=%d",fact);
}