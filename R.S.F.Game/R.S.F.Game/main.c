// Name : main.c  
// content : 게임 main함수
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include "common.h"
#include "game.h"
#include "gameTimes.h"
int main(void)
{
	int com;
	int you;

	while (1) {
		ShowMain();
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");
		if (you == 4)
		{
			puts("★★★★★★ 최종결과 ★★★★★★ \n");
			printf("최종승률: %d％\n", PutWinningRate());
			puts(" GAME OVER! ");
			return 0;
		}
		
		puts("★★★★★★ 결과! ★★★★★★ \n");
		WhoIsWinner(com, you);

		fputs("컴퓨터의 선택은 ", stdout);
		ShowRSP(com);
		fputs("당신의 선택은 ", stdout);
		ShowRSP(you);
		printf("승률: %d％\n", PutWinningRate());
		puts("");
		getchar();
	}
	return 0;
}