#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//��������




#define ROW 3
#define COL 3
//#define win_number 5

void int_board(char board[ROW][COL], int row, int col);//��ʼ��

void display_board(char board[ROW][COL], int row, int col);

void player_move(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);
//* ���win
//#����win
//Q ƽ��
//C ����