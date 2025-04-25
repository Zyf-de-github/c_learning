#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>



//int main()
//{
//	int arr[10];
//	int i = 0;
//	printf("请依次输入十个数字>\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);//for循环在arr数组中输入比较的十个数
//
//	int x = 0;
//	int mid = 0;
//	for (i = 0; i < 10; i++)//共十个数，总计交换十轮
//	{
//		for (x = 0; x < 9 - i; x++)//在一轮中交换的次数
//		{
//			
//			if (arr[x] > arr[x + 1])//在相邻两个数间比较，若前面的数
//			{						//大于后面的数则交换两个数的位置
//				mid = arr[x + 1];
//				arr[x + 1] = arr[x];
//				arr[x] = mid;//依靠中间变量mid交换两数
//			}
//		}
//	}
//
//	int y = 0;
//	printf("最终排列是>");
//	for (y = 0; y < 10; y++)
//		printf("%d ", arr[y]);//打印最终排序完成的数组
//
//	return 0;
//}
