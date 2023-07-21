#include<stdio.h>
#define passmark 35
void main()
{
    int i,marks;
    for(i=1;i<=5;i++)
    {
        printf("\nenter the mark of student %d=",i);
        scanf("%d",&marks);
        if(marks>=passmark)
        {
            printf("\nyou pass in the exam\n");
        }
        else
        {
            printf("\nyou fail in the exam\n");
        }
    }

}
