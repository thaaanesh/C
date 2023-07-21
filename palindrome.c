#include<stdio.h>
#include<string.h>
void main()
{
    int n,org,rev=0,rem;
    char str;
    printf("Enter the n value:");
    scanf("%d",&n);
    printf("Enter the string:");
    scanf("%s",&str);
    /*org=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    //printf("%d",rev);
    if(rev==org)
    {
        printf("org=%d\nrev=%d\n",org,rev);
        printf("palindrome");
    }*/
    org=str;
    rem=strrev(str);
    if(org==rem)
    {
        printf("palindrome");
    }


}