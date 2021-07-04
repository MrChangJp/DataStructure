#include "topic7.h"


void InitQQue(QQue* q){

	ELEMTYPES* e = (ELEMTYPES*)malloc(sizeof(ELEMTYPES));
	q->Q = e;
	q->tag[0] = q->tag[1] = 0;

}

void AddQQue(QQue* q, ELEMTYPES e){

	if (FullyQueue(q)){
		puts("¶ÓÂú");
	}

	q->Q[q->tag[1]] = e;
	q->tag[1] = (q->tag[1] + 1) % MAXSIZE;


}
void DelQQue(QQue* q){
	
	if (EmptyQueue(q)){
		return;
	}

	q->tag[0] = (q->tag[0] + 1 + MAXSIZE) %MAXSIZE;


}


int EmptyQueue(QQue* q){
	if (q->tag[1] == q->tag[0]){
		return 1;
	}
	return 0;
}
int FullyQueue(QQue* q){
	if ((q->tag[1] + 1) % MAXSIZE == q->tag[0]){
		return 1;
	}
	return 0;
}

