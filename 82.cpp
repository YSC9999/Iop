#include<stdio.h>

int factorial(int n)
{
	long long int c=1;
	while(n>0)
	{
		c*=n;
		n--;
	}
	return c;
}

int main()
{
	int n,r,nCr,p,x;
	
	printf("Enter the value of n ");
	scanf("%d",&n);
	printf("Enter the value of r ");
	scanf("%d",&r);
	x=n-r;
	
	n = factorial(n);
	r = factorial(r);
	p = factorial(x);
	nCr = n/(r*p);
	printf("The value of nCr is %d ",nCr);
}
