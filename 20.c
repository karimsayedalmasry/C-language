#include<stdio.h>

int calc(char , int , int );

void main(void)
{
int opa , opb ; 
char op ; 
scanf("%d",&opa); fflush(stdin) ; fflush(stdout) ; 
scanf("%c",&op); fflush(stdin) ; fflush(stdout) ; 
scanf("%d",&opb); fflush(stdin) ; fflush(stdout) ; 
printf("%d", calc(op , opa, opb));
}


int calc(char op , int opa , int opb)
{
    int res = 0; 
    switch (op)
    {
    case '+':
        res = opa + opb ; 
        break;
    case '-':
        res = opa - opb ; 
        break;
        case '*':
        res = opa * opb ; 
        break;
        case '/':
        res = opa / opb ; 
        break;
    default:
    res = -555;
        break;
    }
    return res ; 
}