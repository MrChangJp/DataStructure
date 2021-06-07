#define _CRT_SECURE_NO_WARNINGS 10

#include "SList.h"

void test1(){
	struct ListNode* sList = InitList();
	
	ListPushBack(sList, 1);
	ListPushBack(sList, 2);
	ListPushBack(sList, 3);
	ListPushBack(sList, 4);
	ListPrintf(sList);
	 
	DelNode(sList, 1);
	DelNode(sList, 2);
	DelNode(sList, 3);
	DelNode(sList, 4);
	//DelNode(sList, 4);
	ListPrintf(sList);


	ListPushBack(sList, 1);
	ListPushBack(sList, 2);
	ListPushBack(sList, 3);
	ListPushBack(sList, 4);
	ListPrintf(sList);

	ClearList(sList);
	ListPrintf(sList);

	ListPushBack(sList, 1);
	ListPushBack(sList, 2);
	ListPushBack(sList, 3);
	ListPushBack(sList, 4);
	ListPrintf(sList);

	DestoryList(&sList);
	//ListPrintf(sList);

	sList = InitList();
	ListPushBack(sList, 1);
	ListPushBack(sList, 2);
	ListPushBack(sList, 3);
	ListPushBack(sList, 4);
	ListPrintf(sList);

	ListPushFront(sList,32);
	ListPrintf(sList);

	ListPushBack(sList,99);
	ListPrintf(sList);

	ListPopFront(sList);
	ListPrintf(sList);


	ListPopBack(sList);
	ListPrintf(sList);

}


void test2(){

	struct ListNode* l1 = InitValList(30);
	struct ListNode* l2 = InitValList(21);
	l1 = l2;



}
//int main(){
//	test2();
//	return 0;
//}
//

