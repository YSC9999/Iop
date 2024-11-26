#include<stdio.h>
int main()
{
	int a,b;
	int s=1;
	printf("Enter base here ");
	scanf("%d",&a);
	printf("Enter power here ");
	scanf("%d",&b);
	for(int i=0; i<b; i++)
	{
		s*=a;
	}
	printf("%d ^ %d = %d",a,b,s);
	return 0;
}
