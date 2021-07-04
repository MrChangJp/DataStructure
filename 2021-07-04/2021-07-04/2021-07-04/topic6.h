#include <stdio.h>
#include <stdlib.h>

#define ELEMTYPE int

typedef struct QueLList{

	ELEMTYPE data;
	struct QueLList* base;

}*QueLList ,Node;

//�ÿն��С��ж϶����Ƿ�Ϊ�ա���Ӻͳ��ӵ��㷨
void InitLList(QueLList* ls);
void AddQue(QueLList* ls, ELEMTYPE e);
void DelQue(QueLList* ls);
int EmptyQue(QueLList* ls);
void ClearQue(QueLList* ls);

QueLList BuyNode();
