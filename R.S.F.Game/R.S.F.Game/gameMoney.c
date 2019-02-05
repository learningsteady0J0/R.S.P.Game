// Name : gameMoney.c  
// content : �ǵ� ���� �Լ� ����
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/05

#include "common.h"

static int com_Money ;
static int you_Money ;

static int table_Money;


// ��	�� : ��ǻ�� �Ӵ� ����
// ��	ȯ : void
void SetComMoney(int money)
{
	if (money < 0)
	{
		puts("�⺻ �Ӵϴ� 0�̻� ���� �����մϴ�.");
	}
	com_Money = money;
}

// ��	�� : �÷��̾� �Ӵ� ����
// ��	ȯ : void
void SetYouMoney(int money)
{
	if (money < 0)
	{
		puts("�⺻ �Ӵϴ� 0�̻� ���� �����մϴ�.");
	}

	you_Money = money;
}

// ��	�� : �ǵ� ����
// ��	ȯ : void
void SetTableMoney(int money)
{
	if (money < 0)
	{
		puts("�ǵ��� 0�̻� ���� �����մϴ�.");
	}
	table_Money = money;
}

// ��	�� : ��ǻ�� �Ӵ� ��ȯ
// ��	ȯ : int
int ReturnComMoney(void)
{
	return com_Money;
}

// ��	�� : �÷��̾� �Ӵ� ��ȯ
// ��	ȯ : int
int ReturnYouMoney(void)
{
	return you_Money;
}

// ��	�� : �ǵ� ��ȯ
// ��	ȯ : int
int ReturnTableMoney(void)
{
	return table_Money;
}

// ��	�� : ��ǻŸ �¸��� ����
// ��	ȯ : void
void ComWinAccount(void)
{
	com_Money += table_Money;
	you_Money -= table_Money;
}

// ��	�� : �÷��̾� �¸��� ����
// ��	ȯ : void
void YouWinAccount(void)
{
	you_Money += table_Money;
	com_Money -= table_Money;

}

// ��	�� : �÷��̾�� ��ǻ���� �Ӵϰ� �ǵ� ���� ������ �Ǵ�   //ó���� �̷��� ������µ� å���� ���� �Լ����� ���뼺?�� �������� �� ����
// ��	ȯ : ������ 1 , �ƴϸ� 0
int JudgeTableMoney(int money)
{
	if (money > com_Money)
	{
		puts("��ǻ�� ���� �ݾ� �ʰ��Դϴ�!");
		printf("��ǻ���� ���� ���� �Ӵ�: %d", com_Money);
		return 0;
	}
	else if (money > you_Money)
	{
		puts("�÷��̾� ���� �ݾ� �ʰ��Դϴ�!");
		printf("�÷��̾��� ���� ���� �Ӵ�: %d", you_Money);
		return 0;
	}

	return 1;
}

// ��	�� : �ε�� ��ǻ�� �Ӵ� �Է�
// ��	ȯ : void
void LoadComMoney(int num)
{
	com_Money = num;
}

// ��	�� : �ε�� ��ǻ�� �Ӵ� �Է�
// ��	ȯ : void
void LoadYouMoney(int num)
{
	you_Money = num;
}

/* end of file */