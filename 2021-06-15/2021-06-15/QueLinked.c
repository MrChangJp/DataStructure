#define _CRT_SECURE_NO_WARNINGS 10
#include"QueLinked.h"

void InitQue(QueLink* queList){
	QNode* newNode = BuyQueLinked();
	newNode->next = NULL;
	if (newNode){
		queList->queFront = queList->queRear = newNode;
	}
}
QNode* BuyQueLinked(){
	return (QNode*)malloc(sizeof(QNode));
}
void LinkQuePush(QueLink* queList, LINKED_VAL_TYPE elem){
	QNode* newNode = BuyQueLinked();
	
	newNode->data = elem;
	newNode->next = queList->queRear->next;
	 queList->queRear->next = newNode;
	 queList->queRear = newNode;
	
}

void DestoryLinkQue(QueLink* queList){

	assert(queList);
	QNode* front = queList->queFront;
	QNode* rear = queList->queRear;
	while (front!= rear){
		QNode* next = front->next;
		free(front);
		front = next;
	}
	free(front);

	queList->queFront = queList->queRear = NULL;
}

void PrintQueLinked(const QueLink* queList){

	if (queList->queFront == queList->queRear){
		puts("队列内暂无元素！");
		return;
	}
	QNode* head = queList->queFront->next;

		printf("队首>>> ");
	while (head){
		printf("%d ",head->data);
		head = head->next;
	}
	puts(">>>队尾");


}

LINKED_VAL_TYPE GetQueFront(QueLink* queList){
	if (queList->queFront == queList->queRear){
		puts("队列内暂无元素可以获得！");
		return -1;
	}
	return queList->queFront->next->data;
}

void QueLinkPop(QueLink* queList){

	if (queList->queFront == queList->queRear){
		puts("队列内暂无元素！");
		return;
	}
	QNode* head = queList->queFront->next;
	queList->queFront->next = head->next;
	free(head);

}