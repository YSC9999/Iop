#include<stdio.h>
int main()
{
	char s ='A';
	int d;
	printf("Insert number of lines wanted ");
	scanf("%d",&d);
	for(int i=0;i<=d-1;i++)
	{
		for(int r=-1;r<i;r++)
		{
		s+=i;
		printf("%c",s);
		s-=i;
	    }
	    printf("\n");
	}
}
