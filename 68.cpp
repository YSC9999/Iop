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
			scanf("%d\a",&a[i][j]);
		}
	}
	
	printf("Please enter the matrix B\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d\a",&b[i][j]);
		}
	}
	
	printf("The matrix C is \n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j];
			printf("%d\a\n",c[i][j]);
		}
	}
	
}
