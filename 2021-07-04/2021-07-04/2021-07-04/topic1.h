#pragma once

#include <stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum Status{
	FALSE = 0,
	ERROR = -1,
	OK = 1
}Status;

#define MAXSIZES 50
#define ELEMTYPE int

typedef struct SList{
	ELEMTYPE* data;
	int top, base;
}SList;
typedef struct SChar{
	char* data;
	int top, base;
}SChar;
Status InitListTs(SList* ls);
Status InitListT(SList* ls);
Status ListPushT(SList* ls, ELEMTYPE e);
//Status ListPppT(SList* ls, ELEMTYPE* e);

ELEMTYPE ListPopTs(SList* ls);
int EmptyList(SList* ls);
int FullList(SList* ls);
ELEMTYPE GetTop(SList* ls);
