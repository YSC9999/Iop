#include<stdio.h>
int main()
{
	int x,n;
	int k=1;
	printf("Select a following operation Y(x,n)= | 1+x    where n=1 \n");
	printf("                                     | 1+x/n  where n=2 \n");
	printf("                                     | 1+x^n  where n=3 \n");
	printf("                                     | 1+nx   where n>3 0r n<1 \n");
	printf("Enter the value of n ");
	scanf("%d",&n);
	printf("Enter the value of x ");
	scanf("%d",&x);
	if(n>3||n<1)
	{
		printf("Y(x,n) = %d",1+x*n);
	}
	else
	{
	switch(n)
		{
		case 1:
			printf("Y(x,n) = %d",1+x);
			break;
		case 2:
			printf("Y(x,n) = %d",1+x/n);
			break;
		case 3:
			for(int i=0; i<n; i++)
	        {
		        k*=x;
	        }
	        printf("Y(x,n) = %d",1+k);
	        break;
	    }
	}
}
