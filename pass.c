#include<stdio.h>
int main()
{
    int n;
    printf("enter 1 if u have passed maths\n",n);
    printf("enter 2 if u have passed science\n",n);
    printf("enter 3 if u have passed both\n",n);
    printf("enter your choice\n",n);
    scanf("%d",&n);
    if(n==3)
    {
        printf("u got prize worth of $45");
    }
    else if(n==1 || n==2)
    {
        printf("u got prize worth of $15");
    }
    else
    {
        printf("u won't get anything");
    }
    return 0;
}