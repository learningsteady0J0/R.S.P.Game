// Name : game.c  ver 2.0
// content : ���� ���� �Լ� ����
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include <time.h>
#include "common.h"
#include "game.h"

// ��	�� : int ChoiceOfCom(void)
// ��	�� : ������ ���� ��ȯ
// ��	ȯ : 0~2 ������ ���� ��ȯ
int ChoiceOfCom(void)
{
	
	srand((int)time(NULL));


	return (rand() % 3)+1;
}

// ��	�� : int ChoiceOfMe(void)
// ��	�� : ������� ������ �Է� ����
// ��	ȯ : ����� �Է�
int ChoiceOfMe(void)
{
	int num;

	while (1) {
		fputs("����<1> ����<2> ��<3>: ", stdout);
		scanf("%d", &num);
		getchar();
		if (num == 1 || num == 2 || num ==3)
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
	if (com == you)
		puts("�����ϴ�.");
	else if (com - you == -1 || com - you == 2)
		puts("��ǻ�Ͱ� �̰���ϴ�.");
	else
		puts("����� �̰���ϴ�.");

	
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

// ��	�� : void ShowMain (void)
// ��	�� : ����ȭ�� ���
// ��	ȯ : void
void ShowMain(void)
{
	system("cls");
	puts("��! ������ �����մϴ�.");
	puts("");

	puts("������������ ���! ������������\n");
}


/* end of file */