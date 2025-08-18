#include "game.h"



void menu()
{
	printf("*********************\n");
	printf("****  1  begin  *****\n");
	printf("****  0  exit   *****\n");
	printf("*********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	int_board(board,ROW,COL);
	display_board(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
		computer_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		display_board(board, ROW, COL);
		
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");		
	else if(ret=='Q')
		printf("平局\n");
	display_board(board, ROW, COL);

}



int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n"); 
			break;
		default:
			printf("输入错误，请重新输入\n");
			continue;
		}

	} while (a);
	return 0;
}