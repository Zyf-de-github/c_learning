#include "game.h"

void int_board(char board[ROW][COL], int row, int col)//初始化
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}

}


void display_board(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("| %c |",board[i][j]);
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
				printf("|---|");
		}
		printf("\n");
	}
}



void player_move(char board[ROW][COL], int row, int col)
{
	printf("请玩家输入下棋的位置（行,列）>\n");
	int i = 0;
	int j = 0;
	
	while (1)
	{
		scanf("%d,%d", &i, &j);
		if (i >= 0 && i <= row && j > 0 && j <= col)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				break;
			}
			else
			{
				printf("你不能在这里下棋\n");
			}
		}
		else
			printf("输入错误，请重新输入\n");
	}





	//began:
	//scanf("%d %d", &i, &j);
	//if (i > row && i<0 && j > col && j < 0)
	//{
	//	printf("输入错误，请重新输入\n");
	//
	//}
	//board[i-1][j-1] = '*';
}



void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % row;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int is_full(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] != ' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (is_full(board,row,col))
		return 'Q';
	return 'C';
}



//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0
//0 0 0 0 0 0 0 0 0




//for (i = 0; i <= row; i++)
//{
//	count1 = 0;
//	//横着连五子
//	for (j = 0; j <= col; j++)
//	{
//		if (board[i][j] == '*')
//			count1++;
//		if (count1 >= win_number)
//		{
//			printf("你赢了\n");
//			return '*';
//		}
//	}
//
//}
//for (j = 0; j <= col; j++)
//{
//	count1 = 0;
//	//竖着连五子
//	for (i = 0; i <= row; i++)
//	{
//		if (board[i][j] == '*')
//			count1++;
//		if (count1 >= win_number)
//		{
//			printf("你赢了\n");
//			return '*';
//		}
//	}
//
//}
//for (i = row; i >= 0; i++)
//{
//	count1 = 0;
//	for (j = i)
//	{
//
//	}
//}