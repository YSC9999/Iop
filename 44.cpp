#include<stdio.h>
int main(){
    float c;
    float m;
    printf("Enter number of units ");
    scanf("%f",&c);
    if(0<c && 200>=c){
        m = c*0.5;
    }
    else if(c>=201 && c<=400){
        m = c*0.65 + 100;
    }
    else if(c>=401 && c<=600){
        m = c*0.8 + 230;
    }
    else if(c>600){
        m = 425 + 125*c;
    }
    printf("Amount to be paid is %f",m);
}
