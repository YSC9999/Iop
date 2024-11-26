#include<stdio.h>
int main()
{
	int n,k;
	int s=0;
	int r=1;
	printf("Enter the number of integers you need from the fibonacci series ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",s);
		k=s;
		s=s+r;
		r=k;
	}
}
