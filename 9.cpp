// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include<stdio.h>
int main()
{
	int h,m,s;
	printf("Type in the time in hours, minutes and seconds respctively ");
	scanf("%d%d%d",&h,&m,&s);                                               //Input of time
	s=s+m*60+h*60*60;                                                       //Converting every unit of time into seconds to find total time in seconds 
	printf("Total number of seconds is %d",s);
	return 0;
}
