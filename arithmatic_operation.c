#include<stdio.h>
#include<stdlib.h>

void main()
{
    int choice,num1,num2;
    float f1,f2;
    printf("1).Addition\n2).Subtraction\n3).Multiplication\n4).Division\n5).Modulus\n");
    printf("\nenter the choice:");
    scanf("%d",&choice);
    printf("Enter number num1 =");
    scanf("%d",&num1);
    printf("Enter number num2 =");
    scanf("%d",&num2);
    f1=(float)num1;
    f2=(float)num2;
    switch(choice)
    {
    case 1:
          printf("Addition of two numbers=%d+%d=%d",num1,num2,num1+num2);
          break;
    case 2:

          printf("Subtraction of two numbers=%d-%d=%d",num1,num2,num1-num2);
          break;
    case 3:

          printf("Multiplication of two numbers=%d*%d=%d",num1,num2,num1*num2);
          break;
    case 4:

          printf("Division of two numbers=%f/%f=%d",f1,f2,f1/f2);
          break;
    case 5:

          printf("Modulus of two numbers=%d%%%d=%d",num1,num2,num1%num2);
          break;


    }
}

