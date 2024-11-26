//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a ");
	scanf("%d",&a);
	printf("Enter value of b ");
	scanf("%d",&b);
	printf("Enter value of c ");
	scanf("%d",&c);
	if ((a>b)&&(a>c))                               // we have used the AND logical operator
	{                                               // for the if condition to check wether a is max
		printf("The largest number is a = %d",a);   // if not then in else condition it would undergo
	}                                               // if/else condition again
	else
	{
		if (b>c)
		{
			printf("The largest number is b = %d",b);
		}
		else
		{
			printf("The largest number is c = %d",c);
		}
	}
}
