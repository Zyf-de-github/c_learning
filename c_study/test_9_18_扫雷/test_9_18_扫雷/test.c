#include "game.h"


void menu()
{
	printf("***************************\n");
	printf("*****  1  ��ʼ��Ϸ  *******\n");
	printf("*****  0  �˳���Ϸ  *******\n");
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
		printf("������>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
		//int arr_mine[11][11];
		//int arr_display[11][11];


	} while (a);
	return 0;
}
