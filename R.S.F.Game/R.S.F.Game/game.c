// Name : game.c  ver 1.0
// content : ���� ���� �Լ� ����
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include <time.h>
#include "common.h"
#include "game.h"

// ��	�� : int ChoiceOfCom(void)
// ��	�� : ������ ���� ��ȯ
// ��	ȯ : 0~99 ������ ���� ��ȯ
int ChoiceOfCom(void)
{
	
	srand((int)time(NULL));


	return rand() % 100;
}

// ��	�� : int ChoiceOfMe(void)
// ��	�� : ������� ������ �Է� ����
// ��	ȯ : ����� �Է�
int ChoiceOfMe(void)
{
	int num;

	while (1) {
		fputs("Ȧ���̸� 1, ¦���̸� 2�� �Է�: ", stdout);
		scanf("%d", &num);
		getchar();
		if (num == 1 || num == 2)
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
	int umpire;
	umpire = com % 2;

	if (umpire == you)
	{
		puts("����� �����Դϴ�!");
	}
	else
		puts("��ǻ�Ͱ� �����Դϴ�!");

	
}

/* end of file */