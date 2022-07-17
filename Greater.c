#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number for comaprision");
    scanf("%d %d",&num1, &num2);
    if(num1>num2)
    {
        printf("Num 1 %d is greater",num1);
    }
    if(num2>num1)
    {
        printf("Num 2 %d is greater",num2);
    }
    if (num1==num2){
        printf("both are equal %d",num1);
    }
    return 0;
}