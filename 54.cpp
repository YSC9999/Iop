#include<stdio.h>
int main()
{
	 int n;
	 int s=0;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 for(int r=0;r<n;r++)
	 {
	 	s = s + A[r];
	 }
	 
	 printf("The sum is %d",s);
	 
}
