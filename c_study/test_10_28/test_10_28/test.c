//feof���ж϶�ȡ�ļ���Ϊ�쳣ֹͣ�����ļ�����ֹͣ
//��ȡ�����������жϱ�׼
//1.fgetc��ȡ���������ֵ��EOFֹͣ
//2.fgets��ȡ���������ֵ��NULLֹͣ
//
//fread��*p��size��int��������int���Σ�FILE��ַ���ķ���ֵ�ǳɹ���ȡ
//���ĸ����������жϷ���ֵ��Ҫ��ȡ���������Աȣ���С�ڣ����Ƕ�ȡ����
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
//	if (ferror(fp))//ferror�ж��Ƿ����
//	{
//		printf("I/O error\n");
//	}
//	else if (feof(fp))//feof�ж��Ƿ���ĩβ
//	{
//		printf("End of file successfully\n");
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//fflash ˢ�»�����




//Ԥ����׶�   gcc test.c-E-o test.i
//1.ͷ�ļ�����
//2.���ע��
//3��#define���ŵ��滻
//------------------->Ԥ������еĶ����ı��������ı�����ɾ���
//
//����׶�     gcc test.i -S
//�����Է���ɻ��
//1.�ʷ�����
//2.�﷨����
//3.���ŷ���
//4.�������
//
//���׶�     gcc test.s-c  test.o
//1.�ѻ�����ת��Ϊ�����ƴ���
//2.�γɷ��ű�
//
//���ӽ׶�
//1.�ϲ��α�
//2.���ű�ĺϲ����ض�λ



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


//\  ���з�


//��
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

//#define CAT(A,B) A##B//��AB��������
//int main()
//{
//	int class106 = 100;
//	printf("%d\n", CAT(class, 106));
//	return 0;
//}


//�궨��Ⱥ��������
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = MAX(2, 4);
//	printf("%d\n", a);
//	return 0;
//}

//���һ���ŵ�
//����Դ������ͣ�

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

//�����ж��壬�ڱ�����������������涨��

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
	//ѡ�����
#if 0//�������ʽ
	printf("hehe\n");
#endif // 0//�������ʽ

#if 0

#elif 0

#else

#endif// 0

	return 0;
}

#if defined(MAX)//������MAX��ִ��
#endif
#ifdef MAX//������MAX��ִ��
#endif


#if !defined(MAX)//δ������MAX��ִ��
#endif
#ifndef MAX//������MAX��ִ��
#endif

//Ƕ�׶���   ��if�������

//��ֹ�ظ�����ͷ�ļ�
//1.
#ifndef __TEST_H__
#define __TEST_H__

int Add(int x, int y);

#endif // !__TEST_H__

//2.
#pragma once


//����
//#error
//#pragma
//#line