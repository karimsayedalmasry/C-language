#include <stdio.h>

void main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr[5] ; 
    
    for(int i = 0 ; i<5 ; i++)
    {
        ptr[i] = &arr[i] ; 
    }
    for(int i = 0 ; i<5 ; i++)
    {
        printf("%d,",*ptr[i] );
    }
    int temp = *ptr[0] ; 
    for(int i = 0 ; i<5 ; i++)
    {
        if(*ptr[i]>temp)
        {
            temp = *ptr[i];
        }
    }
  printf("\nBiggest: %d",temp);
}