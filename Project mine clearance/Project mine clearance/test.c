#include <stdio.h>  
#include <stdlib.h>  
#include <time.h>  
#include "mine_ clearance.h"

void game()
{
	//�׵���Ϣ�洢
	//���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}

	} while (input);
}
int main() {

	test();

}