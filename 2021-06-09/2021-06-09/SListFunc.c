#define _CRT_SECURE_NO_WARNINGS 10
#include "SListFunc.h"

ListNode* ListBuyNode(ListValType x){
	
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->next = NULL;
	node->val = x;
	return node; 
}

ListNode* InitList(ListValType x){
	return ListBuyNode(x);
}

void PrintList(ListNode* list){
	
	while (list){
		printf("%d ", list->val);
		list = list->next;
	}
	puts("");
}

void PrintListHead(ListNode* list){
	list = list->next;
	while (list){
		printf("%d ", list->val);
		list = list->next;
	}
	puts("");
}


ListNode* LocateElem(ListNode* list,ListValType x){
	assert(list);
	while (list){
		if (list->val == x){
			return list;
		}
		list = list->next;
	}
	return NULL;
}

void ListPushFront(ListNode** list, ListValType x){

	
	ListNode* newNode =  ListBuyNode(x);
	if (*list){
		newNode->next = (*list);
	}
	*list = newNode;
}

void ListPushBack(ListNode** list, ListValType x){
	
	ListNode* newNode = ListBuyNode(x);
	ListNode* head = *list;
	while (head->next){
		head = head->next;
	}
	if (!head->next){
		head->next = newNode;
	}

}

void ClearList(ListNode** list){
	assert(*list);
	
	ListNode* head = *list;
	while (head){
		ListNode* nextNode = head->next;
		free(head);
		head = nextNode;
	}
	*list = NULL;
}

void DistoryList(ListNode** list){
	ClearList(list);
	free(*list);
	list = NULL;
}

void ListDelNode(ListNode** list, ListValType x){
	assert(*list);
	ListNode* head = *list;
	if ((*list)->val == x){
		*list = head->next;
	}
	while (head->next){

		ListNode* next = head->next;
		if (next->val == x){
			head->next = next->next;
			free(next);
			break;
		}

		head = next;
	}

}

int ListLength(ListNode* list){
	assert(list);
	int len = 0;
	while (list){

		len++;

		list = list->next;
	}
	return len;
}
int EmptyList(ListNode* list){
	assert(list);
	return ListLength(list);
	
}

void ListInsertNode(ListNode** list, ListValType nodeVal, ListValType x){

	assert(*list);

	ListNode* head = *list;
	if ((*list)->val == nodeVal){
		ListPushFront(list,x);
		return;
	}
	ListNode* newNode = ListBuyNode(x);
	while (head->next){

		ListNode* next = head->next;
		if (next->val == nodeVal){
			
			newNode->next = next;
			head->next = newNode;

			break;
		}

		head = next;
	}

}

void ListInsertNode1(ListNode** list, ListNode* node1, ListNode* node2){

	assert(*list);

	ListNode* head = *list;
	if ((*list)->val == node1->next){
		ListPushFront(list, node2->next);
		return;
	}
	ListNode* newNode = ListBuyNode(node2->next);
	while (head->next){

		ListNode* next = head->next;
		if (next->val == node1->val){

			newNode->next = next;
			head->next = newNode;

			break;
		}

		head = next;
	}

}