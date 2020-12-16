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
enum fan
{
    level1 , 
    level2 , 
    level3  
};

void main(void)
{
    u8 fan_level = level3 ;
    printf("level: %d",fan_level);
}