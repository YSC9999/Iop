#include<stdio.h>
int main()
{
	 int n,a,b;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 a=A[0];
	 b=A[1];
	 
	 for(int s=0;s<n;s++)
   {
   	    if(A[s]>a)
   	    {
   	    	a=A[s];
		}
		
		else if(A[s]<a&&A[s]>b)
		{
			b=A[s];
		}
   }
   
   printf("Numberr of largest number is %d\n",a);
   printf("Numberr of second largest number is %d",b);
	 
}
