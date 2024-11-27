#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter the number of elements you need for the array ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the element %d ",i);
		scanf("%d",&a[i]);
	}
	
	printf("The array is ");
	
	printf("[");
	
	for(int i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	printf("\t]\n");
	
	printf("Enter the element you want ");
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("a[%d] = %d\n",i,a[i]);
		}
	}
	
}
