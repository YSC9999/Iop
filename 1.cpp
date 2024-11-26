//PROGRAM TO CALCULATE SIMPLE INTEREST
#include <stdio.h>
int main()
{
    int P,T,R,I;                
    printf("Enter P ");         //line 6 to 11: taking input of the data  
    scanf("%d",&P);
    printf("Enter T ");
    scanf("%d",&T);    
	printf("Enter R ");
    scanf("%d",&R);
    I=P*T*R/100;                //using arithmatic operator to calculate interest
    printf("Interest is %d",I);
    return 0;
}
