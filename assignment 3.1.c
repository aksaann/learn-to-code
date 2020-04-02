#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter name: ");
    fgets(name, 20, stdin);
    
    double mark1;
    printf("Enter Mark 1: ");
    scanf("%lf", &mark1);
    double mark2;
    printf("Enter Mark 2:");
    scanf("%lf", &mark2);
    double mark3;
    printf("Enter Mark 3:");
    scanf("%lf", &mark3);
    double mark4;
    printf("Enter  Mark 4:");
    scanf("%lf", &mark4);
    double mark5;
    printf("Enter Mark 5:");
    scanf("%lf", &mark5);
    
    printf("Name is %s ", name);
    float Average;
    Average = (mark1+mark2+mark3+mark4+mark5)/5;
    printf("Average marks = %f \n ", Average);
    
   
    return 0;
}