#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value for the quadratic equation for a,b & c ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("quadratic equation are real & distinct");
    }
    if(d==0)
    {
        printf("quadratic equation are real & equal");
    }
    if(d<0)
    {
        printf("quadratic equation is imaginary ");
    }
    return 0;
}