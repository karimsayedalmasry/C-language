#include<stdio.h>
int get_index(int arr[] , int ,int );
void main(void)
{
int Array[6] = {1,2,3,4,4,4} ;
printf("%d", get_index(Array , 6 , 4));


}

int get_index(int arr[] , int size , int num)
{
    int occ = 0 ; 
    for(int i = 0 ; i<size ; i++)
    {
        if(arr[i]==num)
        {
            occ = i ;
           
        }
        else
        {
            occ = -1 ;
        }
    }
    return occ ; 
}