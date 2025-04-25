#include<stdio.h>
//enum day
//{
//	mon=1,//mon=1,(注意区别)
//	tues,
//	wed,
//	thur,
//	fri,
//	sat,
//	sun
//};
//
//int main()
//{
//	enum day d = mon;
//	printf("%d\n", mon);
//	printf("%d\n", tues);
//	printf("%d\n", wed);
//	printf("%d\n", thur);
//	printf("%d\n", fri);
//
//	return 0;
//}


//union Un
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	union Un u;
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));
//}





//动态内存管理
//malloc      int*p=(int*)malloc(40)
//calloc
//realloc
//free
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(40);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1 + i;
	}
	int* ptr = (int*)realloc(p, 80);
	if (ptr != NULL)
	{
		p = ptr;
	}
	return 0;
}


//重点
//if (p == NULL)
//{
//	printf("%s\n", strerror(errno));
//	return 1;
//}
//int i = 0;

//重点
//free(p);
//p = NULL;


//返回栈空间的地址问题//危险