#include <stdio.h>
#include <stdlib.h>

#define ELEMTYPE int

typedef struct QueLList{

	ELEMTYPE data;
	struct QueLList* base;

}*QueLList ,Node;

//置空队列、判断队列是否为空、入队和出队等算法
void InitLList(QueLList* ls);
void AddQue(QueLList* ls, ELEMTYPE e);
void DelQue(QueLList* ls);
int EmptyQue(QueLList* ls);
void ClearQue(QueLList* ls);

QueLList BuyNode();
