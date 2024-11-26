#include<stdio.h>

int main()
{
	
   int n,o,m;
   int i=0;
   int s=0;
   
   printf("Enter the number ");
   scanf("%d",&n);	
   
   o=n;
   
   while(n>0)
   {
   	    n = n / 10;
   	    i++;
   }
   
   n=o;
   
   int A[i];
   
   for(int k=0;k<i;k++)
   {
   		A[k] = n % 10;
   		n = n / 10;
   }
   
   printf("The reversed number is ");
   
   for(int r=0;r<i;r++)
   {
   	    printf("%d",A[r]);
   }
}
