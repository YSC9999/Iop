#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of integers needed ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int c[n];
	
	printf("Enter the integers of array a\n");
	
	for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 
	 printf("Enter the integers of array b\n");
	 
	 for(int j=0;j<n;j++)
	 {
	 	scanf("%d",&b[j]);
	 }
	 
	 printf("The corresponding sum of both arrays are \n");
	 
	 for(int k=0;k<n;k++)
	 {
	 	printf("%d\n",a[k]+b[k]);
	 }
}
