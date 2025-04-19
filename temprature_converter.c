#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("entar the value of temprature in celsius");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("temprature in fahrenheit is %f",fahrenheit);
    return 0;

}