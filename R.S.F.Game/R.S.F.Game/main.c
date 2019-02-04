// Name : main.c  ver 1.1
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

	while (1) {
		ShowMain();
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");

		puts("★★★★★★ 결과! ★★★★★★ \n");
		WhoIsWinner(com, you);

		fputs("컴퓨터의 선택은 ", stdout);
		ShowRSP(com);

		fputs("당신의 선택은 ", stdout);
		ShowRSP(you);
		puts("");
		getchar();
	}
	return 0;
}