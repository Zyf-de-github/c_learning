#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//比大小
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while(i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//		{
//			max = n;
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}


//int main()
//{
//	double v = 0.0f;   初始化为0.0编译器默认为double类型
//	double r = 0.0f;   而初始化0.0f时为float类型
//	scanf("%lf", &r);
//	v = 4.0 / 3 * 3.1415926 * r * r * r;  //(在运算除法时，除数和被除数
//	printf("%.3lf\n", v);                 //至少一个为小数)
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//		printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &b);
//	for (a = 1; a <= b; a++)
//	{
//		for (c = 1,ret = 1; c <= a; c++)
//			ret = ret * c;
//		sum = sum + ret;
//		}
//	printf("%d\n", sum);
//	return 0;
//}
// 
// 
//简化|
//    |
//    v
//
//
//int main()
//{
//
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 4;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//			left = mid + 1;
//		else if (k < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

