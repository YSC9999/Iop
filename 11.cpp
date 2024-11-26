//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include<stdio.h>
int main()
{
	int s,m,h;
	printf("Enter number of seconds ");
	scanf("%d",&s);
	h=s/3600;                               //converting time in seconds to hours using division
	m= (s%3600)/60;                         //converting time in seconds to minutes using modulus and division
	s= (s%3600)%60;                         //converting time in seconds to seconds using modulus
	printf("The time in ");
	printf("hours   is %d\n",h);
	printf("            minutes is %d\n",m);
	printf("            seconds is %d\n",s);
	return 0;
}
