#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型
#include <errno.h>//错误码


#pragma pack(4)
#pragma pack()


void print(int arr[12])
{
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void bubble_sort(int arr[12])
{
	int i, j;
	for (i = 0; i < 12 - 1; i++)
	{
		for (j = i + 1; j < 12; j++)
		{
			if (arr[i] > arr[j])
			{
				int a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
}


void barrel_sort(int arr[12])
{
	int arr_barrel[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i,j;
	for (i = 0; i < 12; i++)
	{
		arr_barrel[arr[i]]++;
	}
	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < arr_barrel[i]; j++)
		{
			printf("%d ", i);
		}
	}
}


int main()
{
	int arr1[12] = { 3,4,7,9,6,8,3,2,6,1,0,7 };
	bubble_sort(arr1);
	print(arr1);
	printf("\n");
	int arr2[12] = { 3,4,7,9,6,8,3,2,6,1,0,7 };
	barrel_sort(arr2);
	return 0;
}


struct a//位断
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};