#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>



void menu()
{
	printf("**********************\n");
	printf("***** 1 ��ʼ��Ϸ******\n");
	printf("***** 0 �˳���Ϸ******\n");
	printf("**********************\n");
}
void game()
{
	int red = rand() % 100 + 1;
	//printf("%d\n",red);
	int input2 = 0;
	printf("�������>");
	while (1)
	{
		scanf("%d", &input2);
		if (input2 < red)
			printf("��С��\n");
		else if (input2 > red)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬������\n");
			break;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
		do 
		{
			menu();
			printf(">��ѡ��\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("��ʼ��Ϸ\n");
				game();
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default:
				printf("�����������������\n");
				break;
			}
		} 
		while (input);

	return 0;
}