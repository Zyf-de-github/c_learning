#pragma once



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
#include <stdlib.h>//cls
#include <time.h>
#include <stdlib.h>
#include <math.h>//sqrt
#include <stdbool.h>//≤º∂˚¿‡–Õ



#define ROW	9
#define	COL 9

#define level 10





#define ROWS ROW+2
#define	COLS COL+2


void int_char(char arr[ROWS][COLS], int row, int col,char set);

void print_arr(char arr[ROWS][COLS], int row, int col);

void set_arr(char arr[ROWS][COLS], int row, int col);

void find_arr(char mine[ROWS][COLS], char display[ROWS][COLS], int row, int col);