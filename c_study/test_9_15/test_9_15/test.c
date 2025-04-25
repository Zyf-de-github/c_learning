#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型

//int get_max(int a, int b)
//{
//	int c = 0;
//	while (a % b != 0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum = sum + 1.0 / i;
//		else
//			sum = sum - 1.0 / i;
//
//	}
//	printf("%lf",sum);//%lf打印浮点数
//	return 0;
//}


//int main()
//{
//	int arr[] = { 2,5,3,8,7,6,9,0,1,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = 0;
//	int max = arr[1];
//	for (a = 0; a < sz - 1; a++)
//	{
//		if (max < arr[a])
//			max = arr[a];
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			int mul = a * b;
//			printf("%d*%d=%2d ",a,b,mul);
//			//%-2d是左对齐，%2d是右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//函数应该高内聚低耦合