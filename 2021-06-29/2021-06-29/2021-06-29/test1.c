#pragma once
#include "SqListFunc.h"

int main(){

	SqList list;

	InitList(&list);
	//DestoryList(&list);
	PustBack(&list, 1);
	PustBack(&list, 12);
	PustBack(&list, 13);
	PustBack(&list, 14);
	PustBack(&list, 1);
	PustBack(&list, 15);
	PustBack(&list, 176);
	PustBack(&list, 18);
	PustBack(&list, 19);
	ListDelete(&list, 1);
	PrintList(&list);
	ListDelete(&list, 1);
	PrintList(&list);
	ListDelete(&list, 1);
	PrintList(&list);
	int i;
	int returnVal = GetElem(&list,&i, 3);
	if (returnVal != ERROR){

	printf("index val : %d\n", i);
	}
	else{
		puts("！！！下标越界！！！");
	}
	int insertIndex = 7;

	returnVal = ListInsert(&list, 11111, insertIndex);
	if (returnVal != ERROR){

		PrintList(&list);
	}
	else{
		puts("！！！下标越界！！！");
	}
	


	return 0;
}