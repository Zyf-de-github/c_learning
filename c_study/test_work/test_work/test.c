#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//��������


int main()
{
	int year, month, day;
	int sum = 0;
	int arr[13] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	printf("�밴�ո�ʽ����������(xxxx-xx-xx):>");
	scanf("%d-%d-%d", &year, &month, &day);
	if ((year / 4 == 0 && year / 100 != 0) || (year / 400 == 0))
	{
		//������
		int i = 0;
		if (month != 1)
		{
			for (i = 0; i < month - 1; i++)
			{
				sum = sum + arr[i];
			}
			sum = sum - 1;
		}
		else
			sum = 31;
	}
	else
	{
		//��������
		int i = 0;
		if (month != 1)
		{
			for (i = 0; i < month - 1; i++)
			{
				sum = sum + arr[i];
			}
			sum = sum - 2;
		}
		else
			sum = 31;
	}
	sum = sum + day;
	printf("������һ��ĵ�%d��\n", sum);
	return 0;
}