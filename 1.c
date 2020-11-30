#include <stdio.h>

void main(void)
{
    int a , b , c ; 
    scanf("%d", &a);
    fflush(stdin); 
    fflush(stdout);

    scanf("%d", &b);
    fflush(stdin); 
    fflush(stdout);

    scanf("%d", &c);
    fflush(stdin); 
    fflush(stdout);

    printf(" %d %d %d" , c,b,a);
}