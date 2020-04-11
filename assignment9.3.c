#include <stdio.h>
#include <string.h>

int main()
{
   char mainstring[50] = "program to find substring of a string";
   char substring[30] = "to find";
   char *result;
   result = strstr(mainstring ,substring);
   if(result){
       printf("string is present");
       
   }else{
       printf("string is not present");
       
   }

    return 0;
}
