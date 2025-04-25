#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	char s[100] = { 0 };
//	char ss[10][100] = { 0 };
//	int my_switch = 0;
//	int n = 0;
//	int i,j;
//	scanf("%s", &s);
//	scanf("%d", &my_switch);
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &ss[i]);
//	}
//	/*for (i = 0; i < n; i++)
//	{
//		printf("%s\n", ss[i]);
//	}*/
//	if (my_switch == 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			int x = 0;
//			for (j = 0; j < 100; j++)
//			{
//				if (ss[i][j] == s[x])
//					x++;
//				if (s[x] == 0)
//				{
//					printf("%s\n", ss[i]);
//					break;
//				}
//			}
//		}
//	}
//	else
//	{
//		for (i = 0; i < n; i++)
//		{
//			int x = 0;
//			for (j = 0; j < 100; j++)
//			{
//				if ((ss[i][j] + 32 == s[x]) || (ss[i][j] - 32 == s[x]) || (ss[i][j] == s[x]))
//					x++;
//				if (s[x] == 0)
//				{
//					printf("%s\n", ss[i]);
//					break;
//				}
//			}
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	char c = 0;
//	int my_switch = 0;
//	char s[100] = { 0 };
//	int flag = 0;
//	int i;
//	scanf("%c %d", &c,&my_switch);
//	scanf("%s", &s);
//	if (my_switch == 1)
//	{
//		for (i = 0; i < 100; i++)
//		{
//			if (s[i] == c)
//				flag++;
//		}
//	}
//	else
//	{
//		for (i = 0; i < 100; i++)
//		{
//			if ((s[i] == c)||(s[i]-32==c)||(s[i]+32==c))
//				flag++;
//		}
//	}
//	printf("%d\n", flag);
//	return 0;
//}


////////////////////////////////////
///////////////ÓÐÎÊÌâ///////////////
////////////////////////////////////
//int main()
//{
//	char arr[20] = {0};
//	scanf("%s", &arr);
//	int i = 0;
//	char x = 0;
//	int y = 0, z = 0;
//	int f = 0;
//	int* p = &y;
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] == ' ')
//		{
//			p = &y;
//		}
//		else if (arr[i] == '+')
//			x = '+';
//		else if (arr[i] == '-')
//			x = '-';
//		else if (arr[i] == '*')
//			x = '*';
//		else if (arr[i] == '/')
//			x = '/';
//		else if (arr[i] == '%')
//			x = '%';
//		else if (arr[i] == 0)
//			continue;
//		else
//		{
//			*p = *p * 10 + (int)arr[i];
//		}
//	}
//	switch (x)
//	{
//	case'+':f = x + y; break;
//	case'-':f = x - y; break;
//	case'*':f = x * y; break;
//	case'/':f = x / y; break;
//	case'%':f = x % y; break;
//	default:break;
//	}
//	printf("%d", f);
//
//	return 0;
//}


//double a(int n)
//{
//	if (n == 1)
//		return 2;
//	else if (n == 2)
//		return 3;
//	else
//		return a(n - 1) + a(n - 2);
//}
//double b(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return b(n - 1) + b(n - 2);
//}
//double get_sum(int n)
//{
//	if (n == 1)
//		return a(1) / b(1);
//	else
//		return a(n) / b(n) + get_sum(n - 1);
//}
//
//int main()
//{
//	double sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	sum = get_sum(n);
//	printf("%.2lf", sum);
//	return 0;
//}

//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int x = 0;
//	int n = 0;
//	int i;
//	int flag = 0;
//	scanf("%d", &n);
//	x = fib(n);
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		printf("%d", x);
//	else
//		printf("yes");
//	return 0;
//}



















