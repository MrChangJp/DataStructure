#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


struct ListNode {
	int val;
	struct ListNode *next;
	
};
typedef struct ListNode  ListNode;

ListNode* partition(ListNode* pHead, int x) {

	ListNode* leftNode = NULL , *rightNode = NULL;
	ListNode* leftRealNode = NULL, *rightRealNode = NULL;

	while (pHead){

		if (pHead->val <  x){

			if (!leftNode){
				leftNode = leftRealNode = pHead;
			}
			else{
				leftRealNode->next = pHead;
				leftRealNode = pHead;
			}

		}
		else{
			if (!rightNode){
				rightNode = rightRealNode = pHead;
			}
			else{
				rightRealNode->next = pHead;
				rightRealNode = pHead;
			}
		}
		pHead = pHead->next;

	}

	if (leftRealNode){
		leftRealNode->next = rightNode;
	}
	else{
		leftNode = rightNode;
	}

	if (rightRealNode){
		rightRealNode->next = NULL;
	}

	return leftNode;

	
}