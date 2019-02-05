// Name : gameTimes.c  
// content : 게임승률 관련 함수 정의
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include "common.h"

static int RECORD = 0;
static int WINS = 0;

// 기	능 : 전적 수 증가
// 반	환 : void
void IncreRecord(void)
{
	RECORD++;
}

// 기	능 : 승리 수 증가
// 반	환 : void
void IncreWins(void)
{
	WINS++;
}

// 기	능 : 전전 수 반환
// 반	환 : int
int GetRecord(void)
{
	return RECORD;
}

// 기	능 : 승리 수 반환
// 반	환 : int
int GetWins(void)
{
	return WINS;
}

// 기	능 : 승률 계산
// 반	환 : 승률 반환
int PutWinningRate(void)
{
	if (RECORD == 0)
	{
		return 0;
	}

	return (double)WINS / RECORD *100;
}

// 기	능 : 로드시 전적 입력
// 반	환 : void
void LoadRecord(int num)
{
	RECORD = num;
}

// 기	능 : 로드시 승수 입력
// 반	환 : void
void LoadWins(int num)
{
	WINS = num;
}