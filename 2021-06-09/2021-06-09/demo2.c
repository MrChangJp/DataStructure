#define _CRT_SECURE_NO_WARNINGS 10
#include "test2.h"

void MergeList(ListNode** list1,  ListNode* list2){
	ListNode* l1Head = (*list1)->next;
	ListNode* l2Head = (list2)->next;
	if (!l1Head ){
		*list1 = l2Head;
		free(list2);
	}
	if (!l2Head){
		return;
	}

	while (l2Head){
		ListNode* nextNode = l2Head->next;
		int has = 0;
		while (l1Head){
			if (l1Head->val == l2Head->val){
				has = 1;
				break;
			}
			if (!l1Head -> next){
				break;
			}
			l1Head = l1Head->next;
		}
		if (!has){
			l2Head->next = NULL;
			l1Head->next = l2Head;
		}
		else{
			free(l2Head);
		}
		l2Head = nextNode;
	}
}

void MergeList1(ListNode** list1, ListNode* list2){
	ListNode* l1Head = (*list1)->next;
	ListNode* l2Head = (list2)->next;
	if (!l1Head){
		*list1 = l2Head;
		free(list2);
	}
	if (!l2Head){
		return;
	}

	ListNode* l1EndNode = l1Head;

	while (l1EndNode->next){
		l1EndNode = l1EndNode->next;
	}


	while (l2Head){
		ListNode* nextNode = l2Head->next;
		
		ListNode* exist = LocateElem(l1Head, l2Head->val);
		if (!exist){
			ListPushBack(list1, l2Head->val);
		}
		else{
			free(l2Head);
		}
			l2Head = nextNode;
	}
}

void MergeList2(ListNode** list1, ListNode* list2){
	ListNode* l1Head = (*list1)->next;
	ListNode* l2Head = (list2)->next;
	if (!l1Head){
		*list1 = l2Head;
		free(list2);
	}
	if (!l2Head){
		free(list2);
		return;
	}
	while (l1Head && l2Head){

		if (l1Head->val > l2Head->val){
			ListInsertNode1(list1, l1Head, l2Head->val);
		}

	}


}

void test2(){
	ListNode* SList1 = InitList(0);

	ListPushBack(&SList1, 7);
	ListPushBack(&SList1, 5);
	ListPushBack(&SList1, 3);
	ListPushBack(&SList1, 11);
	PrintListHead(SList1);
	ListNode* SList2 = InitList(0);

	ListPushBack(&SList2, 7);
	ListPushBack(&SList2, 5);
	ListPushBack(&SList2, 3);
	ListPushBack(&SList2, 11);
	ListPushBack(&SList2, 2);
	ListPushBack(&SList2, 6);

	PrintListHead(SList2);

	MergeList1(&SList1, SList2);

	PrintListHead(SList1);
	
}



void test3(){
	ListNode* SList1 = InitList(0);

	ListPushBack(&SList1, 7);
	ListPushBack(&SList1, 5);
	ListPushBack(&SList1, 3);
	ListPushBack(&SList1, 11);
	PrintListHead(SList1);
	ListNode* SList2 = InitList(0);

	ListPushBack(&SList2, 7);
	ListPushBack(&SList2, 5);
	ListPushBack(&SList2, 3);
	ListPushBack(&SList2, 11);
	ListPushBack(&SList2, 2);
	ListPushBack(&SList2, 6);

	PrintListHead(SList2);

	MergeList2(&SList1, SList2);

	PrintListHead(SList1);

}