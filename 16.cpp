//PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number a ");
	scanf("%d",&a);
	printf("Enter number b ");
	scanf("%d",&b);
	printf("Enter number c ");
	scanf("%d",&c);
	
	if(a>c)
	{
		if(a>b)
		{
			printf("The largest number is a %d",a);           // we have used the if/else 
		}                                                     // condition three times that
		else                                                  // is we have used conditioning
		{                                                     // in each of the output 
			printf("The largest number is b %d",b);           // of the main if/else 
		}                                                     // condition. Basically we have
	}                                                         // used three if/else conditions to 
	else                                                      // get four outcomes  
	{
		if(c>b)
		{
			printf("The largest number is c %d",c);
		}
		else
		{
			printf("The largest number is b %d",b);
		}
	}
}
