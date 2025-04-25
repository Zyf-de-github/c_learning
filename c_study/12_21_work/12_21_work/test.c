#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int a, b;
//	int num[30] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		if (pow((a - 4), 2) + pow((b - 4), 2) > pow((a + 4), 2) + pow((b + 4), 2))
//		{
//			num[j] = 2;
//			j++;
//		}
//		else
//		{
//			num[j] = 1;
//			j++;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}

//int is_tan(int a, int b, int c)
//{
//	int max;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	if (max < c)
//		max = c;
//	if (max == a)
//	{
//		if ((abs(b - c)) < a && a < (b + c))
//			return 1;
//	}
//	else if (max == b)
//	{
//		if ((abs(a - c)) < b && b < (a + c))
//			return 1;
//	}
//	else
//	{
//		if ((abs(b - a)) < c && c < (b + a))
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0,i=0;
//	int flag = 0;
//	scanf("%d", &n);
//	//getchar();
//	int arr[30] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 2; i++)
//	{
//		if (is_tan(arr[i], arr[i + 1], arr[i + 2]))
//		{
//			flag++;
//		}
//	}
//	printf("%d", flag);
//	return 0;
//}

//char roy_13(char x)
//{
//	if (x >= 'A' & x <= 'Z')
//	{
//		if (x - 13 < 'A')
//			return 'Z' - 12 + (x - 'A');
//		else
//			return x - 13;
//	}
//	else 
//	{
//		if (x - 13 < 'a')
//			return 'z' - 12 +(x - 'a');
//		else
//			return x - 13;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[50] = { 0 };
//	gets(arr);
//	for (i = 0; i < 50; i++)
//	{
//		//printf("%c", arr[n]);
//		if ((arr[i] >= 'A' && arr[i] <= 'Z')||(arr[i] >= 'a' && arr[i] <= 'z'))
//			arr[i] = roy_13(arr[i]);
//	}
//	for (i = 0; i < 50; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

double P(int n, double x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return ((2 * n - 1) * x * P(n - 1, x) - (n - 1) * P(n - 2, x))/(double)n;
}
int main()
{
	int n;
	double x;
	scanf("%d%lf", &n, &x);
	double sum = 0;
	//double sum = P(n, x);
	for (; n > 0; n--)
	{
		sum = sum + P(n, x);
	}
	printf("%.4lf", sum);
	return 0;
}