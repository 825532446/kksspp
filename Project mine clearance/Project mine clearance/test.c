#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
#include "mine_ clearance.h"

void game()
{
	//雷的信息存储
	//布置好雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine,show,ROW,COL);
}
void menu() {

	printf("*****************************\n");
	printf("******      1.play     ******\n");
	printf("******      2.exit     ******\n");
	printf("*****************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择:>\n");
			break;
		}

	} while (input);
}
int main() {

	test();

}