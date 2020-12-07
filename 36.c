#include <stdio.h>
void scan(int *ptr, int size) ; 
int add(int *ptr, int size) ; 

void main(void)
{
    int arr[10];
    scan(arr, 10);
    printf("Sum: %d", add(arr, 10));

}

void scan(int *ptr, int size) //initialise the array.
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (ptr + i));
        fflush(stdin);
        fflush(stdout);
    }
}

int add(int *ptr, int size) //sum the array and return the sum.
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        temp = temp + *(ptr + i);
    }

    return temp;
}