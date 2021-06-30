#pragma once
#include "SqListFunc.h"


Status InitList(SqList* ls){

	assert(ls);
	ELEMTYPE* space =  (ELEMTYPE*)malloc(MAXSIZE*sizeof(ELEMTYPE));
	if (!space) return ERROR;
	ls->list = space;
	ls->length = 0;
	return OK;

}

Status DestoryList(SqList* ls){

	if (!ls || !ls->list) return ERROR;

	free(ls->list);
	ls->list = NULL;
	return OK;

}
Status PustBack(SqList* ls,ELEMTYPE e){

	if (!ls ||!ls->list || ls->length >= MAXSIZE) return ERROR;

	ls->list[ls->length] = e;
	++ls->length;
	return OK;

}


Status ListInsert(SqList* ls, ELEMTYPE e,int index){
	
	if (!ls || !ls->list || ls->length +1 >= MAXSIZE) return ERROR;

	if (index >= ls->length) return ERROR;
	index -= 1;
	int end = ls->length - 1;
	while (end >= index){
		ls->list[end + 1] = ls->list[end];
		end--;
	}

	ls->list[index] = e;
	++ls->length;
	return OK;
}





void PrintList(SqList* ls){

	if (!ls || !ls->list || ls->length >= MAXSIZE) return ERROR;

	int i =0;
	int len = ls->length;
	while (i< len){
		printf("%d ", ls->list[i++]);
	}
	puts("");

}

Status ListDelete(SqList* ls, int i){

	if (!ls || !ls->list || ls->length >= MAXSIZE) return ERROR;
	if (i == ls->length){
		--ls->length;
		return OK;
	}
	
	int end = ls->length - 1;
	i -= 1;
	while (i < end){
		ls->list[i] = ls->list[i + 1];
		i++;
	}

	--ls->length;
	return OK;

}

Status GetElem(SqList* ls, ELEMTYPE * e, int index){

	if (!ls || !ls->list || ls->length >= MAXSIZE) return ERROR;
	
	if (index >= ls->length) return ERROR;

	*e = ls->list[index-1];

	return OK;
}