#include <stdio.h>
typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short int u16;
typedef signed short int s16;

typedef unsigned long int u32;
typedef signed long int s32;

typedef float f32;
typedef double f64;
typedef long double f96;

union family_names
{
    char first[30] ;
    char last[30];
};

void main(void)
{
    union family_names name;
    char c;
    for (u8 i = 0; i < 30; i++)
    {
        scanf("%c", &c);
        fflush(stdin);
        fflush(stdout);
        if (c == '.')
        {
            break;
        }
        else
        {
            name.first[i] = c ;
        }
    }
        for (u8 i = 0; i < 30; i++)
    {
            printf("%c , %d",name.last[i] , sizeof(name));
    } 
}