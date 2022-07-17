#include<stdio.h>
int main()
{
    float costprice, sellingprice,gain;
    printf("Enter the value of cost price and selling price ");
    scanf("%f %f",&costprice, &sellingprice);
    gain=(sellingprice-costprice)/costprice*100;
    if(gain>0)
    {
        printf("Profit earned of %f%%",gain);
    }
    else{
        printf("Loss earned of %f%%",gain);
    }
    if(gain==0)
    {
        printf("No profit no loss situation ");
    }
    return 0;
}