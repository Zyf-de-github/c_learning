#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//��������


//int main()
//{
//	printf("%d\n", sizeof(char*));
//	return 0;
//}

//ָ�����͵�����


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	//1.
//	//for (i = 0; i < 10; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//2.
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p = 0;
//	//	p++;
//	//}
//
//	//3.
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}

//ָ���ָ��õ���������֮��Ԫ�صĸ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//arr[i]  ==  *(arr+i)



//�ṹ��ʹ�÷���

//struct peo
//{
//	char name[20];
//	char sex[10];
//	char tele[12];
//	int high;
//};
//
//struct st
//{
//	struct peo p;
//	int num;
//	float f;
//};
//
//void print2(struct peo* sp)
//{
//	printf("%s %s %s %d\n",sp->name ,sp->sex ,sp->tele ,sp->high );
//}
//int main()
//{
//	struct peo p1 = { "����","��","134568453",183 };
//	struct st s = { {"����","��","12345673636",175},100,3.14 };
//	printf("%s %s %s %d\n", p1.name, p1.sex, p1.tele, p1.high);
//	printf("%s %s %s %d %d %lf\n", s.p.name, s.p.sex, s.p.tele, s.p.high, s.num, s.f);
//
//	print2(&p1);
//	return 0;
//}
////�ṹ�崫�ε�ʱ��Ҫ���ṹ���ַ����ѹջ



//����һ��д��
//int count_num(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a /= 2;
//	}
//	return count;
//}


//�ڶ���д��
//int count_num(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}


//����д��
//int count_num(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num(num);
//	printf("%d\n", n);
//	return 0;
//}

//n&(n-1)==0
//�����ж�һ�����Ƿ�Ϊ����n�η�

//int count_num_bit(int a,int b)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) != ((b >> i) & 1))
//			count++;
//	}
//	return count;
//}



//����ʹ����������^
int count_num_bit(int a,int b)
{
	int i = 0;
	int ret = a ^ b;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((ret>>i)&1==1)
			count++;
	}
	return count;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int ret = count_num_bit(a,b);
	printf("%d\n", ret);
	return 0;
}

//assert ���ԣ�����