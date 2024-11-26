#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the number ");
	scanf("%d",&n);
	k = n*(n+1)*((2*n)+1)/6;
	printf("Sum of the squares is %d",k);
}
