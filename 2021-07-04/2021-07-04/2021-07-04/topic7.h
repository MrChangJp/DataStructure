#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20
#define ELEMTYPES int

typedef struct QQue{
	ELEMTYPES* Q;
	int tag[2];
}QQue;

void InitQQue(QQue* q);
void AddQQue(QQue* q,ELEMTYPES e);
void DelQQue(QQue* q);
int EmptyQueue(QQue* q);
int FullyQueue(QQue* q);

