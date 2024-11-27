#include<stdio.h>
int func(int a,int b)
{
	a=a+b;                         
	b=a-b;
	a=a-b;
	printf("a is %d\nb is %d",a,b);
}

int main()
{
	int x,y;
	printf("Enter value of a ");
	scanf("%d",&x);
	printf("Enter value of b ");
	scanf("%d",&y);
	func(x,y);
}
