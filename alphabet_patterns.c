#include <stdio.h>
#include<conio.h>
#include<direct.h>

int A()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || j == 5 || i == 3)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int B()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 2 && i == 2 || j == 5 || i == 5 || i == 4 && j == 2 || j == 2 && i == 3 || j == 3 && i == 3 || j == 4 && i == 3)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int C()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 5)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int D()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 2 || j == 5 || i == 5)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int E()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || j == 1 || i == 5)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int F()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || j == 1)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int G()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 5 || i == 4 && j == 5 || i == 3 && j == 5 || i == 3 && j == 4 || i == 3 && j == 3)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int H()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 1 || j == 5)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int I()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 2 || i == 1 && j == 4 || j == 3 || i == 5 && j == 2 || i == 5 && j == 4)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int J()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 3 || i == 5 && j == 2 || i == 5 && j == 1 || i == 4 && j == 1)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int K()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || i == 3 && j == 2 || j == 3 && i == 2 || j == 4 && i == 1 || i == 4 && j == 3 || i == 5 && j == 4)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int L()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 5 && j == 2 || i == 5 && j == 3 || i == 5 && j == 4 || j == 1)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int M()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 3 && j == 3 || i == 2 && j == 2 || i == 2 && j == 4)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int N()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j || j == 1 || j == 5)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int O()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 5 || j == 5)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int P()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || j == 5 && i == 2)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int Q()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 2 && j == 1 || i == 3 && j == 1 || i == 4 || i == 2 && j == 5 || i == 3 && j == 5 || i == 3 && j == 3 || i == 5 && j == 4)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int R()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || i == 3 && j == 2 || j == 3 && i == 2 || j == 4 && i == 1 || i == 4 && j == 3 || i == 5 && j == 4 || i == 1 && j == 2 || i == 1 && j == 3 || i == 1 && j == 4)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int S()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || i == 5 || j == 1 && i == 2 || j == 5 && i == 4)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int T()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 3)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int U()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 5 || j == 1 || j == 5)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int V()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 1 || i == 1 && j == 5 || j == 2 && i == 3 || j == 3 && i == 4 || j == 4 && i == 3)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int W()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 4 && j == 2 || i == 4 && j == 4 || i == 3 && j == 3)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int X()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j || i == 1 && j == 5 || i == 2 && j == 4 || j == 1 && i == 5 || i == 4 && j == 2)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int Y()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 1 || i == 1 && j == 5 || i == 3 && j == 3 || i == 2 && j == 2 || i == 2 && j == 4 || j == 3 && i == 4 || j == 3 && i == 5)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
int Z()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || i == 2 && j == 4 || i == 3 && j == 3 || i == 4 && j == 2)
            {
                printf(" *");
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
void red()
{
    printf("\033[1;31m");
}

void yellow()
{
    printf("\033[1;33m");
}

void reset()
{
    printf("\033[0m");
}

int main()
{   
    yellow();
    R();
    
    printf("\n");
    A();

    printf("\n");
    H();

    printf("\n");
    U();
    printf("\n");
    L();
    // printf("\n");
    // V();
    return 0;
}