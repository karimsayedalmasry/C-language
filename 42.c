#include <stdio.h>

void main(void)
{

    char *ptr = "bat";
    int i = 0;
    while (*(ptr + i) != '\0')
    {
        i++;
    }
    char st[2];
    st[0] = *(ptr + i - 1);
     st[1] = *(ptr + i - 2);
    printf("%c ,%c " ,st[0], st[1]);
}