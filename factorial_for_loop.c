#include <stdio.h>
int main(){
     int  number, i,factor=1;
    printf("Enter a number to print its factorial: ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    factor=factor*i;
    printf("The factorial of %d is %d", number, factor);
    return 0;
}