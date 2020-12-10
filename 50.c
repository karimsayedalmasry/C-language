#include <stdio.h>
void conc(char [], char []);
 
int main()
{
   char str1[100] = {"karim"} ;
   char str2[100] ={"sayed"} ;
 
   printf("string 1\n");

 
   printf("string 2\n");

 
   conc(str1, str2);
 
   printf("concatinated: \"%s\"\n", str1);
 
   return 0;
}

void conc(char p[], char q[]) {
   int c, d;
   
   c = 0;
 
   while (p[c] != '\0') { //get end of p[]
      c++;      
   }
 
   d = 0;
 
   while (q[d] != '\0') {
      p[c] = q[d]; //p[last elemtents ] = q[first element]
      d++;
      c++;    
   }
 
   p[c] = '\0';
}