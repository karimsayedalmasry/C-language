#include<stdio.h>

void main(void)
{
char str[]  = {"karim"};
int key = 0 ; 
for(int i = 0 ; i<5 ; i++)
{
    if(key==0)
    {
        printf("%c",(int)str[i]-32);
        key = 1 ;
    }
    else if (key==1)
    {
        printf("%c",str[i]);
        key = 0 ; 
    }
     
}
}