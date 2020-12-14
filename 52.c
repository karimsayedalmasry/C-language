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
    struct nums
    {
        f32 real;
        f32 img;

    } num1, num2;

void add(struct nums num1 , struct nums num2 ) ; 
void main(void)
{

    num1.real = 10;
    num1.img = 20;
    num2.real = 30;
    num2.img = 40;
    add(num1 , num2 ) ; 
}

void add(struct nums num1 , struct nums num2 ) 
{
    printf("real value : %f and Img value: %f " , num1.real + num2.real , num1.img + num2.img ); 
}