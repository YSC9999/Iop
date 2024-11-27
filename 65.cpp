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
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d\n",a[j][i]);
		}
	}
}
