#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型


//bool is_prime(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			return false;
//		
//	
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}


//void add(int* i)
//{
//	(*i) ++;
//}
////n++先使用，再加加
////++n先加加，再使用
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", strlen("abcdef"));//链式访问
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//函数若是空函数void main()时，若要拒绝参数可以
//在()中填入void，如：void main (void)


//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//将函数定义在主函数后，需在函数前面声明
//如 int add (int x,int y);
//或者在头文件中声明
#include "add.h"
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}