#include <stdio.h>

void main(void)
{

    float x, y;
    scanf("%f", &x);
    fflush(stdin);
    fflush(stdout);
    scanf("%f", &y);
    fflush(stdin);
    fflush(stdout);
    int z = x + y;
    printf("%d", (int)(x + y));
}