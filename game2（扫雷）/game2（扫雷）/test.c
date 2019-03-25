#include "game.h"
void game()
{
	char mine[ROWS][COLS] ;
	char show[ROWS][COLS] ;
	int x = 0;
	int y = 0;
	int count = ROW*COL-MINENUM;
	init_board(mine, ROWS, COLS, '0');
	init_board(show,ROWS, COLS, '#');
	printf("\n");
	print(show, ROW, COL);
	set_mine(mine, ROW, COL, MINENUM);
	printf("\n");
	print(mine, ROW, COL);
	while (count <= ROW*COL - MINENUM)
	{
		printf("请输入坐标:>");
		scanf_s("%d %d", &x, &y);
		if ((x > 0) && (x <= ROW) && (y > 0) && (y <= COL))
		{
			if (show[x][y] != '#')
			{
				printf("输入有误!请重新输入!!!\n");
				printf("\n");
			}
			if (mine[x][y] == '1')
			{
				if (count == ROW*COL - MINENUM)
				{
					mine[x][y] = '0';
					set_mine(mine, ROW, COL, 1);
					count--;
					get_mine(mine, show, x, y);
				}
				else
				{
					printf("很遗憾你被炸死了!!!\n");
					print(mine, ROW, COL);
					return;
				}
			}
			else
			{
				get_mine(mine, show, x, y);
			}
			print(show, ROW, COL);
			count--;
		}
		else
		{
			printf("输入错误！请重新输入：\n");
		}

	}
}

void test()
{
	int input = 0;
	do{
		menu();
		printf("请输入:>\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}