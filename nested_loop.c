#include<stdio.h>
void main()
{
    int i,j;
    i=1;
    j=1;
    while(i<10)
    {
        while(j<=i)
        {
            printf("%d",j);
            j++;
        }
        i++;
    }
}