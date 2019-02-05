// Name : gameTimes.c  
// content : ���ӽ·� ���� �Լ� ����
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include "common.h"

static int RECORD = 0;
static int WINS = 0;

// ��	�� : ���� �� ����
// ��	ȯ : void
void IncreRecord(void)
{
	RECORD++;
}

// ��	�� : �¸� �� ����
// ��	ȯ : void
void IncreWins(void)
{
	WINS++;
}

// ��	�� : ���� �� ��ȯ
// ��	ȯ : int
int GetRecord(void)
{
	return RECORD;
}

// ��	�� : �¸� �� ��ȯ
// ��	ȯ : int
int GetWins(void)
{
	return WINS;
}

// ��	�� : �·� ���
// ��	ȯ : �·� ��ȯ
int PutWinningRate(void)
{
	if (RECORD == 0)
	{
		return 0;
	}

	return (double)WINS / RECORD *100;
}

// ��	�� : �ε�� ���� �Է�
// ��	ȯ : void
void LoadRecord(int num)
{
	RECORD = num;
}

// ��	�� : �ε�� �¼� �Է�
// ��	ȯ : void
void LoadWins(int num)
{
	WINS = num;
}