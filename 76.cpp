#include<stdio.h>
int OE(int n)
{
	if(n%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
}

int main()
{
	int N;
	printf("Enter the number to be checked ");
	scanf("%d",&N);
	
	return OE(N);
}
