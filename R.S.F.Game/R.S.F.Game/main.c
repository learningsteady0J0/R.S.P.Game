// Name : main.c  
// content : 게임 main함수
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04

#include "common.h"
#include "game.h"
#include "gameTimes.h"
#include "gameMoney.h"
#include "gameContinue.h"

int main(void)
{
	int com;
	int you;
	int choice;
	FILE * fp = fopen("rsf_savefile.dat", "rb");
	SetComMoney(1000);

	if (fp != NULL)
	{
		fputs("게임을 이어서 하시겠습니까? <yes:1,no:0>: ", stdout);
		scanf("%d", &choice);
		if (choice == 1)
			LoadForContinue();
	}

	

	while (1) {
		ShowMain();
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		puts("");

		if (you == EXIT)
		{
			break;
		}
		
		puts("★★★★★★ 결과! ★★★★★★ \n");
		WhoIsWinner(com, you);

		fputs("컴퓨터의 선택은 ", stdout);
		ShowRSP(com);
		fputs("당신의 선택은 ", stdout);
		ShowRSP(you);
		printf("승률: %d%%\n", PutWinningRate());
		printf("플레이어의 머니 : %d\n", ReturnYouMoney());
		printf("컴퓨터의 머니 : %d\n\n", ReturnComMoney());

		if (ReturnYouMoney() <= 0 || ReturnComMoney() <= 0)
		{
			break;
		}
		
		puts("");
		getchar();
	}

	puts("★★★★★★ 최종결과 ★★★★★★ \n");
	printf("최종승률: %d%%\n", PutWinningRate());

	if (you == EXIT)
	{
		fputs("게임 내용을 저장하시겠습니까? <yes:1 , no:0>",stdout);
		scanf("%d", &choice);
		if (choice == 1)
			SaveForContinue();
	}

	puts(" GAME OVER! ");

	return 0;
}