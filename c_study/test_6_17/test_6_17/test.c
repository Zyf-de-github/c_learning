#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	float a = 7 / 2.0;
//	printf("%.2f\n", a);//��ӡ%fʱ�����д%.2f,��˼�Ǵ�ӡ�ٷֺź���λ
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	a = a + 3;
//	//a += 3;    �������
//	return 0;
//}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int r = a >= b ? a : b;
	printf("%d", r);
	return 0;
}