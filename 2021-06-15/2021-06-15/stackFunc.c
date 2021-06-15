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
		perror("栈满，无法添加！");
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
	printf("栈底>>>  ");
	while (i<len){
		printf("%d ",stackList->base[i++]);
	}
	printf(">>>栈顶");
	puts("");
}

void GetTop(SqStack* stackList){
	printf("Get Pop：%d\n", *(stackList->top-1));
}

void Pop(SqStack* stackList){
	if (stackList->top == stackList->base){
		perror("无元素可删！");
	}
	stackList -> top--;
}

void EmptyStack(SqStack* stackList){
	if (stackList->top == NULL){
		puts("栈已被销毁！");
		return;
	}
	if (stackList->top == stackList->base){
		puts("栈为空！");
	}
	else{
		puts("栈为不空！");
	}
}

void ClearStack(SqStack* stackList){
	stackList->top = stackList->base;
}

void DestoryStack(SqStack* stackList){
	stackList->top = stackList->base = NULL;

}