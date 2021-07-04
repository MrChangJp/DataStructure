#pragma once
#include "topic1.h"


Status InitListTs(SChar* ls){
	if (!ls){
		return ERROR;
	}
	char* dt = (char*)malloc(1*MAXSIZES);
	if (!dt) {
		return ERROR;
	}
	ls->data = dt;
	ls->top = ls->base = 0;
	return OK;
}

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
	if (FullList(ls)){
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

ELEMTYPE ListPopTs(SList* ls){

	if (!ls){
		return ERROR;
	}

	return ls->data[--ls->top];
}


int EmptyList(SList* ls){

	if (!ls || ls->top == ls->base){
		return 1;
	}
	return 0;

}

int FullList(SList* ls){

	
	if (!ls ||ls->top >= MAXSIZES){
		return 1;
	}
	return 0;
}
ELEMTYPE GetTop(SList* ls){

	return ls->data[ls->top-1];

}
