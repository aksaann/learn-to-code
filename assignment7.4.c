#include <stdio.h>
int main() {
    double n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("The largest number is: %lf", n1);
    else if (n2 >= n3)
        printf("The largest number is: %lf", n2);
    else 
        printf("The largest number is: %lf", n3);

    return 0;
}