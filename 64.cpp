#include<stdio.h>
int main()
{
	int a[3][3];
	int r1=0,r2=0,r3=0;
	
	printf("Please enter the matrix\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		for(int j=0;j<3;j++)
		{
			r1=r1+a[0][j];
		}
		for(int j=0;j<3;j++)
		{
			r2=r2+a[1][j];
		}
		for(int j=0;j<3;j++)
		{
			r3=r3+a[2][j];
		}
		
		printf("Sum of elements of row 1:%d\n",r1);
		printf("Sum of elements of row 2:%d\n",r2);
		printf("Sum of elements of row 3:%d\n",r3);
		
}
