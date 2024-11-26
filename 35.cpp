#include <stdio.h>
int main() {
    int i,mod,sum=0;
    printf("Enter the number ");
    scanf("%d",&i);
    while(1){
        for(i;i!=0;i/=10){
            mod = i%10;
            sum+=mod;
        }
        if(sum<10){
            break;
        }
        else{
            i = sum;
            sum = 0;
        }
    }
    printf("%d",sum);
}
