//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
//struct Node {
//    int val;
//    struct Node *next;
//    struct Node *random;
//};
//
//
//
//struct Node* copyRandomList(struct Node* head) {
//
//	if (!head) return head;
//
//	struct Node* newList = NULL, *cur = head;
//
//	while (cur){
//		struct Node* nextNode = cur->next;
//
//		struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
//		newNode->next = nextNode;
//		newNode->random = cur->random;
//		newNode->val = cur->val;
//
//		cur->next = newNode;
//
//		cur = nextNode;
//
//	}
//
//	cur = head;
//	newList = head->next;
//	while (cur){
//
//		struct Node* newNextNode = cur->next;
//		struct Node* curNext = newNextNode->next;
//		if (newNextNode->random)
//			newNextNode->random = newNextNode->random->next;
//		if (curNext)
//			newNextNode->next = curNext->next;
//		cur->next = curNext;
//		cur = curNext;
//
//	}
//
//	return newList;
//
//}
//
//int main(){
//
//
//	//[[7, null], [13, 0], [11, 4], [10, 2], [1, 0]]
//
//
//	struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
//	node1->val = 7;
//	node1->next = NULL;
//	node1->random = NULL;
//	struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
//	node2->val = 13;
//	node2->next = node1;
//	node2->random = node1;
//	struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
//	node3->val = 11;
//	node3->next = node2;
//	node3->random = node2;
//	struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
//	node4->val = 10;
//	node4->next = node3;
//	node4->random = node2;
//	struct Node* node5 = (struct Node*)malloc(sizeof(struct Node));
//	node5->val = 1;
//	node5->next = node4;
//	node5->random = node1;
//
//	copyRandomList(node5);
//
//	return 0;
//}