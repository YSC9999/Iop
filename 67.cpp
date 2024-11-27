#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	printf("Please enter the matrix A\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Please enter the matrix B\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The matrix C is \n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = a[i][j] - b[i][j];
			printf("%d\n",c[i][j]);
		}
	}
	
}
