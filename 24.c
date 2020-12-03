#include<stdio.h>
int bin(int x) ; 
void main(void)
{
int x ; 
scanf("%d" , &x);
 bin(x);
}

int bin(int x)
{
    while(x>0){
printf("%d",x%2);  
x=x/2; 
 return bin(x);
}
}