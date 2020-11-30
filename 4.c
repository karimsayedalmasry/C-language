#include<stdio.h>

void main(void)
{
    int x ; 
printf("enter number\n");
scanf("%d",&x); fflush(stdin); fflush(stdout);

    if(x%2 == 0)
    {
      printf("even");
    }
    else {
      printf("odd");

    }
}