#define _CRT_SECURE_NO_WARNINGS 10
#include"linkedList.h"

LinkedList* BuyLinkedNode(){
	return (LinkedList*)malloc(sizeof(LinkedList));
}

void InitLinkList(LinkedList** list){

	*list = NULL;

}
void LinkedPush(LinkedList** list, LINKED_VAL_TYPE elem){
	LinkedList* newNode = BuyLinkedNode();
	newNode->next = *list;
	newNode->data = elem;
	*list = newNode;
}

void PrintfLinked(LinkedList** list){
	LinkedList* top = *list;
		printf("Õ»¶¥>>> ");
	while (top){
		
		printf("%d ", top->data);
		top = top->next;
	}
		printf(" >>>Õ»µ×");
		puts("");
}

void PopLinked(LinkedList** list){
	if (!*list){
		puts("Á´Õ»Îª¿Õ£¡ÎÞ·¨ÔÙÉ¾£¡");
		return;
	}
	LinkedList* top = *list;
	LinkedList* topNext = top->next;
	free(top);
	*list = topNext;
}