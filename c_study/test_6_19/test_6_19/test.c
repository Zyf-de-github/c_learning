#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void test()
//{
//	static int b = 1;//static���ξֲ�����ʱ������������
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


//��ʹ���ⲿ��������Ҫ����������extern
//static�����ⲿ������ʱ�򣬱������ⲿ�������Ա�Ϊ�ڲ���������

//register int a �����Ĵ�������������ѱ���a�����ڼĴ����У������ٶȸ���

/////#define�����ʶ������
//#define num 100
//int main()
//{
//	int a = num;
//	printf("%d\n", a);
//	return 0;
//}
/////#define���ܶ����,�뺯������
#define add(x,y) ((x)+(y))
int main()
{
	int x = 10;
	int y = 20;
	int c = add(x, y);
	printf("%d\n", c);
	return 0;
}