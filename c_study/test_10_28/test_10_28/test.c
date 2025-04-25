//feof是判断读取文件因为异常停止或者文件结束停止
//读取结束有两种判断标准
//1.fgetc读取，如果返回值是EOF停止
//2.fgets读取，如果返回值是NULL停止
//
//fread（*p，size（int），几个int整形，FILE地址）的返回值是成功读取
//到的个数，可以判断返回值与要读取几个的数对比，若小于，则是读取结束
#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int c;
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp)
//	{
//		perror("file open error\n");
//		return 1;
//	}
//	while (c = fgetc(fp) != EOF)
//	{
//		putchar(c);
//	}
//	if (ferror(fp))//ferror判断是否出错
//	{
//		printf("I/O error\n");
//	}
//	else if (feof(fp))//feof判断是否是末尾
//	{
//		printf("End of file successfully\n");
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//fflash 刷新缓冲区




//预处理阶段   gcc test.c-E-o test.i
//1.头文件包含
//2.清除注释
//3。#define符号的替换
//------------------->预处理进行的都是文本操作，文本的增删查改
//
//编译阶段     gcc test.i -S
//把语言翻译成汇编
//1.词法分析
//2.语法分析
//3.符号分析
//4.语义汇总
//
//汇编阶段     gcc test.s-c  test.o
//1.把汇编代码转化为二进制代码
//2.形成符号表
//
//连接阶段
//1.合并段表
//2.符号表的合并和重定位



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("file=%s\n", __FILE__);
//		printf("line=%d\n", __LINE__);
//		printf("date=%s\n", __DATE__);
//		printf("time=%s\n", __TIME__);
//
//		//return EXIT_SUCCESS;
//		//return EXIT_FAILURE;
//
//	}
//	/*printf("%d\n", __STDC__);*/
//
//	return 0;
//}


//\  续行符


//宏
//#define wqr(x) ((x)*(x))
//#define print(n) printf("the value of " #n " is %d\n",n) //#n --> "n"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	print(a);
//	print(b);
//	return 0;
//}

//#define CAT(A,B) A##B//将AB连接起来
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class, 106));
//	return 0;
//}


//宏定义比函数更灵活
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = MAX(2, 4);
//	printf("%d\n", a);
//	return 0;
//}

//宏的一个优点
//其可以传递类型；

//#define MALLOC(NUM,TYPE) (TYPE*)malloc((NUM)*sizeof(TYPE))
//
//int main()
//{
//	//malloc(40);
//	int* p=MALLOC(10, int);
//	return 0;
//}


//#define M 100
//int main()
//{
//	printf("%d\n", M);
//
//#undef M
//	printf("%d\n", M);
//	return 0;
//}

//命令行定义，在编译过程中在命令里面定义

//#define __DEBUG__
int main()
{
	int i;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
#ifdef __DEBUG__
		printf("%d\n", arr[i]);
#endif // __DEBUG__

	}
	//选择编译
#if 0//常量表达式
	printf("hehe\n");
#endif // 0//常量表达式

#if 0

#elif 0

#else

#endif// 0

	return 0;
}

#if defined(MAX)//定义了MAX就执行
#endif
#ifdef MAX//定义了MAX就执行
#endif


#if !defined(MAX)//未定义了MAX就执行
#endif
#ifndef MAX//定义了MAX就执行
#endif

//嵌套定义   跟if语句相似

//防止重复定义头文件
//1.
#ifndef __TEST_H__
#define __TEST_H__

int Add(int x, int y);

#endif // !__TEST_H__

//2.
#pragma once


//其他
//#error
//#pragma
//#line