/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    float hindi,english,maths,science,socialscience,marks;
    printf("Enter your makrs for respective subjects out of 20 ");
    printf("\n""Hindi english  Maths  Science social science ");
    scanf("%f %f %f %f %f",&hindi,&english,&maths,&science,&socialscience);
    marks = hindi + english + maths + science + socialscience;
     printf("Total marks obtained form 100 is %f",marks);
    if(marks>=33)
    {
        printf("\n Congratulations! You are pass");

    }
    else{
        printf("\n Sorry! you are failed");
    }
    return 0;
}