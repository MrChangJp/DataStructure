#pragma once 
#include "LinkedList.h"
#include "moreElem.h"

test1(){
	LinkList ls;
	InitList(&ls);
	PushBack(&ls,333);
	PushBack(&ls, 3331);
	PushBack(&ls, 3332);
	PushBack(&ls, 3333);
	PushBack(&ls, 3334);
	PrintList(&ls);


	PushFront(&ls, 222);
	PushFront(&ls, 2221);
	PushFront(&ls, 2222);
	PushFront(&ls, 2223);
	PushFront(&ls, 2224);
	PushFront(&ls, 2225);
	PrintList(&ls);

	LNode* val = NULL;
	int status = GetElem(&ls, &val, 9);
	if (status != -1)
		printf("GetElem : %d\n", val->data);
	else
		puts("ÊäÈë´íÎó£¡");

	LNode* node = LocateElem(&ls, 2222);

	if (node){

		printf("Locate Elem £º%d\n",node->data);

	}
	else{
		puts("Î´²éÑ¯µ½£¡");
	}

	status = ListInsert(&ls, 1, 999);
	if (status != -1)
		printf("GetElem : %d\n", val->data);
	else
		puts("ÊäÈë´íÎó£¡");
	PrintList(&ls);

	status = ListDelete(&ls, 88);
	if (status != -1)
		PrintList(&ls);
	else
		puts("ÊäÈë´íÎó£¡");
	



}
test2(){

	Polynomial a;
	Polynomial b;
	InitPoly(&a);
	InitPoly(&b);

	PNode* no =    AddPoly(a, b);
	PrintfPNOde(&no);


}
int main(){
	test2();
	return 0;
}