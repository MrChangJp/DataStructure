#define _CRT_SECURE_NO_WARNINGS 10

#include "SList.h"

struct ListNode* BuyListNode(){
	struct ListNode* headNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	headNode->next = NULL;
	headNode->priv = NULL;
	headNode->val = 0;
	return headNode;
}

struct ListNode* InitValList(LTDataType x){
	struct ListNode* head = BuyListNode();
	head->next = head;
	head->priv = head;
	head->priv = x;
	return head;
}

struct ListNode* InitList(){
	struct ListNode* head = BuyListNode();
	head->next = head;
	head->priv = head;
	return head;
}

struct ListNode* findNode(struct ListNode *list, LTDataType x){
	assert(list);
	struct ListNode * firstNode = list->next;
	while (firstNode != list){

		if (firstNode->val == x){
			return firstNode;
		}

		firstNode = firstNode->next;
	}

	return NULL;

}

void ListPushBack(struct ListNode* list,LTDataType x){
	InsertNode(list,x);
}


void InsertNode(struct ListNode* list, LTDataType x){
	assert(list);


	struct ListNode* newNode = BuyListNode();
	newNode->val = x;

	struct ListNode* privNode = list->priv;

	newNode->next = privNode->next;
	newNode->priv = list->priv;

	list->priv = newNode;
	privNode->next = newNode;

	
}
void ListPrintf(struct ListNode *list){
	assert(list);
	struct ListNode* cur = list->next;
	while (cur != list)
	{
		printf("%d ",cur->val);
		cur = cur->next;
	}
	puts("");

}

void NodeErase(struct ListNode* list){

	assert(list);
	if (list->priv == list) return;

	

	struct ListNode* privNode = list->priv;
	struct ListNode* nexNode = list->next;

	free(list);

	privNode->next = nexNode;
	nexNode->priv = privNode;

}

void DelNode(struct ListNode* list, LTDataType x){

	assert(list);
	if (list->next == list) return;

	struct ListNode* fNode = findNode(list,x);

	NodeErase(fNode);

}

void ClearList(struct ListNode* list){

	assert(list);
	if (list->next == list) return;
	struct ListNode* cur = list->next;
	while (cur != list){

		struct ListNode* nexNode = cur->next;
		struct ListNode* priNode = cur->priv;
		free(cur);
		nexNode->priv = priNode;
		priNode->next = nexNode;
		cur = nexNode;
	}

}

void DestoryList(struct ListNode** list){
	assert(*list);
	ClearList(*list);
	free(*list);
	*list = NULL;
}

void ListPushFront(struct ListNode* list, LTDataType x){
	assert(list);
	InsertNode(list->next,x);
}


//void ListPushBack(struct ListNode* list, LTDataType x){
//	InsertNode(list, x);
//}
//
void ListPopFront(struct ListNode* list){
	assert(list);
	NodeErase(list->next);
}
void ListPopBack(struct ListNode* list){
	assert(list);
	NodeErase(list->priv);
}
