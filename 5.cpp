//PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number a ");    //Taking input of those two variables
	scanf("%d",&a);
	printf("Enter number b ");
	scanf("%d",&b);              
	c=a;                          //assigning the value of a to c
	a=b;                          //assigning the value of b to a now that value of a is safe with variable c
	b=c;                          //reassigning the value of a to b through c
	printf("a is %d\n",a);
	printf("b is %d",b);
	return 0;
} 
