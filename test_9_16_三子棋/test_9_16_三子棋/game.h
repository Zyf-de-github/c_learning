#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//布尔类型




#define ROW 3
#define COL 3
//#define win_number 5

void int_board(char board[ROW][COL], int row, int col);//初始化

void display_board(char board[ROW][COL], int row, int col);

void player_move(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);
//* 玩家win
//#电脑win
//Q 平局
//C 继续