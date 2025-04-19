#include <stdio.h>

int sumDigits(int no)
{
    if (no == 0)
    {
        return 0;
    }

    return (no % 10) + sumDigits(no / 10);
}

int main()
{   int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", sumDigits(n));
    return 0;
}