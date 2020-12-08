#include <stdio.h>
void small(int * arr,int size);
void main(void)
{
int arr[4] = {1,2,3,4};
small(arr,4);


}



void small(int * ptr,int size)
{
    int temp = 99 ; //big as possible 
    int index ; 
    for(int i = 0 ; i<size ; i++)
    {
        if(*(ptr + i)<temp )
        {
            temp = *(ptr + i ); 
            index = i ; 
        }
    }
    printf("smallest: %d" , *(ptr+index));
}
