//PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	if(n%2 == 1)                    //Checking if reminder of the number divided by 2 is 1 or not
	{
		printf("Number is odd");
	}
	else                            //if reminder is not 1 then this part of the code will be runned  
	{
		printf("Number is even");
	}
	return 0;
}
