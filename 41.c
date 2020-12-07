#include <stdio.h>
void copy(int * ptr1 , int *ptr2 , int size );
void main(void)
{
    int arr1[4] = {1,2,3,4}; 
    int arr2[4] = {5,6,7,8}; 
    copy(arr1 , arr2  , 4);
}


void copy(int * ptr1 , int *ptr2 , int size )
{
    int temp1 , temp2 ; 
    for(int i = 0 ; i<size ; i++)
    {
        temp1 = *(ptr1+i) ; 
        *(ptr1+i) = *(ptr2 + i ); 
        *(ptr2+i) = temp1 ; 
    }
    for(int i = 0 ; i<size ; i++)
    {
        
        printf("%d.",*(ptr1+i) ) ; 
        
    }
     printf("\n" ) ; 
    for(int i = 0 ; i<size ; i++)
    {
        
        printf("%d.",  *(ptr2+i)  ) ; 
        
    }
}