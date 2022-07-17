#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    num=num/100;
    if(num>=1 && num<=9)
    {
    printf("This is a three digit number");
    }
    else
    {
        printf("Not a three digit number ");
    }
    return 0;
}