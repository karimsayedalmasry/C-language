#include<stdio.h>
int temp = 1 ;
void main(void)
{   int x ;
    scanf("%d",&x);
    int z =1; 
    int temp = 0 ; 
    int y = 1; 
    for(int i = 1 ; i<=x ;  i ++)
    {
        y = z + temp ;


        printf("%d,", y);
        z = temp ; 
        temp= y ; 
         

        
        ;
    }
    {
         printf("\n");
        int x ;
        int i = 0 ; 
         int z =1; 
         int temp = 0 ; 
         int y = 1; 
        scanf("%d",&x);
        while(i<x)
        {
            
        y = z + temp ;


        printf("%d,", y);
        z = temp ; 
        temp= y ; 
            i++;
        }



    }

    {
        printf("\n");
        int x ; 
        scanf("%d", &x);
        fib(x ,1 , 1);
    }

}
int fib (int x, int y, int z  )
{   
    while (x>0)
    {   
        x--;
        printf("%d," , y  );
       y = z + temp ;


        
        z = temp ; 
        temp= y ; 
        return fib(x,y,z) ; 
    }
    
    
}