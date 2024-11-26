#include<stdio.h>
int main()
{
	int k;
	double n=1;
	double sum=0;
	printf("Enter the number ");
	scanf("%d",&k);
	for(double i=1;i<=k;i++)
	{
		n*=i;
		sum= sum + i/n;
	}
	printf("%lf",sum);
}
