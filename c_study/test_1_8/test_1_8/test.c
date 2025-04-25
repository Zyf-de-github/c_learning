#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//typedef struct stu {
//	int num;
//	int t1;
//	int m1;
//	int t2;
//	int m2;
//	int sum;
//}stu;
//typedef struct time {
//	int num;
//	int sum;
//}time_int;
//int main()
//{
//	stu arr[100] = { 0 };
//	int time[100] = { 0 };
//	int n = 0,i=0,j=0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %2d:%2d %2d:%2d", &arr[i].num, &arr[i].t1, &arr[i].m1, &arr[i].t2, &arr[i].m2);
//		arr[i].sum = (arr[i].t2 - arr[i].t1) * 60 + arr[i].m2 - arr[i].m1;
//		time[arr[i].num] += arr[i].sum;
//	}
//	time_int res[100] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		res[i].num = i;
//		res[i].sum = time[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = n - 1 - i; j >= 0; j--)
//		{
//			if (res[j].sum < res[j+1].sum)
//			{
//				time_int mid = res[j + 1];
//				res[j + 1] = res[j];
//				res[j] = mid;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (res[i].sum != 0)
//			printf("%d %d\n", res[i].num, res[i].sum);
//	}
//	return 0;
//}





//typedef struct num {
//	int num;
//	int time;
//}num;
//int main()
//{
//	int n = 0,i=0,x=0,j=0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	num shu[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		arr[x] += 1;
//	}
//	for (i = 0,j=0; i < 1000; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//		else
//		{
//			shu[j].num = i;
//			shu[j].time = arr[i];
//			j++;
//		}
//	}
//	for (i = 0; i < 1000; i++)
//	{
//		for (j = 1000 - 1 - i; j >= 0; j--)
//		{
//			if (shu[j].time<= shu[j+1].time)
//			{
//				num mid = shu[j + 1];
//				shu[j + 1] = shu[j];
//				shu[j] = mid;
//			}
//		}
//	}
//	for (i = 0; i < 1000; i++)
//	{
//		if (shu[i].time != 0)
//		{
//			printf("%d %d\n", shu[i].num, shu[i].time);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0, j = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] == '*')
//			arr[i] = 0;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		for (j = 0; j < 100 - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				char mid = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = mid;
//			}
//		}
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] != 0)
//			printf("%c", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int sum = 0;
	int i = 0;
	int n = 0;
	int x = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += (x /= 10) + x;
	}
	printf("%d", sum % 10);
	return 0;
}














