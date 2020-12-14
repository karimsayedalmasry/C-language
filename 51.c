#include<stdio.h>
typedef unsigned char u8;
typedef signed   char s8;

typedef unsigned short int u16;
typedef signed short int s16;

typedef unsigned long int u32;
typedef signed long int s32;

typedef float f32;
typedef double f64;
typedef long double f96;

struct student
{
    char * name [10] ; 
    u8 roll ; 
    u8 math ; 
    u8 english ; 
    
}a;
void main(void)
{
    printf("\nenter name ") ; 
    scanf("%s" , &a.name);

    printf("\nenter roll ") ; 
    scanf("%d" , &a.roll);

    printf("\nenter math grade ") ; 
    scanf("%d" , &a.math);

    printf("\nenter english grade") ; 
    scanf("%d" , &a.english);
    printf("name:%s and roll: %d and math grade: %d and english grade: %d " , a.name , a.roll , a.math ,a.english) ; 
    
}