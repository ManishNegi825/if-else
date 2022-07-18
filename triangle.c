#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of an triangle");
    scanf("%d %d %d",&a, &b, &c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Invalid triangle values");
    }
    return 0;
}