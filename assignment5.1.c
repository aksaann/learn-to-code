#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", & age);
    if(age>=60){
      printf("Pension amount is Rs.10,000");
      
    }else if (age>=50){
        printf("Pension amount is Rs.5000");
    
    }else{
        printf("No pension");
    }
    return 0;
}