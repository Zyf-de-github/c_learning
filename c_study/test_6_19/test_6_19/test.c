#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int b = 1;//static修饰局部变量时出作用域不销毁
//	b++;
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}


//若使用外部变量，需要声明变量：extern
//static修饰外部变量的时候，变量的外部链接属性变为内部连接属性

//register int a 创建寄存器变量，建议把变量a放置在寄存器中，运算速度更快

/////#define定义标识符常量
//#define num 100
//int main()
//{
//	int a = num;
//	printf("%d\n", a);
//	return 0;
//}
/////#define还能定义宏,与函数类似
#define add(x,y) ((x)+(y))
int main()
{
	int x = 10;
	int y = 20;
	int c = add(x, y);
	printf("%d\n", c);
	return 0;
}