#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}
// 
// 
//int main() {
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	return 0;
//}


//int main()
//{
//	int high = 180;
//	int age = 20;
//	float wight = 88.5;
//	printf("wight=%d\n", wight);
//	printf("high=%d\n", high);
//	printf("age=%d\n",age);
//	return 0;


//int main()
//{
//	int num;
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	const int a = 10;//const 修饰常变量 不能随意更改
//	a = 20;
//	printf("%d", a);
//	return 0;


//}三种常量 1.字符常量 2.const常变量 3.define定义常量


#define max 100
#define chr "abcdef"
int main()
{
	printf("%d\n", max);
	int a = max;
	printf("%d\n", a);
	printf("%s\n", chr);
	return 0;
}

//%s  是用来打印字符串   %d  是用来打印整形