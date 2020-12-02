#include<stdio.h>

int main(void)
{
    int x ; 
    scanf("%d",&x);
    if (x<0)
    {
        return 1 ; 
    }
    int flag = 0 ; 
    for (int i = x-1 ; i>1; i--) 
    {
        if(x%i ==0){
            flag = 1 ; 
            break;
        }
    }   
    if(flag){
        printf("not prime"); 
    }
    else 
    {
        printf(" prime"); 
    }
    return 0 ; 
}