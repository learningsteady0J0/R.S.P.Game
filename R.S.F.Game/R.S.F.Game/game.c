// Name : game.c  
// content : 게임 관련 함수 정의
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include <time.h>
#include "common.h"
#include "game.h"
#include "gameTimes.h"
#include "gameMoney.h"

int seedNum = 0; // 시드 값의 다채로운 변화를 위한 변수

// 함	수 : void ShowMain (void)
// 기	능 : 메인화면 출력
// 반	환 : void
void ShowMain(void)
{
	system("cls");
	puts("Rock Sizer Paper!");
	printf("\n 현재 게임 머니  플레이어 : %d     컴퓨터 : %d", ReturnYouMoney(), ReturnComMoney());
	puts("");

	puts("■■■■■■■■■■■ 대결! ■■■■■■■■■■■\n");
}

// 함	수 : int ChoiceOfCom(void)
// 기	능 : 무작위 값을 반환
// 반	환 : 0~2 범위의 값을 반환
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

// 함	수 : int ChoiceOfMe(void)
// 기	능 : 사용자의 선택을 입력 받음
// 반	환 : 사용자 입력
int ChoiceOfMe(void)
{
	int num;

	while (1) {
		fputs("바위<1> 가위<2> 보<3> 종료<4>: ", stdout);
		scanf("%d", &num);
		getchar();
		if (num == ROCK || num == SIZER || num ==PAPER || num==EXIT)
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
	IncreRecord();
	if (com == you)
		puts("비겼습니다.");
	else if (com - you == -1 || com - you == 2)
	{
		puts("컴퓨터가 이겼습니다.");
		ComWinAccount();
	}
	else
	{
		puts("당신이 이겼습니다.");
		IncreWins();
		YouWinAccount();
	}
	
}

// 함	수 : void ShowRSP (int rsp)
// 기	능 : 상수에 따른 문자열 (바위, 가위, 보) 출력
// 반	환 : void
void ShowRSP (int rsp)
{
	if (rsp == ROCK)
		puts("바위");
	else if (rsp == SIZER)
		puts("가위");
	else
		puts("보");
}



/* end of file */