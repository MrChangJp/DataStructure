#include "topic.h"


LNode* test6(LinkedList l1){

	LNode* maxNode = l1->next;
	l1 = maxNode->next;

	while (l1){
		if (maxNode->data < l1->data){
			maxNode = l1;

		}
		l1 = l1->next;
	}

	return maxNode;
}