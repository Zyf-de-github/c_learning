#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls

//int main()
//{
//	char arr1[] = { "welcome to xidian" };//Ϊa,b,c,....,\0
//	char arr2[] = { "#################" };//sizeof�����Ԫ�ظ���
//	int sz = sizeof(arr2) / sizeof(arr2[0]) - 2;
//	int i = 0;
//	while(i <= sz)
//	{
//		arr2[i] = arr1[i];
//		arr2[sz] = arr1[sz];
//		i++;
//		sz--;
//		Sleep(250);//�ӳ�1000����
//		system("cls");//�����Ļ
//		printf("%s\n", arr2);//��ӡ�ַ�����%s
//	}
//	return 0;
//}


int main()
{
	char password[20] = {0};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);//������������ǵ�ַ������Ҫ&
		if (strcmp(password,"abcdefg")==0)
		{//�Ƚ������ַ����Ƿ���Ȳ�����==
		 //��Ӧ����strcmp
		 //�����������ֵ��0��ʾ���
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	return 0;
}