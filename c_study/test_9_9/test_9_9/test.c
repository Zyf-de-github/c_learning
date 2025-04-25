#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls

//int main()
//{
//	char arr1[] = { "welcome to xidian" };//为a,b,c,....,\0
//	char arr2[] = { "#################" };//sizeof求的是元素个数
//	int sz = sizeof(arr2) / sizeof(arr2[0]) - 2;
//	int i = 0;
//	while(i <= sz)
//	{
//		arr2[i] = arr1[i];
//		arr2[sz] = arr1[sz];
//		i++;
//		sz--;
//		Sleep(250);//延迟1000毫秒
//		system("cls");//清空屏幕
//		printf("%s\n", arr2);//打印字符串用%s
//	}
//	return 0;
//}


int main()
{
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);//数组名本身就是地址，不需要&
		if (strcmp(password,"abcdefg")==0)
		{//比较两个字符串是否相等不能用==
		 //而应该用strcmp
		 //如果函数返回值是0表示相等
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	return 0;
}