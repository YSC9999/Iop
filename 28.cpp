#include<stdio.h>
int main()
{
	int n,r,k;
	int s=0;
	printf("Enter the number ");
	scanf("%d",&n);
	k = n;
	while(n !=0)
	{
		r = n%10;
		s = s+r*r*r;
		n = n/10;
	}
	printf("%d\n",s);
	printf("%d\n",n);
	if(k==s)
	{
		printf("The given number is an armstrong number");
	}
	else
	{
	    printf("The given number is not an armstrong number");	
	}
}
