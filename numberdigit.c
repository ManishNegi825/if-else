#include<stdio.h>
int main()
{
    int value;
    printf("Enter a value ");
    scanf("%d",&value);
    if(value>=65 && value<=90)
    
        printf("entered value is uppercase");
    
    else if(value>=97 && value<=122)
    
        printf("entered value is lower case");
    
    else if(value>=0 && value<=9)
    printf("Entered value is a digit");
    else
        printf("its a special charcter");

    return 0;
}
