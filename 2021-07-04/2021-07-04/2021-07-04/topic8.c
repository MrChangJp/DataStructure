#include "topic7.h"


void IniQQue(QQue* q){

	ELEMTYPES* e = (ELEMTYPES*)malloc(sizeof(ELEMTYPES));
	q->Q = e;
	q->tag[0] = q->tag[1] = 0;

}

void AddRearQQue(QQue* q, ELEMTYPES e){

	if (FullyQueue(q)){
		puts("¶ÓÂú");
	}

	q->Q[q->tag[0]] = e;
	q->tag[1] = (q->tag[1] - 1 + MAXSIZE) % MAXSIZE;


}
void DelFrontQQue(QQue* q){

	if (EmptyQueue(q)){
		return;
	}

	q->tag[0] = (q->tag[0] - 1 + MAXSIZE) % MAXSIZE;


}
