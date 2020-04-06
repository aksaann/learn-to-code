#include <stdio.h>

int main()
{
    int basic_salary;
    printf("Enter basic salary: ");
    scanf("%d", &basic_salary);
    
    double da=(.1*basic_salary);
    double ta=(.12*basic_salary);
    double net_salary=(basic_salary+da+ta);
    printf("Net salary: %f", net_salary);

    return 0;
}
