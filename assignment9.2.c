#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter the string:");
    fgets(str,20,stdin);
    int dcount=0,acount=0,ccount=-1,i;
    for(i=0;str[i]!=0;i++){
        
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else
            str[i]=str[i]-32;
    }
    printf("converted string is:%s",str);

    return 0;
}
