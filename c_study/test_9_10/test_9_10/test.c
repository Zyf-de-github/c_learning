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
	printf("***** 1 开始游戏******\n");
	printf("***** 0 退出游戏******\n");
	printf("**********************\n");
}
void game()
{
	int red = rand() % 100 + 1;
	//printf("%d\n",red);
	int input2 = 0;
	printf("请猜数字>");
	while (1)
	{
		scanf("%d", &input2);
		if (input2 < red)
			printf("猜小了\n");
		else if (input2 > red)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜中了\n");
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
			printf(">请选择\n");
			scanf("%d", &input);
			switch (input)
			{
			case 1:
				printf("开始游戏\n");
				game();
				break;
			case 0:
				printf("退出程序\n");
				break;
			default:
				printf("输入错误请重新输入\n");
				break;
			}
		} 
		while (input);

	return 0;
}