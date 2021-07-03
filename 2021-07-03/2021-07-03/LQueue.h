#pragma once
#include "Squeue.h"

#define ELEMTYPE int

typedef struct QNode{
	ELEMTYPE data;
	struct QNode* next;
}QNode;

typedef struct LinkQueue{
	struct QNode* front;
	struct QNode* rear;
}LinkQueue;

ELEMTYPE* BuyNode();
Status InitLQueue(LinkQueue* lq);
Status EnLQueue(LinkQueue* lq, ELEMTYPE e);
Status DeLQueue(LinkQueue* lq);
Status GetLHead(LinkQueue* lq, ELEMTYPE* e);