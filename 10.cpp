/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE 
FORMULA. 
CM = M/2+P/2+C/2+E 
WHERE CM = Cut of f mark 
M = Marks in Mathematics out of 200 
P = Marks in Physics out of 200 
C = Marks in Chemistry out of 200 
E = Marks in entrance examination out of 100*/ 
#include<stdio.h>
int main()
{
	int M,P,C,E,CM;
	printf("Enter your Marks in Mathematics ");
	scanf("%d",M);
	printf("Enter your Marks in Physics ");
	scanf("%d",P);
	printf("Enter your Marks in Chemistry ");
	scanf("%d",C);
	printf("Enter your Marks in Entrance Exam ");
	scanf("%d",E);
	CM=M/2 + P/2 + C/2 +E;                       //Using arithmatic operator to find the cutoff needed
	printf("Your Cutoff is %d",CM);
	return 0;
}
