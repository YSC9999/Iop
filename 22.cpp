#include<stdio.h>
int main()
{
	int n;
	long long int c=1;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n>0)
	{
		c*=n;
		n--;
	}
	printf("%d",c);
}
