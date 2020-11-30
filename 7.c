#include<stdio.h>

void main(void)
{
    char x ; 
scanf("%c", &x);
switch (x)
{
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
printf("number");
  break;
default:
printf("alppabet");
  break;
}
}