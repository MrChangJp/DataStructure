#pragma once
#include "topic.h"
#define ELEMTYPE int 
#define MAXSIZE 20
typedef struct {

	
	 ELEMTYPE * top;
	 ELEMTYPE* base;
	int stackSize;

}SList, *SNode;

typedef enum Status{
	ERROR = -1,
	OK = 1
}Status;

Status InitStack(SList* ls);
Status Push(SList* ls,ELEMTYPE e);
Status Pop(SList* ls);
Status GetTop(SList* ls, ELEMTYPE*e);
void PrintStack(SList* ls);


typedef struct SLink{

	ELEMTYPE  data;
	struct SLink * next;

}*SLink, SLinks;


Status InitLStack(SLink* ls);
Status PushL(SLink* ls, ELEMTYPE e);
Status PopL(SLink* ls);
Status GetLTop(SLink* ls, ELEMTYPE* e);

void PrintLStack(SLink* ls);