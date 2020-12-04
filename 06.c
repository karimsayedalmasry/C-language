#include<stdio.h>


void main(void)
{
    char op ; 
int opa , opb ; 
scanf("%c", &op);  fflush(stdin); fflush(stdout);
scanf("%d", &opa);  fflush(stdin); fflush(stdout);
scanf("%d", &opb);  fflush(stdin); fflush(stdout);

switch (op)
{
case '+':
printf("%d" , opa + opb);
  break;
case '-':
printf("%d" , opa-opb);
break ; 
case '*':
printf("%d" , opa*opb);
break ; 
case '/':
printf("%F" , (float)opa/(float)opb);
break ; 
default:
printf("invalid");
  break;
}
}