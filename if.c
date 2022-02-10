#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n",age);
    scanf("%d",&age);
    printf("your entered age is %d\n",age);
    if (age>=18)
    {
        printf("u can vote");
    }
    else if (age>=12)
    {
        printf("u can vote for kids");
    }
    else
    {
        printf("u cannot vote");
    }
    return 0;
}