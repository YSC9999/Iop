//PROGRAM TO CALCULATE GROSS SALARY
#include<stdio.h>
int main()
{
	int s,b,v,l,x;
	printf("Enter your salary\n");                  //Parameters recieved and deducted from a employee
	scanf("%d",&s);
	printf("Enter your bonuses\n");
	scanf("%d",&b);
	printf("Enter your vacational deducts\n");
	scanf("%d",&v);
	printf("Enter the number of leaves\n");
	scanf("%d",&l);
	x=s+b-v-l*1000;                                 //arithmatic operator to calculate gross salary
	printf("Your Gross Salary is %d",x);
	return 0;
}
