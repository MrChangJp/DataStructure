#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include "stackFunc.h"

int* BuyStackNode(){
	return (int*)malloc(sizeof(int));
}

void InitStack(SqStack* stackList){
	stackList->top = BuyStackNode();
	if (stackList->top){
		stackList->base = stackList->top;
		stackList->listSize = MAXSIZE;
	}
}

void Push(SqStack* stackList, VALTYPE x){
	if (StackLength(stackList) < 0){
		perror("ջ�����޷���ӣ�");
		return;
	}
	*stackList->top++ = x;

}

int StackLength(SqStack* stackList){
	return stackList->top - stackList->base;
}

void PrintStack(SqStack* stackList){
	int len = StackLength(stackList);
	int i = 0;
	printf("ջ��>>>  ");
	while (i<len){
		printf("%d ",stackList->base[i++]);
	}
	printf(">>>ջ��");
	puts("");
}

void GetTop(SqStack* stackList){
	printf("Get Pop��%d\n", *(stackList->top-1));
}

void Pop(SqStack* stackList){
	if (stackList->top == stackList->base){
		perror("��Ԫ�ؿ�ɾ��");
	}
	stackList -> top--;
}

void EmptyStack(SqStack* stackList){
	if (stackList->top == NULL){
		puts("ջ�ѱ����٣�");
		return;
	}
	if (stackList->top == stackList->base){
		puts("ջΪ�գ�");
	}
	else{
		puts("ջΪ���գ�");
	}
}

void ClearStack(SqStack* stackList){
	stackList->top = stackList->base;
}

void DestoryStack(SqStack* stackList){
	stackList->top = stackList->base = NULL;

}