#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int div(int x, int y)
{
    return x / y;
}
int mult(int x, int y)
{
    return x * y;
}
int reminder(int x, int y)
{
    return x % y;
}
int main()
{
    int a, b, c;
    int add,diff,frac,product,rem;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("enter a number from 1-5:");
    scanf("%d", &c);
    
    switch (c)
    {
    case 1:
        add = sum(a, b);
        printf("the sum of the two numbers is %d", add);
        break;
    case 2:
        diff = sub(a, b);
        printf("the difference of the two numbers is %d", diff);
        break;
    case 3:
         frac = div(a, b);
        printf("the division of the two numbers is %d", frac);
        break;
    case 4:
         product = mult(a, b);
        printf("the product of the two numbers is %d", mult);
        break;
    case 5:
         rem = reminder(a, b);
        printf("the reminder of the two numbers is %d", rem);
        break;

    default:
        break;
    }
}