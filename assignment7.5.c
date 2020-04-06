#include <stdio.h>

int main()
{
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);
    if (num>0)
    printf("The given number is positive!");
    else if (num<0)
    printf("The given number is negative!");
    else
    printf("The number is zero!");
    
return 0;
    
    
}