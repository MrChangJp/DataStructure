#define _CRT_SECURE_NO_WARNINGS 10
#include "chainStack.h"

void InitStack(LinkedList* lList){
	assert(lList);
	lList->top = NULL;

}

void Push(LinkedList* lList, LINKDATATYPE elem){
	assert(lList);
	LinkedList* node = (LinkedList*)malloc(sizeof(LinkedList));
	node->top = lList->top;
	node->data = elem;

	lList->top = node;
}

void PrintStack(const LinkedList* lList){
	assert(lList);
	LinkedList* cur = lList->top;
	while (cur){
		printf("%d ", cur->data);
		cur = cur->top;
	}
	puts("");
}

LINKDATATYPE GetPop(const LinkedList* lList){
	assert(lList);
	if (lList->top){
		return lList->top->data;
	}
	return -1;
	
}

void Pop(LinkedList* lList){
	assert(lList);
	if (lList->top){
		LinkedList* top = lList->top;
		lList->top = top->top;
		free(top);
	}
}