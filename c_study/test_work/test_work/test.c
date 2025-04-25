#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型


int main()
{
	int year, month, day;
	int sum = 0;
	int arr[13] = { 31,30,31,30,31,30,31,31,30,31,30,31 };
	printf("请按照格式输入年月日(xxxx-xx-xx):>");
	scanf("%d-%d-%d", &year, &month, &day);
	if ((year / 4 == 0 && year / 100 != 0) || (year / 400 == 0))
	{
		//是闰年
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
		//不是闰年
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
	printf("这是这一年的第%d天\n", sum);
	return 0;
}