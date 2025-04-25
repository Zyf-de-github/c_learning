#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int	age = 30;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)    多条件使用&&
//		printf("青年\n");
//	else
//		printf("壮年\n");
//
//	return 0;
// 
//}


//建议if(a == 1)写成if(1 == a)


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (1 == num % 2)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	while (a < 100)
//	{
//		a++;
//		if (a % 2 == 1)
//			printf("%d\n", a);
//
//	}
//	return 0;
//}

//多分支循环用·switch
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Monoday");
//		break;
//	case 2:
//		printf("Trusday");
//		break;
//	case 3:
//		printf("wednesday");
//		break;
//	}
//	return 0;
//}
// 
// 
//int main()
//{
//	int a = 0;
//	scanf("%d",& a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("选择错误");
//	}
//	return 0;
//}

//循环语句for  while  do_while

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//%c是打印字符

//int main()
//{
//	int arr[] = { 23,32,24,98,73,84,76 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;      //%02d  是指用0补齐的两位数  限制域宽
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

//输入float类型  float a = 0.0f 
//输出要求0.00 则printf时需加.2如 %.2f......(小数点后保留两位)



//static修饰静态函数，在主函数之外不重新初始化

int main()
{
	int arr[4] = { 0 };
	int i = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	int max = arr[0];
	int a = 1;
	while (a < 4)
	{
		if (max < arr[a])
			max = arr[a];
		a++;
	}
	printf("%d\n", max);

	return 0;
}