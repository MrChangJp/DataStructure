#pragma once
#include "Squeue.h"



Status InitSQueue(SQList* ls){
	if (!ls){
		return ERROR;
	}
	ELEMTYPE* node = (ELEMTYPE*)malloc(sizeof(ELEMTYPE)*MAXSIZE);

	ls->data = node;
	ls->front = ls->rear = 0;
	return OK;
}

Status AddQueue(SQList* ls, ELEMTYPE e){

	if (!ls){
		return ERROR;
	}

	if ((ls->rear + 1 ) % MAXSIZE == ls->front){
		return ERROR;
	}
	
	ls->data[ls->rear] = e;
	ls->rear = (ls->rear + 1) % MAXSIZE;

	return OK;
}


Status RmQueue(SQList* ls){

	if (!ls){
		return ERROR;
	}

	if (ls->front == ls->rear){
		return ERROR;
	}

	ls->front = (ls->front + 1) % MAXSIZE;
	return OK;

}

int QueLength(SQList* ls){

	if (!ls){
		return ERROR;
	}
		
	return (ls->rear - ls->front + MAXSIZE) %MAXSIZE;

}


Status GetFront(SQList* ls, ELEMTYPE* e){
	if (!ls){
		return ERROR;
	}
	if (ls->front == ls->rear){
		return ERROR;
	}

	*e = ls->data[ls->front];

	return OK;

}