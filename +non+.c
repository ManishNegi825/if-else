#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Integer value");
    }
    else
    {
        printf("Non integer value");
    }
    return 0;
}