#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

	if (!l1) return l2;
	if (!l2) return l1;

	struct ListNode* l1Cur = l1;
	struct ListNode* l2Cur = l2;
	struct ListNode* pre = NULL;

	while (l2Cur&&l1Cur){

		if (l1Cur->val >= l2Cur->val){

			if (l1 == l1Cur){

				struct ListNode* l2Next = l2Cur->next;
				l2Cur->next = l1Cur;
				l1Cur = l1 = l2Cur;
				l2Cur = l2Next;

			}
			else{
				struct ListNode* l2Next = l2Cur->next;
				l2Cur->next = pre->next;
				pre->next = l2Next;
				l2Cur = l2Next;
			}

		}
		else{
			pre = l1Cur;
			l1Cur = l1Cur->next;
		}

	}
	if (!l1Cur){
		pre->next = l2Cur;
	}
	else{
		pre->next = NULL;
	}
	return l1;

}

struct ListNode* insertionSortList(struct ListNode* head){

	if (!head || !head->next) return head;

	struct ListNode* sortedList = head;
	struct ListNode* splitedList = head->next;
	struct ListNode* pre = NULL;
	sortedList->next = NULL;

	while (splitedList){
		struct ListNode* splitedNext = splitedList->next;
		struct ListNode* curSortedList = sortedList;
		while (curSortedList){
			if (splitedList->val <= curSortedList->val){
				if (curSortedList == sortedList){
					struct ListNode* nextNode = splitedList->next;
					splitedList->next = curSortedList;
					curSortedList = sortedList = splitedList;
					splitedList = nextNode;
					break;
				}
				else{
					struct ListNode* nextNode = splitedList->next;
					splitedList->next = pre->next;
					pre->next = splitedList;
					splitedList = nextNode;
					break;
				}
			}
			pre = curSortedList;
			curSortedList = curSortedList->next;
		}
		if (!curSortedList){
			splitedList->next = NULL;
			pre->next = splitedList;

		}
		splitedList = splitedNext;

	}
	return sortedList;
	 
}
//
//main(){
//	struct ListNode* l4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	l4->next = NULL;
//	l4->val = 2;
//	struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	l3->next = l4;
//	l3->val = 1;
//	struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	l2->next = l3;
//	l2->val = 3;
//	struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	l1->next = l2;
//	l1->val = 4;
//
//
//	struct ListNode* ll3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ll3->next = NULL;
//	ll3->val = 3;
//	struct ListNode* ll2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ll2->next = ll3;
//	ll2->val = 2;
//	struct ListNode* ll1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	ll1->next = ll2;
//	ll1->val = 1;
//
//	insertionSortList(l1);
//
//}