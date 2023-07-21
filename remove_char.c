#include <stdio.h>
void main()
{
    char arr1[10];
    printf("Enter the string:");
    for(int i=0;i<10;i++)
    {
        scanf("%c",&arr1[i]);
        printf("%c",arr1[i]);
    }
    for(int i=0;i<10;i++)
    {
        while(!(arr1[i]>='a'&&arr1[i]<='z')&&(arr1[i]>='A'&&arr1[i]<='Z')||(arr1[i]='\0'))
        {
            arr1[i]=arr1[i+1];

        }
    }
    for(int i=0;i<10;i++ )
    {
        printf("%c",arr1[i]);
    }
}
   
    