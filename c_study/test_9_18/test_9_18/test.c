#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//²¼¶ûÀàÐÍ

//int get_sum(int n)
//{
//	int sum = 0;
//	if (n > 0)
//		sum = n % 10 + get_sum(n / 10);
//	return sum;
//}
//int main()
//{
//	unsigned int a = 0;
//	scanf("%u", &a);
//	printf("%d\n", get_sum(a));
//	return 0;
//}

int main()
{
	int mid = 0;
	int i = 0;
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[10] = { 0,9,8,7,6,5,4,3,2,1 };
	for (i = 0; i <= 9; i++)
		printf("%d", arr1[i]);
	printf("\n");
	for (i = 0; i <= 9; i++)
		printf("%d", arr2[i]);
	printf("\n");
	
	for (i = 0; i <= 9; i++)
	{
		mid = arr2[i];
		arr2[i] = arr1[i];
		arr1[i] = mid;
	}
	
	for (i = 0; i <= 9; i++)
		printf("%d", arr1[i]);
	printf("\n");
	for (i = 0; i <= 9; i++)
		printf("%d", arr2[i]);
	printf("\n");

	return 0;
}