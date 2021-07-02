#include "topic.h"

test3(LinkedList l1,LinkedList l2){
	//假设链表是带有头结点的链表
	LNode* newList = l1;
	LNode* p1 = l1->next;
	LNode* p2 = l2->next;
	LNode* head = newList;
	while (p1&&l2){

		if (p1->data == p2->data){
			newList->next = p1;
			p1 = p1->next;
			newList = newList->next;
			p2 = p2->next;
			free(p2);

		}
		else if (p1->data < p2->data){
			LNode* tp = p1;
			p1 = p1->next;
			free(p1);
		}
		else{
			LNode* tp = p2;
			p2 = p2->next;
			free(p2);
		}

	}
	while (l1){
		LNode* tp = l1;
		l1 = l1->next;
		free(l1);
	}

	while (l2){
		LNode* tp = l2;
		l2 = l2->next;
		free(l2);
	}
	return  head;
}