#include<stdio.h>

void main(void)
{
    int grade ; 
   printf("enter Grade\n");
   scanf("%d",&grade);
   if(grade < 50 )
   {
     printf("failed");
   }
   else if(grade <65)
   {
     printf("noraml");
   }
   else if (grade< 75)
   {
     printf("good");
   }
   else if (grade <85)
   {
     printf("very good");
   }
   else if (grade>= 85 && grade<=100) {
     printf("excellent");
   }
   else{
     printf("wrong value");
   }
}