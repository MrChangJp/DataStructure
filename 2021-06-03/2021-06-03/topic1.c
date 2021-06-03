#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>


struct ListNode {
    int val;
    struct ListNode *next;
};



struct ListNode* reverseList(){
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	head->val = 5;
	head->next = NULL;
	struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head1->val = 4;
	head1->next = head;
	struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head2->val = 3;
	head2->next = head1;
	struct ListNode* head3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head3->val = 2;
	head3->next = head2;
	struct ListNode* head4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head4->val = 1;
	head4->next = head3;
	head = head4;
	struct ListNode* newhead = NULL;
	struct ListNode* cur = head;

	while (cur){

		struct ListNode* nextNode = cur->next;
		cur->next = newhead;
		newhead = cur;
		cur = nextNode;

	}

	return newhead;
}
//链表翻转（头插法）
//int main(){
//
//	reverseList();
//
//}