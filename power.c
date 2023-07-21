#include<math.h>
#include<stdio.h>
void main()
{
    int base,exp,res=0;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exp);
    res=round(pow(base, exp)); 
    printf("The pow of %d and %d : %d",base,exp,res);

}

