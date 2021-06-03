#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


struct ListNode {
	int val;
	struct ListNode *next;
	
};

struct ListNode* FindKthToTail(struct ListNode* pHead, int k) {
	// write code here
	if (!pHead || !pHead->next){
		return pHead;
	}
	struct ListNode* pFast = pHead;
	struct ListNode* pSlow = pHead;
	while (k--){
		if (!pFast){
			return NULL;
		}
		pFast = pFast->next;

	}
	while (pFast){
		pFast = pFast->next;
		pSlow = pSlow->next;

	}
	return pSlow;

}

//int main(){
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->val = 5;
//	head->next = NULL;
//	struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head1->val = 4;
//	head1->next = head;
//	struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head2->val = 3;
//	head2->next = head1;
//	struct ListNode* head3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head3->val = 2;
//	head3->next = head2;
//	struct ListNode* head4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head4->val = 1;
//	head4->next = head3;
//	head = head4;
//
//	FindKthToTail(head,2);
//
//
//
//
//	return 0;
//}