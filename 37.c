#include <stdio.h>
void len(char *arr);
void main(void)
{
    char *arr = "12345";
    len(arr);
}

void len(char *arr) //get length of string
{

    int i = 0;
    for (;; i++)
    {
        if (arr[i] == '\0')
            break;
        printf("%c,", arr[i]);
    }
    printf("Size: %d", i);
}