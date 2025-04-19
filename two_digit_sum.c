#include <stdio.h>
int main()
{
    int i,digits;
    printf("enter a number");
    scanf("%d",&i);
    digits = i%10+i/10;
    printf("the sum of the digits of the number %d",digits);

    return 0;
}