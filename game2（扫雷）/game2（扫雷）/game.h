#ifndef  __GAME_H__
#define  __GAME_H__
#include <stdio.h>
#include <string.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS  ROW+2
#define COLS  COL+2
#define MINENUM 10 
void menu();
void init_board(char arr[ROWS][COLS], int rows, int cols, char set);
void print(char arr[ROWS][COLS], int rows, int cols);
void set_mine(char arr[ROWS][COLS], int row, int col, int num);
void get_mine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y);
int  get_count(char arr[ROWS][COLS], int x, int y);

#endif //__GAME_H__