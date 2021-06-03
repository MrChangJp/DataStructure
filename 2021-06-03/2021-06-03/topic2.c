#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


 struct ListNode {
	int val;
	struct ListNode *next;
	
};
 struct ListNode* removeElements(struct ListNode* head, int val){
	 struct ListNode* privNode = NULL;
	 struct ListNode* curNode = head;
	 while (curNode){

		 if (curNode->val == val){

			 if (privNode == NULL){

				 head = curNode->next;
				 free(curNode);
				 curNode = head;
			 }
			 else{

				 privNode->next = curNode->next;;
				 free(curNode);
				 curNode = privNode->next;
			 }


		 }
		 else{
			 privNode = curNode;
			 curNode = curNode->next;
		 }

	 }
	 return head;

 }
//int main(){
//
//	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head->val = 7;
//	head->next = NULL;
//	struct ListNode* head1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head1->val = 7;
//	head1->next = head;
//	struct ListNode* head2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head2->val = 7;
//	head2->next = head1;
//	struct ListNode* head3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head3->val = 7;
//	head3->next = head2;
//	struct ListNode* head4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	head4->val = 7;
//	head4->next = head3;
//	head = head4;
//
//	removeElements(head,7);
//
//}