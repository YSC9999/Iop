#include<stdio.h>
int main()
{
	 int n;
	 int o=0;
	 int e=0;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 for(int s=0;s<n;s++)
   {
   	    if(A[s]%2==0)
   	    {
   	    	e += 1;
		}
		
		else
		{
			o += 1;
		}
   }
   
   printf("Numberr of odd numbers are %d\n",o);
   printf("Numberr of even numbers are %d",e);
	 
}
