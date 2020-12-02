#include <stdio.h>
int main()
{
    int x = 0,y = 0;
     int row = 0;
   
    scanf("%u",&row);
    for(x=1; x<=row; ++x)
    {
        
        for(y=1; y<=x; ++y)
        {
            printf(" ");
        }
        
        for(y =1; y <=((row*2)-((x*2)-1)); ++y)
        {
            printf("*");
        }
       
        printf("\n");
    }
    return 0;
}