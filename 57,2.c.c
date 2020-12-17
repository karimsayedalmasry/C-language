#include <stdio.h>
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short int u16;
typedef signed short int s16;
typedef unsigned long int u32;
typedef signed long int s32;
typedef float f32;
typedef double f64;
typedef long double f128;

#define SIZE 10

void Selection_Sort(s32 *arr, s32 size);
void merge(s32 *arr1, s32 *arr2 , s32 *arr3,s32 size );

void main(void)
{
	u32 arr1[10] = {11, 16, 12, 17, 13, 18, 14, 19, 15, 20};
	u32 arr2[10] = {7, 5, 3, 9, 1, 4, 6, 8, 2, 10};
	u32 arr3[20] ;
	s32 size = 10;
	u8 i;

//	Selection_Sort(arr1, size);
//	Selection_Sort(arr2, size);
/*

		printf("Data after sorting \n");
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr2[i]);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d,", arr1[i]);
	}
	
*/
merge(arr1, arr2 , arr3,20 );
for(int i= 0 ; i<20;i++)
{
	printf("%d," , arr3[i]);
}

}

void Selection_Sort(s32 *arr, s32 size)
{
	//check the pointer is not equal NULL to avoid Wild pointer

	//Apply selection sort algo
	s32 min_index, i, j;
	for (i = 0; i < (size - 1); i++)
	{
		/* update the min index with the current index */
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		/* apply swapping */
		if (min_index != i)
		{
			arr[i] ^= arr[min_index];
			arr[min_index] ^= arr[i];
			arr[i] ^= arr[min_index];
		}
	}
}


void merge(s32 *arr1, s32 *arr2 , s32 *arr,s32 size )
{
	//check the pointer is not equal NULL to avoid Wild pointer
	for(s32 i = 0 ; i<20 ; i++)
	{
		if(i<10)
		{
			arr[i] = arr1[i] ; 
		}
		else
		{
			arr[i] = arr2[i-11] ; 
		}
		
	}
	//Apply selection sort algo
	s32 min_index, i, j;
	for (i = 0; i < (size - 1); i++)
	{
		/* update the min index with the current index */
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		/* apply swapping */
		if (min_index != i)
		{
			arr[i] ^= arr[min_index];
			arr[min_index] ^= arr[i];
			arr[i] ^= arr[min_index];
		}
	}
}