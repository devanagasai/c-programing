#include<stdio.h>
int main()
{
    int m;
    printf("grade\n");
    printf("marks of the student\n");
    scanf("%d",&m);
    if(m>=90)
    {
        printf("his grade is A");
    }
    else if(m>=75)
    {
        printf("his grade is B");
    }
    else if(m>=50)
    {
        printf("his grade is C");
    }
    else if(m>=30)
    {
        printf("his grade is D");
    }
    else if(m<30)
    {
        printf("fail");
    }
    return 0;
}