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

// 기	능 : 플레이어와 컴퓨터의 머니가 판돈 범위 안인지 판단   //처음에 이렇게 만들었는데 책에서 만든 함수보다 범용성?이 떨어지는 것 같음
// 반	환 : 맞으면 1 , 아니면 0
int JudgeTableMoney(int money)
{
	if (money > com_Money)
	{
		puts("컴퓨터 소유 금액 초과입니다!");
		printf("컴퓨터의 현재 게임 머니: %d", com_Money);
		return 0;
	}
	else if (money > you_Money)
	{
		puts("플레이어 소유 금액 초과입니다!");
		printf("플레이어의 현재 게임 머니: %d", you_Money);
		return 0;
	}

	return 1;
}

// 기	능 : 로드시 컴퓨터 머니 입력
// 반	환 : void
void LoadComMoney(int num)
{
	com_Money = num;
}

// 기	능 : 로드시 컴퓨터 머니 입력
// 반	환 : void
void LoadYouMoney(int num)
{
	you_Money = num;
}

/* end of file */