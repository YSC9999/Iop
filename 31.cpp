#include<stdio.h>
int main()
{
	int n,r;
	int s=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n !=0)
	{
		r = n%10;
		s = s+r;
		n = n/10;
	}
	printf("The sum of the digits is %d",s);
}
