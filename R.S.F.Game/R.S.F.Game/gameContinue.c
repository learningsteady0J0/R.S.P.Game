// Name : gameContinue.c  
// content : 세이브 로드 관련 함수 정의
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/06

#include "common.h"
#include "gameTimes.h"
#include "gameMoney.h"

typedef struct __data {
	int record;
	int wins;
	int com_Money;
	int you_money;
}Data;

void SaveForContinue(void)
{
	Data data;
	data.record = GetRecord();
	data.wins = GetWins();
	data.com_Money = ReturnComMoney();
	data.you_money = ReturnYouMoney();

	FILE * fp = fopen("rsf_savefile.dat", "wb");

	if (fp == NULL)
	{
		puts("파일 열기 실패");
		return -1;
	}

	fwrite((Data*)&data, sizeof(Data), 1, fp);

	fclose(fp);

	puts("파일이 잘 닫혔습니다.");
}

void LoadForContinue(void)
{
	Data data;

	FILE * fp = fopen("rsf_savefile.dat", "rb");

	if (fp == NULL)
	{
		puts("파일 열기 실패");
		return -1;
	}

	fread((Data*)&data, sizeof(Data), 1, fp);

	LoadRecord(data.record);
	LoadWins(data.wins);
	LoadComMoney(data.com_Money);
	LoadYouMoney(data.you_money);

	fclose(fp);

	puts("파일이 잘 닫혔습니다.");
}