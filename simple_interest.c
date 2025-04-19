#include <stdio.h>
int main(){
    int principal,rate,time;
    float interest;
    printf("enter the amount of principal");
    scanf("%d",&principal);
    printf("enter the rate of interest");
    scanf("%d",&rate);
    printf("enter the time of interest");
    scanf("%d",&time);
    interest =(principal*rate*time)/100;
    printf("the simple interest of amount %d for %d percent rate and for %d year is %f",principal,rate,time,interest);
    return 0;
}