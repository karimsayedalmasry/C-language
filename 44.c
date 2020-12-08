#include <stdio.h>
void swp(int *ptr1, int *ptr2) ; 
void main(void)
{
    int x = 0, y = 1;
    void (*sw)(int *, int *) = &swp;
    (*sw)(&x, &y);
    printf("%d , %d" , x , y);
}

void swp(int *ptr1, int *ptr2)
{

    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}