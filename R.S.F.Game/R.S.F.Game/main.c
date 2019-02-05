// Name : main.c  
// content : ���� main�Լ�
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
		fputs("������ �̾ �Ͻðڽ��ϱ�? <yes:1,no:0>: ", stdout);
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
		
		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ� \n");
		WhoIsWinner(com, you);

		fputs("��ǻ���� ������ ", stdout);
		ShowRSP(com);
		fputs("����� ������ ", stdout);
		ShowRSP(you);
		printf("�·�: %d%%\n", PutWinningRate());
		printf("�÷��̾��� �Ӵ� : %d\n", ReturnYouMoney());
		printf("��ǻ���� �Ӵ� : %d\n\n", ReturnComMoney());

		if (ReturnYouMoney() <= 0 || ReturnComMoney() <= 0)
		{
			break;
		}
		
		puts("");
		getchar();
	}

	puts("�ڡڡڡڡڡ� ������� �ڡڡڡڡڡ� \n");
	printf("�����·�: %d%%\n", PutWinningRate());

	if (you == EXIT)
	{
		fputs("���� ������ �����Ͻðڽ��ϱ�? <yes:1 , no:0>",stdout);
		scanf("%d", &choice);
		if (choice == 1)
			SaveForContinue();
	}

	puts(" GAME OVER! ");

	return 0;
}