#include "topic.h"


int test5(LinkedList l1, LinkedList l2, LinkedList l3){
	//l2��l3����ͷ���
	LNode* a = l2;
	LNode* b = l3;

	while (l1){
		
		if (l1->data > 0){
			a->next = l1->next;
			l1 = l1->next;
			a = a->next;
		}
		else{
			b->next = l1;
			l1 = l1->next;
			b = b->next;
		}
		
		l1 = l1->next;
	}

}