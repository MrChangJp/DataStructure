#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;

};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	
	struct ListNode* newListHead = NULL;
	struct ListNode* newListEnd = NULL;

	if (!l1 && !l2){
		return l1;
	}
	if (!l1 && l2){
		return l2;
	}
	if (l1 && !l2){
		return l1;
	}
	struct ListNode* priv = l1;
	while (l1||l2){

		if (!l1 && l2){
			newListEnd->next = l2;
			break;
		}

		if (l1 && !l2){
			newListEnd->next = l1;
			break;
		}

		if (l1->val >= l2->val){

			if (!newListHead){
				newListHead = l1;
				newListEnd = l1;
				l1 = l1->next;
			}
			else{
				struct ListNode* temp = l2->next;
				
			newListEnd->next = l2;
			newListEnd = newListEnd->next;
			l2 = temp;
			temp = NULL;
			}



		}
		else{
			struct ListNode* temp = l1->next;
			newListEnd->next = l1;
			newListEnd = newListEnd->next;
			l1 = temp;
			temp = NULL;
		}


	}



	return newListHead;


}

int main(){
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

	struct ListNode* head1a = (struct ListNode*)malloc(sizeof(struct ListNode));
	head1a->val = 5;
	head1a->next = NULL;
	struct ListNode* head11 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head11->val = 4;
	head11->next = head1a;
	struct ListNode* head22 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head22->val = 3;
	head22->next = head11;
	struct ListNode* head33 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head33->val = 2;
	head33->next = head22;
	struct ListNode* head44 = (struct ListNode*)malloc(sizeof(struct ListNode));
	head44->val = 1;
	head44->next = head33;
	head1a = head44;

	mergeTwoLists(head,head1a);
	return 0;
}