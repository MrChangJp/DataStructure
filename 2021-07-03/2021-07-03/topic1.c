#pragma once
#include "topic1.h"

Status InitListT(SList* ls){

	if (!ls){
		return ERROR;
	}
	ELEMTYPE* dt = (ELEMTYPE*)malloc(sizeof(ELEMTYPE)*MAXSIZES);
	if (!dt) {
		return ERROR;
	}
	ls->data = dt;
	ls->top = ls->base = 0;
	return OK;
}
Status ListPushT(SList* ls, ELEMTYPE e){

	if (!ls){
		return ERROR;
	}
	if (ls->top>=MAXSIZES){
		return ERROR;
	}
	ls->data[ls->top++] = e;
	return OK;

}
Status ListPppT(SList* ls, ELEMTYPE* e){
	if (!ls){
		return ERROR;
	}

	if (ls->top == ls->base){
		return ERROR;
	}

	*e = ls->data[--ls->top];
	return OK;

}

ELEMTYPE ListPppTs(SList* ls){

	if (!ls){
		return ERROR;
	}
	
	return ls->data[ls->top];
}