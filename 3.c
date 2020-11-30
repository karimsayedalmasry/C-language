#include <stdio.h>

void main(void)
{
      int x , y ; 
  printf("enter 2 numbers the first must be bigger than the second and the second cannot be zero\n");
  scanf("%d", &x); fflush(stdin); fflush(stdout);
  scanf("%d", &y); fflush(stdin); fflush(stdout);  
  printf("ADD: %d \n", x +y);
  printf("SUB: %d \n", x-y);
  printf("MUL: %d\n", x*y);
  printf("DIV: %f\n",    (float)       (             (float)x/(float)y                    )                                                );
  printf("REM: %d\n", x%y );
  printf("OR: %d\n", x|y );
  printf("AND: %d\n", x&y );
  printf("SHIFt1: %d\n", (x>>2) );
  printf("SHIFT2: %d\n", (x<<3) );
}