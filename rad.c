#include<stdio.h>
int main()
{
    float r,d,c,a;
    printf("enter radius:\n",r);
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("diameter = %f\n",d);
    printf("circumference = %f\n",c);
    printf("area = %f\n",a);
    return 0;
}