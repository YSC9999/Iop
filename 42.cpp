#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter a number ");
	scanf("%d",&n);
	x = 1;
	if(n==1)
	{
		printf("The given number is neither composite nor prime.");
	}
	else
	{
	for(int i=2; i < (n/2)+1; i++)
	{
		if(n%i == 0)
		{
			x = 0;
			break;
		}
		else
		{
			x = 1;
		}
	}
	if(x==1)
	{
		printf("The given number is a prime number.");
	}
	else
	{
		printf("The given number is a composite number.");
	}
	}
}
