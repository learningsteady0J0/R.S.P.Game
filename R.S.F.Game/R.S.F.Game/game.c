// Name : game.c  ver 1.0
// content : 게임 관련 함수 정의
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include <time.h>
#include "common.h"
#include "game.h"

// 함	수 : int ChoiceOfCom(void)
// 기	능 : 무작위 값을 반환
// 반	환 : 0~99 범위의 값을 반환
int ChoiceOfCom(void)
{
	
	srand((int)time(NULL));


	return rand() % 100;
}

// 함	수 : int ChoiceOfMe(void)
// 기	능 : 사용자의 선택을 입력 받음
// 반	환 : 사용자 입력
int ChoiceOfMe(void)
{
	int num;

	while (1) {
		fputs("홀수이면 1, 짝수이면 2를 입력: ", stdout);
		scanf("%d", &num);
		getchar();
		if (num == 1 || num == 2)
		{
			return num;
		}
	}
}

// 함	수 : void WhoIsWinner(int com,int you)
// 기	능 : 승자를 가림
// 반	환 : void
void WhoIsWinner(int com, int you)
{
	int umpire;
	umpire = com % 2;

	if (umpire == you)
	{
		puts("당신이 승자입니다!");
	}
	else
		puts("컴퓨터가 승자입니다!");

	
}

/* end of file */