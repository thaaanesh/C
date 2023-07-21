#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter the string :\n");
    scanf("%[^\n]s",&str);
    //printf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
    if((str[i]>='a' && str[i]<='z')||(str[i]==' '))
    {
        printf("%c",str[i]);
    }
    }


}