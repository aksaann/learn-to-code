#include <stdio.h>

int main()
{
    
    double P;
    printf("Enter principle: ");
    scanf("%lf", &P);
    double R;
    printf("Enter rate: ");
    scanf("%lf", &R);
    double T;
    printf("Enter time: ");
    scanf("%lf", &T);
    float simple_interest;
    simple_interest = (P*R*T)/100;
    printf("Simple interest is %f ", simple_interest);
    
    

    return 0;
}