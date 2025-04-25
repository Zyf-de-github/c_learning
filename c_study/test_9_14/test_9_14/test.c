#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型


////函数的递归
//void print(unsigned int a)
//{
//	if (a > 9)
//		print(a / 10);
//		printf("%d ", a % 10);
//}
//int main()
//{
//	unsigned num = 0;
//	scanf("%u", &num); 
//	print(num);
//	return 0;
//}

//1.正常函数
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')//字符使用单引号
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.递归函数
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


////阶乘递归
//int mul(int a)
//{
//	if (a == 1)
//		return 1;
//	else
//		return a * mul(a - 1);
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int r = mul(a);
//	printf("%d\n", r);
//	return 0;
//}

//斐波那契数列递归
//但是不适合这种方法，计算太复杂，重复计算
int fib(int a)
{
	if (a <= 2)
		return 1;
	else
		return fib(a - 2) + fib(a - 1);
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int r = fib(a);
	printf("%d\n", r);
	return 0;
}








