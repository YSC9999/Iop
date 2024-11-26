//PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include<stdio.h>
int main()
{
	int a,h,b;
	printf("Enter height ");          //Input of the parameters such as height and base are take here 
	scanf("%d",&h);
	printf("Enter breadthh ");
	scanf("%d",&b); 
	a=h*b/2;                          //Formula for calculating area of the triangle
	printf("Area of the triangle is %d\n",a);
	return 0;
}

