#include<stdio.h>
#include<math.h>
void main()
{
    int n,m,r,x,rem,res=0,base,exponent,count=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    m=n;
    x=n;
    //printf("%d",m);
    while(m!=0)
    {
        //m=n;
        r=m%10;
        count++;
        m=m/10;     

    }
    //printf("coun=%d",coun);
    while(n!=0)
    {
        rem=n%10;
        //printf("count=%d",coun);
        base=rem;
        exponent=count;
        //printf("b=%d\n exp=%d ",base,exponent);
        res+=round(pow(base,exponent));
        //printf("res=%d",res);
        n=n/10;
        
    }
    //printf("%d\n",res);

    if(x==res)
    {
        printf("%d amstrong",res);
    }
    

}