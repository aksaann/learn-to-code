#include <stdio.h>
#include <math.h>
int main()
{
    int n,t,temp,sum,rem,digit,count=0;
    printf("enter the number: ");
    scanf("%d", &n);
    t=n; temp=n;
    while(n!=0)
    {
        digit=n%10;
        count=count+1;
        n=n/10;
        
    }
    while(t!=0)
    {
        rem=t%10;
        sum=sum+pow(rem,count);
        t=t/10;
    }
    
    if(sum==temp)
    
       printf("%d is amstrong number", temp);
    
    else
    
       printf("%d is not an amstrong number", temp);
    
    
    return 0;
}
