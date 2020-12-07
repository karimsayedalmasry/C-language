#include <stdio.h>
void copy(int * ptr1 , int *ptr2 , int size );
void main(void)
{
    int arr1[4] = {1,2,3,4}; 
    int arr2[4] ; 
    copy(arr1 , arr2  , 4);
}


void copy(int * ptr1 , int *ptr2 , int size )
{
     
    for(int i = 0 ; i<size ; i++)
    {
         

        *(ptr2+i) =    *(ptr1+i) ; 
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