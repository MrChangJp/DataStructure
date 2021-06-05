//#define _CRT_SECURE_NO_WARNINGS 10
//
//
//struct ListNode {
//	int val;
//	struct ListNode *next;
//};
//
//
//
//
//struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
//	struct ListNode* newListHead = NULL;
//	struct ListNode* newListEnd = NULL;
//
//
//	if (!l1){
//		return l2;
//	}
//	if (!l2){
//		return l1;
//	}
//
//	if (l1->val > l2->val){
//
//		newListHead = l2;
//		newListEnd = l2;
//		l2 = l2->next;
//
//	}
//	else{
//
//
//		newListHead = l1;
//		newListEnd = l1;
//		l1 = l1->next;
//
//
//	}
//
//	while (l1&&l2){
//
//		if (l1->val >= l2->val){
//
//			newListEnd->next = l2;
//			l2 = l2->next;
//
//
//
//		}
//		else{
//
//			newListEnd->next = l1;
//			l1 = l1->next;
//
//		}
//
//		newListEnd = newListEnd->next;
//
//	}
//
//	if (!l1){
//		newListEnd->next = l2;
//
//	}
//
//	if (!l2){
//		newListEnd->next = l1;
//
//	}
//
//	return newListHead;
//
//
//}