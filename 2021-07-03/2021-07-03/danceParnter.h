#pragma once
#include"Squeue.h"

typedef struct Dancer{
	char name[20];
	char sex;
}Dancer;

typedef struct DQue{

	Dancer* dan;
	int front, rear;

}DQue;

Status InitDQue(DQue* dq);
Status AddDQue(DQue*dq, Dancer d);
Status DeDQue(DQue*dq);
Status GetQHead(DQue*dq, Dancer*d);
Status QueEmpty(DQue*dq);