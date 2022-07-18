#include<stdio.h>
int main()
{
   int month;
   printf("Enter a month num to check between 1 to 12 ");
   scanf("%d",&month);

    if(month==2)
    {
        printf("\n The entered month has 28 days");

    }
    else if (month==1 || month==3 ||month==5 ||month==7 ||month==8 || month==8 ||month==10 ||month==12)
        printf("The month has 31 days");
    else
    printf("The month has 30 days");
   
    return 0;
}