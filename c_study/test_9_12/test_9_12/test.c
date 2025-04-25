#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}




//void swap(int *a, int *b)
//{
//	int mid = 0;
//	mid = *a;
//	*a = *b;
//	*b = mid;
//}
////实参传递给形参时，形参是实参的临时
////拷贝，修改形参对实参没有任何影响
////想要实现交换，需使用指针
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}




////判断素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		for (j = 2; j < i / 2; j++)//j<sqrt(i)
//		{						   //sqrt()是开平方
//			
//			if (i % j == 0)
//			{	
//				flag = 0;
//				break;
//			}
//				
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


////判断闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		printf("%d ", year);
//
//	}
//	return 0;
//}


//函数实现判断闰年
//int judge(year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (judge(year)==1)
//		printf("%d ", year);
//
//	}
//	return 0;
//}

//函数二分查找
int finding(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 9;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = finding(arr,k,sz);
	if (ret == -1)
		printf("can not find it\n");
	else
		printf("get it ,its undernumber is>%d\n", ret);
	return 0;
}




