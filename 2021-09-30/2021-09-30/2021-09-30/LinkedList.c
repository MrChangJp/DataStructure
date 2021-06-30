#pragma once 
#include "LinkedList.h"

Status InitList(LinkList* ls){

	assert(ls);

	LNode * n = (LNode*)malloc(sizeof(LNode));
	n->next = NULL;
	(*ls) = n;
	return OK;

}
Status PushBack(LinkList *ls, ELEMTYPE e){
	 
	assert(ls);
	LNode* head = *ls;

	while (head->next){
		head = head->next;
	}

	LNode * n = (LNode*)malloc(sizeof(LNode));
	n->data = e;
	n->next = NULL;

	head->next = n;

	return OK;



}
Status PushFront(LinkList *ls, ELEMTYPE e){

	assert(ls);
	LNode* head = *ls;
	LNode * n = (LNode*)malloc(sizeof(LNode));
	n->data = e;
	n->next = (*ls)->next;

	(*ls)->next = n;

	return OK;
}

void PrintList(const LinkList *ls){

	assert(ls);
	LNode* head = (*ls)->next;
	while (head){
		printf("%d ", head->data);
		head = head->next;
	}
	puts("");

}

//时间复杂度为O(n)
Status GetElem(LinkList *ls, LNode** e, int i){

	assert(ls);
	
	int curIndex = 0;
	LNode* head = (*ls)->next;
	i -= 1;
	while (head && curIndex < i){
		
		head = head->next;
		
		curIndex++;
	}
	if (!head || curIndex > i) return ERROR;
	*e = head;

	return OK;
}
//时间复杂度为O(n)
LNode* LocateElem(LinkList *ls, ELEMTYPE e){

	assert(ls);
	LNode* head = (*ls)->next;

	while (head && head->data != e){
		head = head->next;
	}

	return head;

	/*while (head){

		if (head->data == e){
			return head;
		}

		head = head->next;
	}
	return NULL;*/

}

Status ListInsert(LinkList *ls, int i, ELEMTYPE e){

	assert(ls);
	LNode* node = NULL;
	if (i == 1){
		PushFront(ls, e); return OK;
	}
	int status = GetElem(ls, &node,i-1);

	if (status == -1){
		return status;
	}

	LNode * n = (LNode*)malloc(sizeof(LNode));
	n->data = e;
	n->next = node->next;
	node->next = n;
	return OK;

}

Status ListDelete(LinkList *ls, int i){

	assert(ls);
	LNode* head = (*ls)->next;
	if (i == 1){
		LNode* tp = head;
		(*ls)->next = tp->next;
		free(tp);
		return OK;
	}
	LNode* node = NULL;
	int status = GetElem(ls, &node,i-1);
	if (status == -1){
		return status;
	}
	LNode* tp = node->next;
	node->next = tp->next;
	free(tp);
	return OK;

}