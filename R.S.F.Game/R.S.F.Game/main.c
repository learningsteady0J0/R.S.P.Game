// Name : main.c  
// content : ���� main�Լ�
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
			puts("�ڡڡڡڡڡ� ������� �ڡڡڡڡڡ� \n");
			printf("�����·�: %d��\n", PutWinningRate());
			puts(" GAME OVER! ");
			return 0;
		}
		
		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ� \n");
		WhoIsWinner(com, you);

		fputs("��ǻ���� ������ ", stdout);
		ShowRSP(com);
		fputs("����� ������ ", stdout);
		ShowRSP(you);
		printf("�·�: %d��\n", PutWinningRate());
		puts("");
		getchar();
	}
	return 0;
}