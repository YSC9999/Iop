#include<stdio.h>
int main()
{
	char s ='A';
	int d,n;
	printf("Insert number of lines wanted ");
	scanf("%d",&d);
	n=d;
	for(int i=1;i<=d;i++)
	{
		for(int j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	n=d;
	
	for(int i=1;i<=d-1;i++)
	{
		for(int j=0;j<=i-1;j++)
		{
			printf(" ");
		}
		for(int j=n-i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
