#pragma once
#include "Squeue.h"
#include <stdio.h>
#include<stdlib.h>


#define MAXSIZES 30
#define ELEMTYPE int
typedef struct SList{
	ELEMTYPE* data;
	int top, base;
}SList;

Status InitListT(SList* ls);
Status ListPushT(SList* ls, ELEMTYPE e);
//Status ListPppT(SList* ls, ELEMTYPE* e);

ELEMTYPE ListPppTs(SList* ls);