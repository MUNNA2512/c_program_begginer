#include <stdio.h>
int main(){

    float a,b,c,total;
    int avg;
    printf("enter your marks in first subject:");
    scanf("%f",&a);
    printf("enter your marks in second subject:");
    scanf("%f",&b);
    printf("enter your marks in third subject:");
    scanf("%f",&c);
    total=a+b+c;
    avg=(total/300)*100;
    printf("your percentage is: %d ", avg);



}