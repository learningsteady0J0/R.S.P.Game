// Name : gameMoney.c  
// content : 판돈 관련 함수 정의
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/05

#include "common.h"

static int com_Money ;
static int you_Money ;

static int table_Money;


// 기	능 : 컴퓨터 머니 세팅
// 반	환 : void
void SetComMoney(int money)
{
	if (money < 0)
	{
		puts("기본 머니는 0이상만 세팅 가능합니다.");
	}
	com_Money = money;
}

// 기	능 : 플레이어 머니 세팅
// 반	환 : void
void SetYouMoney(int money)
{
	if (money < 0)
	{
		puts("기본 머니는 0이상만 세팅 가능합니다.");
	}
	you_Money = money;
}

// 기	능 : 판돈 세팅
// 반	환 : void
void SetTableMoney(int money)
{
	if (money < 0)
	{
		puts("판돈은 0이상만 세팅 가능합니다.");
	}
	table_Money = money;
}

// 기	능 : 컴퓨터 머니 반환
// 반	환 : int
int ReturnComMoney(void)
{
	return com_Money;
}

// 기	능 : 플레이어 머니 반환
// 반	환 : int
int ReturnYouMoney(void)
{
	return you_Money;
}

// 기	능 : 판돈 반환
// 반	환 : int
int ReturnTableMoney(void)
{
	return table_Money;
}

// 기	능 : 컴퓨타 승리시 정산
// 반	환 : void
void ComWinAccount(void)
{
	com_Money += table_Money;
	you_Money -= table_Money;
}

// 기	능 : 플레이어 승리시 정산
// 반	환 : void
void YouWinAccount(void)
{
	you_Money += table_Money;
	com_Money -= table_Money;

}

/* end of file */