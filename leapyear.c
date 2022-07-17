#include<stdio.h>
int main()
{
    int year;
    printf("Enter the value of a year to check ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Entered year is a leap year ");
    }
    else{
        printf("Entered year is not a leap year");
    }
    return 0;

}