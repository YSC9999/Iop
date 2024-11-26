/*PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL 
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL*/
#include<stdio.h>
int main()
{
	char k;
	printf("Enter a character ");
	scanf("%c",&k);
    if(((47<k) && (k<58)) || (k>=12592))                       //Conditions for each conditions 
	{                                                          //is given at their respective 
		printf("The entered character is a number");           //output sites 
	}
	else if(64<k && k<91)
	{
		printf("The entered character is a capital letter");
	}
	else if(96<k && k<123)
	{
		printf("The entered character is a small letter");
	}
	else
	{
		printf("The entered character is a symbol");
	}
}
