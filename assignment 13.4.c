#include <stdio.h> 
int main() {
	int a[10][10];
	int i, j, row, column, flag = 1;
 
	printf("Enter the dimensions of the matrix: ");
	scanf("%d %d", &row, &column);
	printf("Enter the elements to the matrix\n");
 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			if (i==j && a[i][j] != 1)
			{
				flag = 0;
				break;
			}
			else if(i!=j && a[j][i] != 0)
			{
				flag = 0;
				break;
			}
		}	
	}
	if (flag == 1 )
		printf("It is an identity matrix \n");
	else
		printf("It is not an identity matrix \n");
	return 0;
}