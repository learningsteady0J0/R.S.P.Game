// Name : main.c  ver 1.1
// content : ���� main�Լ�
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

		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ� \n");
		WhoIsWinner(com, you);

		fputs("��ǻ���� ������ ", stdout);
		ShowRSP(com);

		fputs("����� ������ ", stdout);
		ShowRSP(you);
		puts("");
		getchar();
	}
	return 0;
}