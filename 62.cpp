#include<stdio.h>
int main()
{
	 int n;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 int B[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	 	B[n-i-1]=A[i];
	 }
	 
	 for(int r=0;r<n;r++)
     {
   	    A[r]=B[r];
     }
     
     printf("The reversed array is \n");
     
     for(int r=0;r<n;r++)
     {
   	    printf("%d\n",A[r]);
     }
	 
}
