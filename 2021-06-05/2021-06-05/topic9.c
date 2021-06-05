#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>



struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* insertionSortList(struct ListNode* head){


	if (!head || !head->next) return head;
	struct ListNode* splitedList = head->next;
	struct ListNode* sortList = head;
	struct ListNode* curSortList = sortList;
	sortList->next = NULL;

	while (splitedList){
		struct ListNode* prv = NULL;
		curSortList = sortList;
		while (curSortList){

			if (curSortList->val > splitedList->val){

				if (curSortList == sortList){

					struct ListNode* splitNode = splitedList;
					splitedList = splitedList->next;

					splitNode->next = sortList;
					sortList = splitNode;
					break;
				}
				else{

					struct ListNode* splitNode = splitedList;
					splitedList = splitedList->next;

					splitNode->next = prv->next;
					prv->next = splitNode;
					break;


				}
				prv = curSortList;
				curSortList = curSortList->next;
			}
			struct ListNode* nextNode = splitedList;
			splitedList = splitedList->next;
			if (!curSortList){

				curSortList->next = nextNode;
				nextNode->next = NULL;
			}
		}





	}

	return sortList;





}

int main(){


	//[[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
	//[-1, 5, 3, 4, 0]
	struct ListNode* ListNodea = (struct ListNode*)malloc(sizeof(struct ListNode));
	ListNodea->val = 0;
	ListNodea->next = NULL;

	struct ListNode* ListNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	ListNode->val = 4;
	ListNode->next = ListNodea;

	struct ListNode* ListNode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	ListNode1->val = 3;
	ListNode1->next = ListNode;
	
	struct ListNode* ListNode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	ListNode2->val = 5;
	ListNode2->next = ListNode1;
	
	struct ListNode* ListNode3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	ListNode3->val = -1;
	ListNode3->next = ListNode2;
	

	insertionSortList(ListNode3);

	return 0;
}