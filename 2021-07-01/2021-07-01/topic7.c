#include "topic.h"


LNode* test6(LinkedList l1){

	LNode* curNode = l1->next;
	LNode* nextNode = curNode->next;
	curNode->next = NULL;

	while (nextNode){

		LNode* nextNextNode = nextNode->next;
		nextNode->next = curNode;
		curNode = nextNode;
		nextNode = nextNextNode;

	}
	l1->next = curNode;
	return l1;

}