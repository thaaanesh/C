#include<stdio.h>
#include<string.h>
void main()
{
    /*char str[]="welcome friends";
    char str1[50];
    printf("%d\n",strlen(str));
    int n=15;
    printf("%d",n/2);
    int i=15;
        for(int j=0;j<=15;j++)
        {
            str1[j]=str[i];
            i--;
            printf("%c",str1[j]);

        }*/
    int len;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",&str);
    printf("%s\n",str);
    len=strlen(str);
    char str1[len];
    printf("%d\n",len);
    int j=len-1;
    for(int i=0;i<len;i++)
    {
        str1[i]=str[j];
        j--;
        printf("%c",str1[i]);
    }
   
}
