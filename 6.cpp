//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number a ");     //Input of the two variables to be taken here
	scanf("%d",&a);
	printf("Enter number b ");
	scanf("%d",&b);
	a=a+b;                         //Basically the numbers are shuffeled in a logical manner using arithmatic operators
	b=a-b;
	a=a-b;
	printf("a is %d\n",a);
	printf("b is %d",b);
	return 0;
}
