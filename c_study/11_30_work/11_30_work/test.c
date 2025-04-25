#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//	char arr_char[100] = { 0 };
//	int arr_int[100] = { 0 };
//	gets(arr_char);
//	for (i = 99; i >=0; i--)
//	{
//		if (arr_char[i] <= '9' && arr_char[i] >= '0')
//		{
//			if (arr_char[i] == '0')
//				arr_int[i] = 0;
//			if (arr_char[i] == '1')
//				arr_int[i] = 1;
//			if (arr_char[i] == '2')
//				arr_int[i] = 2;
//			if (arr_char[i] == '3')
//				arr_int[i] = 3;
//			if (arr_char[i] == '4')
//				arr_int[i] = 4;
//			if (arr_char[i] == '5')
//				arr_int[i] = 5;
//			if (arr_char[i] == '6')
//				arr_int[i] = 6;
//			if (arr_char[i] == '7')
//				arr_int[i] = 7;
//			if (arr_char[i] == '8')
//				arr_int[i] = 8;
//			if (arr_char[i] == '9')
//				arr_int[i] = 9;
//		}
//		else
//			arr_int[i] = -1;
//	}
//	int arr_num[100] = { 0 };
//	int sum = 0;
//	int j = 0;
//	for (i=0;i<100;i++)
//	{
//		if (arr_int[i] == -1)
//		{
//			
//			arr_num[j] = sum;
//			j++;
//			sum=0;
//		}
//		else
//		{
//			sum = sum * 10 + arr_int[i];
//		}
//	}
//	int mid = 0;
//	for (i = 99; i >=0; i--)
//	{
//		for (j = 99; j>0;j--)
//		{
//			if (arr_num[j] > arr_num[j - 1])
//			{
//				mid = arr_num[j - 1];
//				arr_num[j - 1] = arr_num[j];
//				arr_num[j] = mid;
//			}
//		}
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		if (arr_num[i] != 0)
//			printf("%d ", arr_num[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int m, n, i, j;
//	scanf("%d %d", &m, &n);
//	int arr[6][6] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}
//	return 0;
//}


double function(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return function(n-1)+function(n-2);
}

int if_sole(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 1;
	}
	return 0;
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = function(a);
	int c = if_sole(b);
	if (c==1)
		printf("%d",b);
	else
		printf("yes");

	return 0;
}
