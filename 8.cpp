/*EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C 
PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES*/ 
#include<stdio.h>
int main()
{
	int d,h,m;
	int s=31558150;
	printf("Earth takes %d",s);
	printf(" seconds to revolve\n");
	m=s/60;                            //Conversion of seconds into minutes
	h=m/60;                            //conversion of minutes into hours 
	d=h/24;                            //Conversion of hours into days
	printf("Earth takes %d",m);
	printf(" minutes to revolve\n");
	printf("Earth takes %d",h);
	printf(" hours to revolve\n");
	printf("Earth takes %d",d);
	printf(" days to revolve\n");      //Output of all the converted variables 
	return 0;
}
