#include<stdio.h>
int main()
{
   char value;
   printf("Enter a character to check ");
   scanf("%C",&value);

    if(value>=65 && value<=90)
    {
        printf("\n The entered charcter is a upper case");

    }
    else{
        printf("\n The entered charcter is a lower case");
    }
    return 0;
}