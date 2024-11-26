#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number (only odd) ");
	scanf("%d",&n);
	for(int i=1;i<n+1;i=i+2)
	{
		printf("%d \n",i);
	}
}
