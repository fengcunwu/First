#include "game.h"
void menu()
{
	printf("###################\n");
	printf("####  1,play   ####\n");
	printf("####  0,exit   ####\n");
	printf("###################\n");
}
void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	memset(arr, set, rows*cols*sizeof(arr[0][0]));
}
void print(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d  ", i);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d  ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("----------------------------------\n");
}
void set_mine(char arr[ROWS][COLS], int row, int col, int num)
{
	int x = 0;
	int y = 0;
	srand((unsigned int)time(NULL));
	while (num)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			num--;
		}

	}
}
int  get_count(char arr[ROWS][COLS], int x, int y)//Í³¼ÆÀ×Êý
{
	return arr[x + 1][y + 1] +
		arr[x + 1][y] +
		arr[x - 1][y - 1] +
		arr[x - 1][y + 1] +
		arr[x - 1][y] +
		arr[x + 1][y - 1] +
		arr[x][y + 1] +
		arr[x][y - 1] - 8 * '0';

}
void get_mine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int around_mine = 0;
	around_mine = get_count(arr1, x, y);
	if ((x > 0) && (x <= ROW) && (y > 0) && (y <= COL))
	{
		if (around_mine == 0)
		{
			arr2[x][y] = ' ';
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (arr2[i][j] == '#')
					{
						get_mine(arr1, arr2, i, j);
					}
				}
			}
		}
		else
		{
			arr2[x][y] = around_mine + '0';
		}
	}
	
}
