#define _CRT_SECURE_NO_WARNINGS 10
#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#define LINKED_VAL_TYPE int

typedef struct QNode{
	LINKED_VAL_TYPE data;
	struct QNode* next;
}QNode;

typedef struct QueLink{
	QNode* queFront, *queRear;

}QueLink;

QNode* BuyQueLinked();
void InitQue(QueLink* queList);
void LinkQuePush(QueLink* queList, LINKED_VAL_TYPE elem);
void DestoryLinkQue(QueLink* queList);
void PrintQueLinked(const QueLink* queList);
LINKED_VAL_TYPE GetQueFront(QueLink* queList);
void QueLinkPop(QueLink* queList);