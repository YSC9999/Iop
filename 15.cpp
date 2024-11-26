#include<stdio.h>
int main()
{
	int m,p,c,b,e,avg;
	printf("Enter your maths marks ");
	scanf("%d",&m);
	printf("Enter your physics marks ");
	scanf("%d",&p);
	printf("Enter your chemistry marks ");
	scanf("%d",&c);
	printf("Enter your biology marks ");
	scanf("%d",&b);
	printf("Enter your english marks ");
	scanf("%d",&e);
	avg=(m+p+c+b+e)/5;
	printf("Average of all the five subjects is %d",avg);
}
