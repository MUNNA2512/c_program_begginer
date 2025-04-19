#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter the lengths of the first sides of the triangle: ");
    scanf("%f",&a);
    printf("Enter the lengths of the second sides of the triangle: ");
    scanf("%f",&b);
    printf("Enter the lengths of the third sides of the triangle: ");
    scanf("%f",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %.2f",area);
    return 0;
}