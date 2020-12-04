#include <stdio.h>

void main(void)
{
    int x, y;
    scanf("%d", &x);
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &y);
    fflush(stdin);
    fflush(stdout);
    if (x % y == 0)
    {
        printf("multiple");
    }
    else
    {
        printf("not a multiple");
    }
}