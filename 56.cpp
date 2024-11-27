#include<stdio.h>
int main()
{
	 int n;
	 int o=0;
	 int e=0;
	 int p=0;
	 
	 printf("Enter the number of integers you need ");
	 scanf("%d",&n);
	 
	 int A[n];
	 
	 for(int i=0;i<n;i++)
	 {
	 	scanf("%d",&A[i]);
	 }
	 
	 for(int s=0;s<n;s++)
   {
   	    if(A[s]<0)
   	    {
   	    	e += 1;
		}
		
		else if(A[s]>0)
		{
			p += 1;
		}
		
		else
		{
			o += 1;
		}
   }
   
   printf("Number of neutral numbers is %d\n",o);
   printf("Number of negative numbers is %d\n",e);
   printf("Number of positive numbers is %d",p); 
	 
}
