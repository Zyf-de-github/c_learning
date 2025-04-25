//&按位与 有一个数为真结果为真
//|按位或 有一个数为假，结果为加
//^异或   相同为0，相异为1


//原码，反码，补码
//负数补码=反码加一


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main() {
//	int a = (int) - 2.4;
//	printf("%d\n", a);
//	return 0;
//}


//运算优先级 
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
//	return 0;
//}


//三目操作符
//（表达式1）？（表达式2）：（表达式3）
//表达式1为真算二不算三
//表达式1为假算三不算二
//int main()
//{
//	
//	int a = 3;
//	int b = 0;
//	b = (a > 5 ? 3: -3);
//	printf("%d\n", b);
//	return 0;
//}

//逗号表达式


//整型提升
//算数转换

//走台阶
//int fib(int n)
//{
//	if (n > 2)
//		return fib(n - 2) + fib(n - 1);
//	if (n = 2)
//		return 2;
//	if (n = 1)
//		return 1;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = fib(n);
//	printf("%d %d\n", n, num);
//	return 0;
//}



//getchar()
//可以处理\n


//%c写成% c时，意思是跳过下一个字符前面的所有字符


//水仙花数
int judge(int a)
{
	int b = (a / 10000) * (a % 10000) + (a / 1000) * (a % 1000) + (a / 100) * (a % 100) + (a / 10) * (a % 10);
	if (a == b)
		return 1;
	else
		return 0;
}
int main()
{
	int a = 0;
	for (a = 10000; a < 100000; a++)
	{
		if (judge(a) == 1)
			printf("%d ", a);
	}
	return 0;
}

//pow(x,y)是指x的y次方


















