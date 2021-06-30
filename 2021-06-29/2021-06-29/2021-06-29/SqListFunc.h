#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAXSIZE 100
#define ELEMTYPE int

typedef struct{

	ELEMTYPE * list;
	int length;

}SqList;

typedef enum Status
{
	ERROR = -1,
	OK = 1
}Status;

Status InitList(SqList* ls);
Status DestoryList(SqList* ls);
Status PustBack(SqList* ls, ELEMTYPE e);
Status ListInsert(SqList* ls, ELEMTYPE e, int index);
void PrintList(SqList* ls);
Status ListDelete(SqList* ls,int i);
Status GetElem(SqList* ls, ELEMTYPE * e,int index);