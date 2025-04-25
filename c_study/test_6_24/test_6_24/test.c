#include <stdio.h>
int main()
{
	int a = 10;
	printf("%p\n", &a);//%p打印指针
	int* pa = &a;//int* b为指针变量
	            //*代表其后的变量为指针   int指其后变量为整形类型
	char ch = 'w';
	char* pch = &ch;
	printf("%p", pa);
	printf("%p", pch);
	//*p 解引用操作符  通过p的地址找到p指向的对象
	//例如*pa为10，*pch为w
	return 0;
}