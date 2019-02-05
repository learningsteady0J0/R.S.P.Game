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

/* end of file */