#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the Number ");
	scanf("%d",&n);
	for(int i=1; i<101; i++)
	{
		k=n*i;
		printf("%d x %d = %d \n",n,i,k);
	}
}
