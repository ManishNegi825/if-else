#include<stdio.h>
int main()
{
    int num;
    printf("Enter a num ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("enter number is positive ");
    }
    if(num==0)
    {
        printf("enter number is zero ");
    }
    if(num<0)
    {
        printf("Entered number is negative");
    }
    return 0;
}