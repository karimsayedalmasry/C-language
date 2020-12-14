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

struct time
{
 u8 h ; 
 u8 s ; 
 u8 m ; 
    
}time1,time2;

void get(struct time time1 , struct time time2 );
void main(void)
{
time1.h = 5 ; 
time2.h = 12 ; 
time1.m = 23 ; 
time2.m = 2 ; 
time1.s = 50 ; 
time2.s = 30 ; 
get(time1 , time2 );

    
}

void get(struct time time1 , struct time time2 )
{
    u8 h , m , s ; 
    if(time1.h>time2.h)
    {
       h =  time1.h - time2.h;
    }
    else { 
         h =  time2.h - time1.h;
    }
        if(time1.m>time2.m)
    {
       m =  time1.m - time2.m;
    }
    else { 
         m =  time2.m - time1.m;
    }
        if(time1.s>time2.s)
    {
       s =  time1.s - time2.s;
    }
    else { 
         s =  time2.s - time1.s;
    }
    printf("hours: %d , min: %d , sec: %d" , h, m , s );
}