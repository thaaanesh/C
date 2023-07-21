#include<stdio.h>
int areaOfRect(int length, int breadth)
{
    int area;
    area=length*breadth;
    return area;

}
int main()
    {
        int l=19,b=10;
        int area=areaOfRect(l,b);
        printf("area=%d",area);
        
        
     }
