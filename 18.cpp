//PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) OPERATOR
#include<stdio.h>
int main()
{
	int a,b,c,M;
	printf("Enter number a ");
	scanf("%d",&a);
	printf("Enter number b ");
	scanf("%d",&b);
	printf("Enter number c ");
	scanf("%d",&c);
	M = a>b?a:b;                      //Using conditional operator to get the higher value of a and b
    M = M>c?M:c;                      //Using the conditional operator for the second time to get the higher value from the previous conditional operator and c
	printf("The largest number is %d",M);
}
