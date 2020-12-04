#include <stdio.h>

void main(void)
{
   int num , bit ; 
   scanf("%d",&num); fflush(stdin); fflush(stdout);
   scanf("%d",&bit); fflush(stdin); fflush(stdout);
   int set_bit = num |(1<<bit); 
   int clr_bit = num & ~(1<<bit);
   int tog_bit = num ^ (1<<bit); 
   printf("%d %d %d" , set_bit, clr_bit , tog_bit);
   }