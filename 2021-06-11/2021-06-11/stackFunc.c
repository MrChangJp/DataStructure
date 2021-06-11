//#define _CRT_SECURE_NO_WARNINGS 10
//#pragma once
//#include "stackFunc.h"
//
//void InitStack(SqStack* sList){
//	assert(sList);
//	sList->base = (Money*)malloc(sizeof(Money));
//	if (sList->base){
//		sList->top = sList->base;
//		sList ->size  = MAXSIZE;
//	}
//}
//
//void Push(SqStack* sList, SVALTYPE e1){
//	assert(sList);
//	*sList->base++ = e1;
//}
//
//void PrintStack(SqStack* sList){
//	assert(sList);
//	int eNum = StackLength(sList);
//	int i = 0;
//	while (i<eNum){
//		printf("%d ", *(sList->top+i++));
//		
//	}
//	puts("");
//}
//
//void EmpytStack(SqStack* sList){
//
//	assert(sList);
//	if (sList->top == sList->base){
//		puts("栈内为空！");
//	}
//	else{
//		puts("栈内不为空！");
//	}
//}
//
//int StackLength(SqStack* sList){
//	return sList->base - sList->top;
//}
//
//SVALTYPE GetTop(SqStack* sList){
//
//	assert(sList);
//	return *(sList->base - 1);
//}
//
//SVALTYPE* Pop(SqStack* sList){
//	assert(sList);
//	if (sList->top != sList->base){
//		SVALTYPE* base = sList->base - 1;
//		sList->base = base;
//		return base;
//	}
//	return NULL;
//
//}
//
//void ClearStack(SqStack* sList){
//
//	assert(sList);
//
//	sList->base = sList->top;
//	
//}
//
//void DestoryStack(SqStack* sList, SVALTYPE x){
//	assert(sList);
//
//	free(sList->top);
//	sList->base = sList->top = NULL;
//}