#pragma once
#include "danceParnter.h"


Status InitDQue(DQue* dq){
	dq->dan = (Dancer*)malloc(sizeof(Dancer)*MAXSIZE);
	if (!dq->dan){
		return ERROR;
	}
	dq->front = dq->rear = 0;
	return OK;
}
Status AddDQue(DQue*dq, Dancer d){
	if (!dq){
		return ERROR;
	}
	if ((dq->rear + 1) % MAXSIZE == dq->front){
		return ERROR;
	}

	dq->dan[dq->rear] = d;
	dq->rear = (dq->rear + 1) % MAXSIZE;
	return OK;

}
Status DeDQue(DQue*dq){
	if (!dq){
		return ERROR;
	}
	if (QueEmpty(dq)){
		return ERROR;
	}

	dq->front = (dq->front +1)%MAXSIZE;
	return OK;

}
Status GetQHead(DQue*dq, Dancer*d){
	if (!dq){
		return ERROR;
	}
	
	if ((dq->rear - dq->front + MAXSIZE) % MAXSIZE == 0){
		return ERROR;
	}
	
	*d = dq->dan[dq->front];
	return OK;


}

Status QueEmpty(DQue*dq){

	if (!dq ){ 
		return OK;
	}

	if ((dq->rear == dq->front)){
		return OK;
	}
	return FALSE;

}