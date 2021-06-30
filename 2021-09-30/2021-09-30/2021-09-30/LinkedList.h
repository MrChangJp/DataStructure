#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#define ELEMTYPE int

typedef struct LNode{
	ELEMTYPE  data;
	struct LNode * next;
}*	LinkList, LNode;

typedef enum 
{
	ERROR = -1,
	OK = 1
}Status;

Status InitList(LinkList *ls);
Status PushBack(LinkList *ls,ELEMTYPE e);
Status PushFront(LinkList *ls, ELEMTYPE e);

void PrintList(const LinkList *ls);

Status GetElem(LinkList *ls, LNode** e, int i);

LNode* LocateElem(LinkList *ls, ELEMTYPE e);

Status ListInsert(LinkList *ls, int i, ELEMTYPE e);
Status ListDelete(LinkList *ls, int i);