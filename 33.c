#include<stdio.h> 

void main (void) 
{

int arr[9] = {1,2,3,4,5,6,7,8,9};
int size = 9 ; 
int value ; 
int a , b ; 
scanf("%d",&value); 
for(int i = 0 ; i<size ; i++)
{
    if(value == arr[i])
    {
        if(i ==size - 1 )
        {
            arr[i] = -1 ; 
        }
        else
        {
            for(int j = i ; j<size-1 ;j++ )
            {
                arr[j] = arr[j+1];
                arr[j+1] = -1 ; 
            }

        }
        
          
    }
}
for(int j = 0 ; j<size ;j++ )
            {
                printf("%d,",arr[j]);
            }

}