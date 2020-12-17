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

struct student
{
    char * name[10];
    u8 score;
};

#define size 50

void main(void)
{
    struct student students[size];
    u8 stop = 0;
    u8 i = 0;
    u8 option;
    while (!stop && i < 50)
    {
        printf("enter name then enter then the score:\n");
        scanf("%s", &students[i].name);

        scanf("%d", &students[i].score);
        printf("to continue press 0 else press 1 :\n");
        scanf("%d", &option);
        i++;
        if (option)
        {
            stop = 1;
        }
    }
    printf("num:%d", i);
    fflush(stdin);
    fflush(stdout);
    u32 sum = 0;
    for (u8 j = 0; j < i; j++)
    {
        sum = sum + students[j].score;
    }
    printf("avg: %f", (float)sum / (float)(i));
    printf("\n the student below avg are :");
   
    for (u8 p = 0; p < i; p++)
    {
        fflush(stdin);
        fflush(stdout);
        printf("%s,", students[p].name);
    }
    printf("%d", students[0].score);
}