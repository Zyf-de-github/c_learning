#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
//int main()
//{
//	char arr[50] = { 0 };
//	gets(arr);
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int* z = &x;
//	char a = 0;
//	for (i = 0; i < 50; i++)
//	{
//		if (arr[i] >= '0' && arr[i] <= '9')
//		{
//			*z = *z * 10 + arr[i]-'0';
//		}
//		else if (arr[i] == ' ' && *z != 0)
//		{
//			z = &y;
//		}
//		else if(arr[i]=='+'|| arr[i] == '-'|| arr[i] == '*'|| arr[i] == '/'|| arr[i] == '%')
//		{
//			switch (arr[i])
//			{
//			case'+':a = '+'; break;
//			case'-':a = '-'; break;
//			case'*':a = '*'; break;
//			case'/':a = '/'; break;
//			case'%':a = '%'; break;
//			default:printf("error"); break;
//			}
//		}
//	}
//	int sum = 0;
//	switch (a)
//	{
//	case'+':sum = x + y; break;
//	case'-':sum = x - y; break;
//	case'*':sum = x * y; break;
//	case'/':sum = x / y; break;
//	case'%':sum = x % y; break;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	int sum2 = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + arr[i];
//	}
//	int average = sum / n;
//	for (i = 0; i < n; i++)
//	{
//		sum2 = sum2 + (arr[i] - average) * (arr[i] - average);
//	}
//	int p = sum2 / n;
//	printf("%d", p);
//	return 0;
//}
// 
// 
// 
// 
// 
// /////////////////////////////////////////////////////
//int abab(int o)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= o; i++)
//	{
//		sum = sum * i;
//	}
//	return sum;
//}
//double function(int n, double x)
//{
//	int a = 0;
//	double sum = 0;
//	int o = 1;
//	int q = 0;
//	for (a = 0; a < n; a++)
//	{
//		sum = (pow(x, o) / (double)abab(o)) * pow(-1, q) + sum;
//		o += 2;
//		q += 1;
//	}
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	double b = 0;
//	scanf("%d %lf", &a, &b);
//	double c = function(a, b);
//	printf("%.4lf", c);
//	return 0;
//}



///////////////////////////////////////////////////

//int function(int m)
//{
//	int n = m;
//	int a = n * n;
//	int j = 0;
//	do
//	{
//		n = n / 10;
//		j += 1;
//	} while (n);
//	int x = pow(10, j);
//	if (a % x == m)
//		return 1;
//	else
//		return 0;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = function(a);
//	printf("%d %d", a, b);
//	return 0;
//}