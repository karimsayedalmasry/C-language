#include <stdio.h>
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
u8 id ; 
u8 grade ;

};
void store(struct student * ptr);
void print(struct student * ptr);
void main(void)
{
    struct student st[10] ;
    store(st) ;
    print(st) ;
}
void store(struct student * ptr)
{
    for(u8 i = 0 ; i<10 ; i++)
    {
        *(ptr[i].name) = "karim";
        ptr[i].id = 5;
        ptr[i].grade = 10;
    }
    
}

void print(struct student * ptr)
{
        for(u8 i = 0 ; i<10 ; i++)
    {
        printf("name: %s , id: %d , grade: %d \n",*(ptr[i].name) ,ptr[i].id , ptr[i].grade );
    }
}