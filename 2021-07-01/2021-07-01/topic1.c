#include"topic.h"

test1(LinkedList l1, LinkedList l2){

	if (!l1)return l2;
	if (!l2)return l1;

	LNode* newLink = NULL;
	if (l1->data <= l2->data){
		newLink = l1;
		l1 = l1->next;
	}
	else{
		newLink = l2;
		l2 = l2->next;
	}
	LNode* head = newLink;
	while (l1&&l2){
		if (l1->data < l2->data){
			newLink->next = l1;
			l1 = l1->next;
			newLink = newLink->next;
		}if (l1->data == l2->data){
			newLink->next = l1;
			l1 = l1->next;	
			l2 = l2->next;
			newLink = newLink->next;
		}
		else{
			newLink->next = l2;
			l2 = l2->next;
			newLink = newLink->next;
		}
	}

	if (!l1) newLink->next = l2;
	if (!l2) newLink->next = l1;

	return head;


}