#include<stdio.h>
int sum(int arr[], int );
void main(void)
{
    int arr[5] ; 
    for(int i = 0 ; i<5 ; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("sum: %d ",sum(arr , 5));
}

int sum(int arr[], int size)
{
    int sum = 0 ; 
    for(int i = 0 ; i< size ; i++)
    {
        sum = sum + arr[i];
    }
    return sum ;
}