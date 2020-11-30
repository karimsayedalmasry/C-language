#include <stdio.h>

void main(void)
{

    int x;
    scanf("%d", &x);
    if (x >= 0 && x < 30)
    {
        printf("7");
    }
    else if (x < 60)
    {
        printf("5");
    }
    else if (x < 90)
    {
        printf("3");
    }
    else if (x <= 100)
    {
        printf("1");
    }
}