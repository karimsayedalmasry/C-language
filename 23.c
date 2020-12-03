#include <stdio.h>
#include<math.h>
int  get(int);
int main()
{
int x ; 
scanf("%d", &x) ; 
printf("%d",get(x));








}
int get(int x)
{
    int res = -1 ; 
    if (x%2 ==0)
    {
        printf("it is a power of 2");
        res = 1 ;
    }
    else
    {
        
        float y = (float)log10(x)/(float)log10(3);
        int z = y ; 
        if (z!=y)
        {}
        else
        {
             printf("it is a power of 3");
             res  = 0 ; 
        }
        
    }
    return res ; 
}