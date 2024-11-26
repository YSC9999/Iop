#include<stdio.h>
int main()
{
	int n,tot,A[100];
	printf("Enter the numbers here\n");
	while(n>=0)
	{
		scanf("%d",&n);
		tot+=n;
	}
	printf("The total is %d",tot);
}
