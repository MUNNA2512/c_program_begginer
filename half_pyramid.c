#include <stdio.h>
void red()
{
    printf("\033[1;31m");
}

void yellow()
{
    printf("\033[1;33m");
}

void green()
{
    printf("\033[1;32m");
}

void blue()
{
    printf("\033[1;34m");
}

void cyan()
{
    printf("\033[1;36m");
}

void magenta()
{
    printf("\033[1;35m");
}

void white()
{
    printf("\033[1;37m");
}

void black()
{
    printf("\033[1;30m");
}

void reset()
{
    printf("\033[0m");
}
int main() {
    int i;int j;int rows;
    magenta();
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=0;i<rows;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
