#include<stdio.h>
int main()
{
    int value;
    printf("Enter a number ");
    scanf("%d",&value);
    if(value%7==0)
    {
        printf("given number is divisible by 7");
    }
    if(value%3==0){
        printf("  Divisble by 3");
    }
    else{
        printf("Not divisble by 7 and 3");
    }
    return 0;
}