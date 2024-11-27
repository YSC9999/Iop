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
	 
	 for(int k=0;k<n;k++)
	 {
	 	a[k]=a[k]+b[k];
	 	b[k]=a[k]-b[k];
	 	a[k]=a[k]-b[k];
	 }
	 
	 printf("The integers of array a\n");
	 
	 for(int p=0;p<n;p++)
	 {
	 	printf("%d\n",a[p]);
	 }
	 
	 printf("The integers of array b\n");
	 
	 for(int k=0;k<n;k++)
	 {
	 	printf("%d\n",b[k]);
	 }
	 
}
