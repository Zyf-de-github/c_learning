#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("*****  1  开始游戏  *******\n");
	printf("*****  0  退出游戏  *******\n");
	printf("***************************\n");
}



void game()
{
	char my_arr[ROWS][COLS] = { 0 };
	char display_arr[ROWS][COLS] = { 0 };
	int_char(my_arr, ROWS, COLS,'0');
	int_char(display_arr, ROWS, COLS,'*');
	
	set_arr(my_arr, ROWS, COLS);
	print_arr(display_arr, ROWS, COLS);
	find_arr(my_arr, display_arr, ROWS, COLS);
			
	
	//print_arr(display_arr, ROWS, COLS);
	//find_arr(my_arr, display_arr, ROWS, COLS);
}

//print_arr(my_arr, ROWS, COLS);
//print_arr(display_arr, ROWS, COLS);


int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("请输入>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
		//int arr_mine[11][11];
		//int arr_display[11][11];


	} while (a);
	return 0;
}
