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
		for(int j=2;j<=i;j++)
		{
			printf("0");
		}
		printf("1");
		for(int j=n-i;j>=1;j--)
		{
			printf("0");
		}
		printf("\n");
	}
}
