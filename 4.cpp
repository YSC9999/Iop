//PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include<stdio.h>
int main()
{
	 int F,C;
	 printf("Enter Temperature in Fahrenheit ");
	 scanf("%d",&F);                               //Input to take Temperaure in Fareinheit
	 C=(F-32)*5/9;                                 //Formula to convert it
	 printf("Temperature in celcius is %d",C);     //Output to give Temperature in Celcius
	 return 0;
}
