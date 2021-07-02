#pragma once 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define ELEMTYPE int 
typedef struct LNode{
	ELEMTYPE data;
	struct LNode* next;
}*LinkedList,LNode;

typedef struct SqNode{
	ELEMTYPE* data;
	int length;
}SqNode,*SqList;