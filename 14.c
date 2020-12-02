#include<stdio.h>

int main(void)
{
 int num , pow  ; 
 int res = 1 ; 
 scanf("%d",&num); 
 scanf("%d",&pow); 
 
 for (int i = 1; i<=pow ; i++)
 {
     res = res * num ;
 }
 printf("%d",res);
}