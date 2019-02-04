// Name : main.c  ver 1.0
// content : 게임 main함수
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include "common.h"
#include "game.h"

int main(void)
{
	int com;
	int you;
	puts("자! 게임을 시작합니다.");
	puts("");

	puts("■■■■■■■■■■■ 대결! ■■■■■■■■■■■\n");
	com = ChoiceOfCom();
	you = ChoiceOfMe();
	puts("");

	puts("★★★★★★ 결과! ★★★★★★ \n");
	WhoIsWinner(com, you);

	printf("▶ 컴퓨터의 선택은 %d \n", com);

	if (you == EVEN)
		puts("▶ 당신의 선택은 짝수. ");
	else
		puts("▶ 당신의 선택은 홀수. ");

	puts("");
	return 0;
}