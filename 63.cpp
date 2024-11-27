#include<stdio.h>
int main()
{
	int a[3][3];
	int max,min;
	
	printf("Please enter the matrix\n");
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	max=a[0][0];
	min=a[0][0];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
			}
			else if(a[i][j]<=min)
			{
				min=a[i][j];
			}
		}
	}
	
	printf("Maximum number is %d\n",max);
	printf("Minimum number is %d",min);
	
}
