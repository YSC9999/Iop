#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("The factors are ");
	for(int i=1; i<n+1; i++)
	{
		if(n%i == 0)
		{
			printf("%d,",i);
		}
	}
}
