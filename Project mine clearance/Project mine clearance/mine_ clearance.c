#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
#include"mine_ clearance.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}


}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{

	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}


}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}

	}
}


int get_mine_count_1(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] - 8 * '0';
}

int get_mine_count(char mine[ROWS][COLS], int x ,int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = x-1; i <=x + 1; i++)
	{
		for(j=y-1;j<=y+1;j++)
		{
			sum = sum + mine[i][j] - '0';
		}
	}
	
	return sum;
	

}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int count = 0;
	//9*9-10=71
	while (win < row * col - 10)
	{
		printf("请输入排查雷的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)

		{
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不踩雷
			{

				//计算x,y坐标周围有几个雷
				//int count = get_mine_count(mine, x, y);
				int count = get_mine_count_1(mine, x, y);

				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!:>");
		}

	}
		if (win == row * col - 10)
		{
			printf("恭喜你，排雷成功\n");
			DisplayBoard(mine, row, col);
		}
	}

//展开功能的时候-递归
