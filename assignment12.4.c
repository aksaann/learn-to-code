#include<stdio.h>                                                              
                                                                                

                                                                                
void main()                                                                     
{                                                                               
  int identity_matrix[10][10];                                             
  int i,j, rows, columns;                                                       
                                                                                
  printf("\nEnter order of the matrix : ");                                              
  scanf("%d%d", &rows,&columns);                                                           
                                                      
                                                                                
  for(i=0;i<rows;i++)                                                           
  {                                                                             
    for(j=0;j<columns;j++)                                                      
    {                                                                           
      if(i==j)                                                                  
      {                                                                         
        identity_matrix[i][j] = 1;                                              
      }                                                                         
      else                                                                      
      {                                                                         
       identity_matrix[i][j] = 0;                                               
      }                                                                         
    }                                                                           
  }                                                                             
  printf("\nIdentity Matrix: \n");                                              
  for(i=0;i<rows;i++)                                                           
  {                                                                             
    for(j=0;j<columns;j++)                                                      
    {                                                                           
      printf("%d\t", identity_matrix[i][j]);                                    
    }                                                                           
    printf("\n");                                                               
  }                                                                             
}  
