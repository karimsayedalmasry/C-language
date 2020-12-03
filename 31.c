#include<stdio.h>
void swap(int arr1[], int arr2[],int size);
void main(void)
{ 
    int arr1[3] = {1,2,3};
    int arr2[3] = {4,5,6};
    int size = 3 ; 
    swap(arr1,arr2, size);


}

void swap(int arr1[], int arr2[], int size)
{
    int temp ; 
    for(int i = 0 ; i<size ; i++)
    {
        temp = arr1[i] ; 
        arr1[i] = arr2[i];
        arr2[i] = temp ; 
    }
    for(int i = 0 ; i<size ; i++)
    {
       printf("%d,", arr1[i]);
    }
     printf("\n");
     
    for(int i = 0 ; i<size ; i++)
    {
       printf("%d,", arr2[i]);
    }
}

