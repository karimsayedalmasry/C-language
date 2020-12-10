#include<stdio.h>

void main(void)
{
char str[]  = {"karim"};
char str1[5]  ;

int x = 0 ; 

for(int i = 4 ; i>=0 ; i--)
{
    str1[x] = str[i];
    x++;
}

for(int i = 0; i<5 ; i++)
{
   printf("%c,",  str1[i] );
}


}
