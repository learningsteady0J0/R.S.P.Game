// Name : main.c  ver 1.0
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
	puts("��! ������ �����մϴ�.");
	puts("");

	puts("������������ ���! ������������\n");
	com = ChoiceOfCom();
	you = ChoiceOfMe();
	puts("");

	puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ� \n");
	WhoIsWinner(com, you);

	printf("�� ��ǻ���� ������ %d \n", com);

	if (you == EVEN)
		puts("�� ����� ������ ¦��. ");
	else
		puts("�� ����� ������ Ȧ��. ");

	puts("");
	return 0;
}