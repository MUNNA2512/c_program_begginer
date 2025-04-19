#include <stdio.h>
int main(){
    float radius;
    float perimeter;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    perimeter = 2*3.14*radius;
    printf("the perimeter of circle given radius %f is %f",radius,perimeter);
    return 0;

}