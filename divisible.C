#include<stdio.h>
int main()
{
    int num;
    printf("enter a number ");
    scanf("%d",&num);
    num%5==0?printf("The entered number is divisible by 5"):printf("The entered number is not divisible by 5");
    return 0;
}
