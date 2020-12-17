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

void select_sort(u32 *ptr, u32 size);


void main(void)
{
 
    u32 arr1[10] = {11, 16, 12, 17, 13, 18, 14, 19, 15, 20};
  


    select_sort(arr1, 10);
    for (u32 i = 0; i < 10; i++)
    {
        printf("%d,", arr1[i]);
    }
    /////////////////////////////////////

    printf("\n");
  u32 arr2[10] = {7, 5, 3, 9, 1, 4, 6, 8, 2, 10};
     select_sort(arr2, sizeof(arr2));
    for (u32 i = 0; i < 10; i++)
    {
        printf("%d,", arr2[i]);
    }
   
}
void select_sort(u32 *ptr, u32 size)
{
    u8 temp = 0, index = 0;
    for (u8 i = 0; i < size-1; i++)
    {
        for (u8 j = i + 1; j < 10; j++)
        {
            if (ptr[i]  > ptr[j] )
            {
                if(ptr[index]>ptr[j])
                {
                    index = j;
                }
               
 
            }
        }
        if (index != 55)
        {
            temp = ptr[i];
            ptr[i] = ptr[index];
            ptr[index] = temp;
            index = 55;
        }
        
    }
}