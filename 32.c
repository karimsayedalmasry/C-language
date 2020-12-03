#include<stdio.h>
void rev(int arr[]);
void main(void)
{ 
    int arr[5] = {1,2,3,4,5};
    rev(arr);
}

void rev(int arr[])
{
    int temp ; 
    int size = 5 ; 
    for(int i = 0 ; i<size/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1];
        arr[size-1] = temp ; 
        size--;
    }
    for(int i = 0 ; i<5 ; i++)
    {
        printf("%d,",arr[i]);
    }

}