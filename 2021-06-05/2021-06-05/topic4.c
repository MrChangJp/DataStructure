//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
//
//struct ListNode {
//    int val;
//    struct ListNode *next;
//};
//
//
////Á´±í·­×ª
//struct ListNode* reverseList(struct ListNode* head){
//	// if (!head || !head->next){
//	// 		return head;
//	// 	}
//	struct ListNode* newhead = NULL;
//	struct ListNode* cur = head;
//
//	while (cur){
//
//		struct ListNode* nextNode = cur->next;
//		cur->next = newhead;
//		newhead = cur;
//		cur = nextNode;
//
//	}
//
//	return newhead;
//}
