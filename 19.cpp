/*PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE 
LETTER OR NOT USING CONDATIONAL OPERATOR*/
#include<stdio.h>
int main()
{
	char c,x;
	printf("Enter the character ");
	scanf("%c",&c);                                                                                    //Storing the input as a character
	x = (96<c&&c<123)?printf("It is a smaller case letter"):printf("It is not a smaller case letter"); //checking the condition with c as a variable
}
