#include "stack.h"



Status InitStack(SList* ls){

	ls->base = (ELEMTYPE*)malloc(sizeof(ELEMTYPE)*MAXSIZE);
	if (!ls->base) return ERROR;
	ls->top = ls->base;
	ls->stackSize = MAXSIZE;
	return OK;
}

Status Push(SList* ls, ELEMTYPE e){

	if (ls->top - ls->top > MAXSIZE) return ERROR;

	*(ls->top) = e;
	++ls->top;
	return OK;
}

Status Pop(SList* ls){
	if (ls->base == ls->top) return ERROR;
	ls->top--;
	return OK;
}

Status GetTop(SList* ls, ELEMTYPE*e){
	if (ls->base == ls->top) return ERROR;
	*e = *(ls->top-1);
	return OK;
}


Status InitLStack(SLink* ls){

	*ls = NULL;
	return OK;

}
Status PushL(SLink* ls, ELEMTYPE e){

	//if (!ls) return ERROR;
	SLink node = (SLink)malloc(sizeof(SLinks));
	node->data = e;
	node->next = (*ls);
	*ls = node;
	return OK;

}
Status PopL(SLink* ls){

	//if ((*ls)->next == NULL) return ERROR;
	SLink no = (*ls)->next;
	(*ls) = no->next;
	free(no);
	return OK;

}
Status GetLTop(SLink* ls, ELEMTYPE* e){

	if ((*ls) == NULL)return ERROR;

	*e = (*ls)->data;
	return OK;

}


void PrintStack(SList* ls){

	//if (ls->base == ls->top) return;
	ELEMTYPE* base = ls->base;
	while (base != ls->top){
		printf("%d ",*base++);
	}
	puts("");

}