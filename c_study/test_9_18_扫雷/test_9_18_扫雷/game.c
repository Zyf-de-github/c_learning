#include "game.h"



void int_char(char arr[ROWS][COLS], int row, int col,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = set;
			/*printf(" %c ", arr[i][j]);*/
		}
		/*printf("\n");*/
	}
}


void print_arr(char arr[ROWS][COLS], int row, int col)
{
	int i, j;
	printf("-----------ɨ����Ϸ-----------\n");
	for (i = 0; i < col - 1; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i < row - 1; i++)
	{
		printf(" %d ", i);
		for (j = 1; j < col - 1; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("-----------ɨ����Ϸ-----------\n");

	
}


void set_arr(char arr[ROWS][COLS], int row, int col)
{
	int count = level;

	while (count)
	{
		int x = rand() % (row - 2) + 1;
		int y = rand() % (col - 2) + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}



void find_arr(char mine[ROWS][COLS], char display[ROWS][COLS], int row, int col)
{
	int x, y;
	
	int win_number = 0;
	while (win_number < (row - 2) * (col - 2) - level)
	{
		printf("������Ҫ�Ų������>");
		scanf("%d %d", &x, &y);
		if (mine[x][y] != '1')
		{
			int count = 0;
			if (display[x][y] == '*')
				win_number++;
			else
				printf("�벻Ҫ�Ų��Ѿ��Ų��������\n");
			if (mine[x - 1][y - 1] == '1')
				count++;
			if (mine[x][y - 1] == '1')
				count++;
			if (mine[x + 1][y - 1] == '1')
				count++;
			if (mine[x - 1][y] == '1')
				count++;
			if (mine[x + 1][y] == '1')
				count++;
			if (mine[x - 1][y + 1] == '1')
				count++;
			if (mine[x][y + 1] == '1')
				count++;
			if (mine[x + 1][y + 1] == '1')
				count++;
			display[x][y] = count + '0';//ת���������ַ�
			print_arr(display, ROWS, COLS);
			
			/*win_unmber++;*/
		}
		else
		{
			printf("���ź�������ը����\n");
			print_arr(mine, ROWS, COLS);
			break;
		}
	}
	if (win_number == (row - 2) * (col - 2) - level)
		printf("��ϲ�㣬��Ӯ��\n");
	//printf("������Ҫ�Ų������>");
	//scanf("%d %d", &x, &y);
	//if (mine[x][y] != '1')
	//{
	//	if (mine[x - 1][y - 1] == '1')
	//		count++;
	//	if (mine[x][y - 1] == '1')
	//		count++;
	//	if (mine[x + 1][y - 1] == '1')
	//		count++;
	//	if (mine[x - 1][y] == '1')
	//		count++;
	//	if (mine[x + 1][y] == '1')
	//		count++;
	//	if (mine[x - 1][y + 1] == '1')
	//		count++;
	//	if (mine[x][y + 1] == '1')
	//		count++;
	//	if (mine[x + 1][y + 1] == '1')
	//		count++;
	//	display[x][y] = count + '0';//ת���������ַ�
	//	print_arr(display, ROWS, COLS);
	//}
	//else
	//{
	//	printf("���ź�������ը����\n");
	//	print_arr(mine, ROWS, COLS);
	//}
}


