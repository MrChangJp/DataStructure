#pragma once
#include "LQueue.h"

QNode* BuyLNode(){
	return (QNode*)malloc(sizeof(QNode));
}

Status InitLQueue(LinkQueue* lq){
	if (!lq){
		return ERROR;
	}
	QNode* no = BuyLNode();
	no->next = NULL;
	lq->front = lq->rear = no;
	return OK;

}
Status EnLQueue(LinkQueue*lq, ELEMTYPE e){

	if (!lq){
		return ERROR;
	}
	QNode* no = BuyLNode();
	no->data = e;
	no->next = NULL;

	lq->rear->next = no;
	lq->rear = no;
	

	return OK;

}
Status DeLQueue(LinkQueue*lq){
	if (!lq){
		return ERROR;
	}

	if (lq->front == lq->rear){
		return ERROR;
	}

	QNode* tp = lq->front->next;
	lq->front->next = tp->next;
	free(tp);

	return OK;


}
Status GetLHead(LinkQueue*lq, ELEMTYPE* e){

	if (!lq){
		return ERROR;
	}

	if (lq->front == lq->rear){
		return ERROR;
	}

	*e = lq->front->next->data;
	return OK;

}