#include <stdio.h>
void scan(int *ptr, int size) ; 
void main(void)
{
int size = 10 ; 
int arr[10] ; 
scan(arr,size);

}


void scan(int *ptr, int size) //initialise the array.
{
    for (int i = 0; i < size; i++)
    {
        
        scanf("%d", (ptr + i));
        fflush(stdin);
        fflush(stdout);
    }
        for (int i = size- 1 ; i >=0; i--)
    {
        printf("%d,", *(ptr +i) );
    }
}