#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>



//int main()
//{
//	int arr[10];
//	int i = 0;
//	printf("����������ʮ������>\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &arr[i]);//forѭ����arr����������Ƚϵ�ʮ����
//
//	int x = 0;
//	int mid = 0;
//	for (i = 0; i < 10; i++)//��ʮ�������ܼƽ���ʮ��
//	{
//		for (x = 0; x < 9 - i; x++)//��һ���н����Ĵ���
//		{
//			
//			if (arr[x] > arr[x + 1])//��������������Ƚϣ���ǰ�����
//			{						//���ں�������򽻻���������λ��
//				mid = arr[x + 1];
//				arr[x + 1] = arr[x];
//				arr[x] = mid;//�����м����mid��������
//			}
//		}
//	}
//
//	int y = 0;
//	printf("����������>");
//	for (y = 0; y < 10; y++)
//		printf("%d ", arr[y]);//��ӡ����������ɵ�����
//
//	return 0;
//}
