// Name : game.c  
// content : ���� ���� �Լ� ����
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include <time.h>
#include "common.h"
#include "game.h"
#include "gameTimes.h"
#include "gameMoney.h"

int seedNum = 0; // �õ� ���� ��ä�ο� ��ȭ�� ���� ����

// ��	�� : void ShowMain (void)
// ��	�� : ����ȭ�� ���
// ��	ȯ : void
void ShowMain(void)
{
	system("cls");
	puts("Rock Sizer Paper!");
	printf("\n ���� ���� �Ӵ�  �÷��̾� : %d     ��ǻ�� : %d", ReturnYouMoney(), ReturnComMoney());
	puts("");

	puts("������������ ���! ������������\n");
}

// ��	�� : int ChoiceOfCom(void)
// ��	�� : ������ ���� ��ȯ
// ��	ȯ : 0~2 ������ ���� ��ȯ
int ChoiceOfCom(void)
{
	seedNum += 3333;
	if (seedNum % 2 == 0)
	{
		seedNum -= 3;
	}

	srand((int)time(NULL)+seedNum);

	return (rand()%3)+1;
}

// ��	�� : int ChoiceOfMe(void)
// ��	�� : ������� ������ �Է� ����
// ��	ȯ : ����� �Է�
int ChoiceOfMe(void)
{
	int num;

	while (1) {
		fputs("����<1> ����<2> ��<3> ����<4>: ", stdout);
		scanf("%d", &num);
		getchar();
		if (num == ROCK || num == SIZER || num ==PAPER || num==EXIT)
		{
			return num;
		}
	}
}

// ��	�� : void WhoIsWinner(int com,int you)
// ��	�� : ���ڸ� ����
// ��	ȯ : void
void WhoIsWinner(int com, int you)
{
	IncreRecord();
	if (com == you)
		puts("�����ϴ�.");
	else if (com - you == -1 || com - you == 2)
	{
		puts("��ǻ�Ͱ� �̰���ϴ�.");
		ComWinAccount();
	}
	else
	{
		puts("����� �̰���ϴ�.");
		IncreWins();
		YouWinAccount();
	}
	
}

// ��	�� : void ShowRSP (int rsp)
// ��	�� : ����� ���� ���ڿ� (����, ����, ��) ���
// ��	ȯ : void
void ShowRSP (int rsp)
{
	if (rsp == ROCK)
		puts("����");
	else if (rsp == SIZER)
		puts("����");
	else
		puts("��");
}



/* end of file */