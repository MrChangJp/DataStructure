#include "topic.h"


int test4(LinkedList l1, LinkedList l2){

	

	int length = 0;

	//假设链表是带有头结点的链表
	LNode* newList = l1;
	LNode* p1 = l1->next;
	LNode* p2 = l2->next;
	LNode* head = newList;


	while (p1&&p2){

		if (p1->data == p2->data){
			LNode* tmp = p1;
			p1 = p1->next;
			free(tmp);

			tmp = p2;
			p2 = p2->next;
			free(tmp);
		}
		else if (p1->data < p2->data){
			newList->next = p1;
			p1 = p1->next;
			newList = newList->next;
			length++;
		}
		else{
			newList->next = p2;
			p2 = p2->next;
			newList = newList->next;
			length++;
		}

	}

	if (!p1){
		newList->next = p2;
		while (p2){
			p2 = p2->next;
			length++;
		}
	}
	if (!p2){
		newList->next = p1;
		while (p1){
			p1 = p1->next;
			length++;
		}
	}

	return length;

}