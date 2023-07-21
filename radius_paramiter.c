#include<stdio.h>
#define pi 3.14
int areaofcircle(r)
{
    r=pi*r*r;
    return r;

}
int circum(r) 
{
    int circumfrence=2*pi*r;
    return circumfrence;
}  
int main()
{
    int r,area,circumfrence;
    printf("enter the value of radius=");
    scanf("%d",&r);
    area = areaofcircle(r);
    printf("\narea of the circle=%d\n",area);
    circumfrence=circum(r);
    printf("\ncircumfrence of a circle=%d\n",circumfrence); 
}