#include<stdio.h>

void get_prime(int , int ) ; 

void main(void)
{
    int x , y ; 
    scanf("%d" , &x);
    scanf("%d" , &y);
    get_prime(x , y );
}
void get_prime(int x , int y )
{

    char flag = 0 ; 
    for (int i = x ; i<=y ; i++)
    {
        for(int j = 2 ; j<i ; j++)
        {
            if(i%j ==0)
            {
                flag = 1 ;
                break ; 
            }
        }
        if(!flag)
        {
            printf("%d \n" ,i) ; 
            
        }
        flag = 0 ; 
    }
}