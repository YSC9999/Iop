#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter the required condition ");
	scanf("%d",&a);
	scanf("%c",&c);
	scanf("%d",&b);
	switch(c)
	{
		case'+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case'-':
			printf("%d - %d = %d",a,b,a-b);
			break;	
		case'/':
			printf("%d / %d = %d",a,b,a/b);
			break;	
		case'*':
			printf("%d * %d = %d",a,b,a*b);
			break;	
	}
}
