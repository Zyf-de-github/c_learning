#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <math.h>


//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	int i = 0;
//	char x0 = arr[0];
//	char x1[100] = { 0 };
//	char x2[100] = { 0 };
//	int m = 0, n = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (arr[i] > arr[0])
//		{
//			x1[m] = arr[i];
//			m++;
//		}
//		if (arr[i] <= arr[0])
//		{
//			x2[n] = arr[i];
//			n++;
//		}
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-1 - i; j++)
//		{
//			if ((x2[j] > x2[j + 1])&&(x2[j+1]!=0))
//			{
//				int mid = x2[j + 1];
//				x2[j + 1] = x2[j];
//				x2[j] = mid;
//			}
//		}
//
//	}
//	x1[m ] = arr[0];
//	strcat(x1, x2);
//	puts(x1);
//
//
//
//	return 0;
//}



//typedef struct stu2 {
//	int num;
//	char arr[20];
//	double ave;
//}stu2;
//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	stu2 arr[100] = { 0 };
//	int a, b, c;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %d %d %d", &arr[i].num, 
//								&arr[i].arr, 
//								&a,
//								&b,
//								&c);
//		arr[i].ave = (a + b + c) / 3.0;
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j].ave < arr[j + 1].ave)
//			{
//				stu2 mid = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = mid;
//			}
//			else if (arr[j].ave == arr[j + 1].ave)
//			{
//				if (arr[j].num > arr[j + 1].num)
//				{
//					stu2 mid = arr[j + 1];
//					arr[j + 1] = arr[j];
//					arr[j] = mid;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %s %.1lf\n", arr[i].num, arr[i].arr, arr[i].ave);
//	}
//	return 0;
//}


//typedef struct stu {
//
//	char arr[20];
//	int sum;
//	int last;
//}stu;
//int main()
//{
//	stu arr[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int t1, t2, t3, t4, t5;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %d %d %d %d %d", &arr[i].arr, &t1, &t2, &t3, &t4, &t5, &arr[i].last);
//		arr[i].sum = t1 + t2 + t3 + t4 + t5 + arr[i].last;
//	}
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j].sum < arr[j + 1].sum)
//			{
//				stu mid = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = mid;
//			}
//			else if (arr[j].sum == arr[j + 1].sum)
//			{
//				if (arr[j].last < arr[j + 1].last)
//				{
//					stu mid = arr[j + 1];
//					arr[j + 1] = arr[j];
//					arr[j] = mid;
//				}
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %d %d\n", arr[i].arr, arr[i].sum, arr[i].last);
//	}
//	return 0;
//}


//int find(int n)
//{
//	int i = 0;
//	for (i = n - 1; i > 1; i--)
//	{
//		if (n % i == 0)
//		{
//			return i;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int i = 0, flag = 0;
//	int sum = 0;
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	for (i = 0; i < 100; i++)
//	{
//		if ((arr[i] >= '0') && (arr[i] <= '9'))
//		{
//			flag = 1;
//			sum = sum * 10 + (int)(arr[i] - '0');
//		}
//	}
//	if (flag == 0 || sum == 0)
//		printf("0");
//	else
//	{
//		int num = find(sum);
//		printf("%d", num);
//	}
//	return 0;
//}


//int main()
//{
//	int m, n, t, i, j;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int arr3[100] = { 0 };
//	scanf("%d %d %d", &m, &n, &t);
//	for (i = 0; i < 2*m; i++)
//	{	
//		scanf("%d", &arr1[i]);
//	}
//	for (i = 0; i < 2*n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	for (i = 1; i < 2 * m; i += 2)
//		arr3[arr1[i]] = arr1[i - 1];
//	for (j = 1; j < 2 * m; j += 2)
//		arr3[arr1[j]] = arr1[j - 1];
//	for (i = 1; i < 2 * m; i += 2)
//	{
//		for (j = 1; j < 2 * n; j += 2)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				arr3[arr1[i]] = arr1[i - 1] + pow(-1, t) * arr2[j - 1];
//			}
//		}
//	}
//	if (arr3[0] != 0)
//	{
//		printf("%d", arr3[0]);
//	}
//	if (arr3[1] != 0)
//	{
//		if (arr3[1] == 1)
//			printf("+x");
//		if (arr3[1] > 1)
//			printf("+%dx", arr3[i]);
//	}
//	for (i = 2; i < 100; i++)
//	{
//		if (arr3[i] != 0)
//		{
//			if (arr3[i] == 1)
//				printf("+x^%d", i);
//			if(arr3[i]>1)
//				printf("+%dx^%d", arr3[i], i);
//		}
//	}
//
//
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 9; i++)
	{
		if (i <= 1)
		{
			for (j = 1; j <= 3 - i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= 2 * (i + 1) - 2; j++)
			{
				printf("*");
			}
			for (k = 1; k <= 5 - 2 * i; k++)
			{
				printf(" ");
			}
			for (k = 1; k <= 1 + i; k++)
			{
				printf("*");
			}
		}
		else if (i <= 3)
		{
			for (j = 1; j <= 3 - i; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= 2 * (i + 1) - 2; j++)
			{
				printf("*");
			}
			for (k = 1; k <= 5 - 2 * i; k++)
			{
				printf(" ");
			}
			for (k = 1; k <= 2 + i; k++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 1; j <= i - 4; j++)
			{
				printf(" ");
			}
			for (j = 1; j <= 19 - i * 2; j++)
			{
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}