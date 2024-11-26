#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter the required condition ");
	scanf("%d%c%d",&a,&c,&b);
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
