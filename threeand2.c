#include<stdio.h>
int main()
{
    int value;
    printf("Enter a number ");
    scanf("%d",&value);
    if(value%3==0 && value%2==0)
    {
        printf("given number is divisible by 3 and 2");
    }
    else{
        printf("Not divisble by 3 and 2");
    }
    return 0;
}