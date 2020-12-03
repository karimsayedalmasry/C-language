#include<stdio.h>

void main(void)
{   int x ;
    scanf("%d",&x);
    int z = 1 ; 
    for(int i = 1 ; i<=x ;  i ++)
    {
        printf("%d,", z);
        z = z*3 ;
    }

}