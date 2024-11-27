#include<stdio.h>
int main()
{
	 int n,a;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 printf("which element do you want ");
	 scanf("%d",&a);
	 printf("The value of A[%d] is %d",a-1,A[a-1]);
	 
}
