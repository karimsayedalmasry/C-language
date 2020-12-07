#include<stdio.h> 

void main (void) 
{
int arr[10] = {1,1,1,2,2,4,4,5,7,7};
int occ[10] ={0}  ; 
int temp ; 
for(int i = 0 ; i<10 ; i++)
{
    temp = arr[i] ; 
    for(int j = 0 ; j<10 ; j++)
    {
        if(temp == arr[j])
        {
            occ[i]++;//this number is repeated 

        }
    }
}

for(int j = 0 ; j<10 ; j++)
    {
        printf("%d," ,arr[j]);//original 
    }
 printf("\n");
for(int j = 0 ; j<10 ; j++)
    {
        printf("%d,", occ[j]);//repeated numbers  
    }
}