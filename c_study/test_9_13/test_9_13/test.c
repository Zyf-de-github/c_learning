#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//��������


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
////n++��ʹ�ã��ټӼ�
////++n�ȼӼӣ���ʹ��
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
//	//printf("%d\n", strlen("abcdef"));//��ʽ����
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//�������ǿպ���void main()ʱ����Ҫ�ܾ���������
//��()������void���磺void main (void)


//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}

//�����������������������ں���ǰ������
//�� int add (int x,int y);
//������ͷ�ļ�������
#include "add.h"
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}