#include<stdio.h>
void up(char * str);
void main(void)
{
    char str[]  = {"karim"};
    up(str);
}

void up(char * str)
{
    char upper[5]; 
    for(int i = 0 ; i <5 ; i++)
    {
       upper[i] =(int)str[i] -32;
    }
    for(int i = 0 ; i <5 ; i++)
    {
       printf("%c",upper[i] );
    }
}