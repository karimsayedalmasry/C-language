#include <stdio.h>
void conc(char [], char []);
 
int main()
{
   char str1[100] = {"karim"} ;
   char str2[100] ={"sayed"} ;
 
   printf("Input a string\n");

 
   printf("Input a string to concatenate\n");

 
   conc(str1, str2);
 
   printf("String obtained on concatenation: \"%s\"\n", str1);
 
   return 0;
}

void conc(char p[], char q[]) {
   int c, d;
   
   c = 0;
 
   while (p[c] != '\0') {
      c++;      
   }
 
   d = 0;
 
   while (q[d] != '\0') {
      p[c] = q[d];
      d++;
      c++;    
   }
 
   p[c] = '\0';
}