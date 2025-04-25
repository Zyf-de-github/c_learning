#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//p的类型是int*
//	int(*p2)[10] = &arr;//p2的类型是int（*）[10]
//	return 0;
//}




//void my_print(int(*p)[3], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//		
//			printf("%d", *((*p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	my_print(arr, 3, 5);
//	return 0;
//}


//函数的地址
//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int(*p)(int, int) = &add;
//	int ret = (*p)(2, 3);//函数地址的应用
//	int ret = p(2, 3);//这样写也可以
//
//	printf("%d\n", ret);
//	return 0;
//}







//void menu()
//{
//	printf("*******************************\n");
//	printf("***********1  +   *************\n");
//	printf("***********2  -   *************\n");
//	printf("***********3  *   *************\n");
//	printf("***********4  /   *************\n");
//	printf("***********0 退出 *************\n");
//	printf("*******************************\n");
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void cala(int(*pf)(int, int))
//{
//	int ret = 0;
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cala(add);
//			break;
//		case 2:
//			cala(sub);
//			break;
//		case 3:
//			cala(mul);
//			break;
//		case 4:
//			cala(div);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

int main()
{
	int(*arr[4])(int, int) = { add,sub,mul,div };
	int(*(*arr2)[4])(int, int) = &arr;
	return 0;
}


//qsort***