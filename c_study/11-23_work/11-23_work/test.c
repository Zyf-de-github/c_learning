#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//int main()
//{
//	int i = 0;
//	int x = 0;
//	int flag = 0;
//	scanf("%d", &i);
//	int arr[100] = { 0 };
//	for (x = 0; x < i ; x++)
//		scanf("%d", &arr[x]);
//	for (x = 1; x < i - 1; x++)
//	{
//		if (	((arr[x - 1] < arr[x]) && (arr[x + 1] < arr[x]))
//				|| 
//				((arr[x - 1] > arr[x]) && (arr[x + 1] > arr[x]))
//			)
//		{
//			flag++;
//		}
//	}
//	printf("%d", flag);
//
//	return 0;
//}


//double function(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1 / (1 + function(n - 1));
//	}
//
//}

//int function(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int arr[200] = { 0 };
//	for (i = 2; i < 1000; i++)
//	{
//		if (function(i))
//		{
//			arr[j] = i;
//			j++;
//		}
//	}
//	//for (j = 0; j < 200; j++)
//	//{
//	//	printf("%d ", arr[j]);
//	//}
//	int mul = 0;
//	for (i = 0; i < 200; i++)
//	{
//		for (j = 0; j < 200; j++)
//		{
//			if (arr[i] + arr[j] == n)
//				goto flag;
//		}
//	}
//	flag:
//	printf("%d %d\n", arr[i], arr[j]);
//	return 0;
//}

//int fibonacci(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int arr[40] = { 0 };
//	for (i = 0; i < 40; i++)
//	{
//		if (i == 0)
//			arr[i] = 1;
//		else if (i == 1)
//			arr[i] = 1;
//		else
//			arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	int x = 0;
//	scanf("%d", &x);
//	if (fibonacci(arr[x - 1]))
//		printf("yes\n");
//	else
//		printf("%d\n",arr[x-1]);
//
//	return 0;
//}

//int fib(int n)
//{
//	if (n == 0)
//		return 7;
//	else if (n == 1)
//		return 11;
//	else
//		return fib(n - 1) + fib(n - 2);
//
//}



int main()
{
	int x = 0;
	int i = 0;
	int a, h1, h2, m1, m2,dh;
	int stu[100] = {0};
	scanf("%d", &x);
	
	for (i = 0; i < x; i++)
	{
		scanf("%d %2d:%2d %2d:%2d",&a,&h1,&m1,&h2,&m2);
		dh = (h2 - h1) * 60 + (m2 - m1);
		stu[a-1] += dh;
	}
	int j = 0;
	int mid;
	int arr[100] = { 0 };
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 1;
	}
	for (i = 99; i >0 ; i--)
	{
		for (j = i; j > 0; j--)
		{
			if (stu[j] > stu[j - 1])
			{
				mid = stu[j - 1];
				stu[j - 1] = stu[j];
				stu[j] = mid;

				mid = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = mid;
			}
		}
	}
	for (i = 0; i < 100; i++)
	{
		if (stu[i] != 0)
			printf("%d %d\n", arr[i], stu[i]);
	}







	return 0;
}

