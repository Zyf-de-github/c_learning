//&��λ�� ��һ����Ϊ����Ϊ��
//|��λ�� ��һ����Ϊ�٣����Ϊ��
//^���   ��ͬΪ0������Ϊ1


//ԭ�룬���룬����
//��������=�����һ


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


//�������ȼ� 
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d);
//	return 0;
//}


//��Ŀ������
//�����ʽ1���������ʽ2���������ʽ3��
//���ʽ1Ϊ�����������
//���ʽ1Ϊ�����������
//int main()
//{
//	
//	int a = 3;
//	int b = 0;
//	b = (a > 5 ? 3: -3);
//	printf("%d\n", b);
//	return 0;
//}

//���ű��ʽ


//��������
//����ת��

//��̨��
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
//���Դ���\n


//%cд��% cʱ����˼��������һ���ַ�ǰ��������ַ�


//ˮ�ɻ���
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

//pow(x,y)��ָx��y�η�


















