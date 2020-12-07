#include<stdio.h> 

void main (void) 
{
   int arr[8] ; 
    int size = 8 ; 
   printf("please enter an array of 8 elements:\n");

   for(int i = 0 ; i<8 ; i++)
   {
       scanf("%d",&arr[i]);fflush(stdin); fflush(stdout);
   }

 printf("\n done \n");
 int j = size/2 ; 
 int flag = 0 ; 
for(int i = 0 ; i <size/2; i++)
{
    if(arr[i] ==arr[j] )
    {
        j++;
        flag = 1 ; 
    }
    else {flag = 0; break; }
}
if(flag){
    printf("mirror");
}
else {
    printf("not mirror");
}

}