#include <stdio.h>
int main()
{
  char str[50];
  char sub[30];
  int i, j=0, k;
  printf("Enter the string: ");
  fgets(str, 50, stdin);
  
  printf("Enter the Substring: ");
  fgets(sub, 30, stdin);
  for(i=0; str[i]; i++)
  {
    if(str[i] == sub[j])
    {
      for(k=i, j=0; str[k] && sub[j]; j++, k++)
        if(str[k]!=sub[j])
            break;
       if(!sub[j]){
        printf("Substring");
        return 0;}
    }
  }
  printf("Not a substring");
 return 0;
}
