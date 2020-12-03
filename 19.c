#include<stdio.h>

int get_cube(int);
void main(void)
{   
    int x ; 
    scanf("%d",&x);
    printf("%d",get_cube(x));
}
int get_cube(int x)
{
    return x*x*x ; 
}