//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
#include<stdio.h>
int main()
{
	int M,P,C,E,T;
	printf("Enter Math marks\n");                 //Taking input of the parameters to calculate Total marks
	scanf("%d",&M);
	printf("Enter Physics marks\n");
	scanf("%d",&P);
	printf("Enter Chemistry marks\n");
	scanf("%d",&C);
	printf("Enter English marks\n");
	scanf("%d",&E);                                 
	T=(M+P+C+E)/4;                                //arithmatic operation used to calculate total marks
	printf("Percentage of total marks is %d",T);
	return 0;
} 

