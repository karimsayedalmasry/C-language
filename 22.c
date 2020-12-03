#include<stdio.h>

int countHoles(int);
void  main(void)
{
    int x ; 
    scanf("%d",&x);
    printf("%d",countHoles(x)) ;
}

int countHoles(int x)
{
    int num = x ; 
    int rev = 0 ; 
    int rem ; 
    int holes = 0;
    while (num != 0) { //get each digit.
        rem = num % 10; //the digit alone 
        num =num/ 10; 
        
        switch (rem)
        {
        case 1:
        case 2:
        case 3:
        case 5:
        case 7:
            break;
        case 0:
        case 4:
        case 6:
        case 9:
        holes = holes +1 ; 
        break ;
        case 8:
        holes = holes + 2 ; 
        break;
        default:
            break;
        }
    }
    return holes ;
}