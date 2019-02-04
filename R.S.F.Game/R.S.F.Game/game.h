// Name : game.h  ver 2.0
// content : 게임 관련 함수 선언
// Implementation : learningsteady0j0
// 
// Last modified 2019/02/04


#ifndef __GAME_H__
#define __GAME_H__

enum{ROCK=1,SIZER,PAPER};

int ChoiceOfCom(void);
int ChoiceOfMe(void);
void WhoIsWinner(int com, int you);
void ShowRSP(int rsp);
void ShowMain(void);

#endif

/* end of file */