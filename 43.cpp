#include<stdio.h>
int main()
{
	double c,s;
	printf("Enter the sales price ");
	scanf("%lf",&s);
	if( s>=0 && s<500 )
	{
		c = s*5/100;
	}
	else if( s>=500 && s<2000 )
	{
		c = 35;
		c = c+s*10/100;
	}
	else if( s>=2000 && s<5000)
	{
		c = 185;
		c = c+s*12/100;
	}
	else
	{
		c = s/8;
	}
	printf("The commision is %lf",c);
}
