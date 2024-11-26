#include<stdio.h>
int main()
{
	int n,k,s,o,e;
	printf("Enter the number ");
	scanf("%d",&n);
	if(n%2 == 1)                    
	{
		k = (n+1)/2;
		o = k*k;
		e = k*(k-1);
		printf("The sum of odd numbers is %d \n The sum of even numbers is %d",o,e);
	}
	else                            
	{
		k = n/2;
		o = k*k;
		e = k*(k+1);
		printf("The sum of odd numbers is %d \n The sum of even numbers is %d",o,e);
	}
	return 0;
}
