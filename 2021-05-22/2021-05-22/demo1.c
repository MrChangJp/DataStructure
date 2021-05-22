#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<stdlib.h>
typedef struct ElemType {
	char name[20];
	int age;
	int phoneNum;
}ElemType;

typedef struct LNode{
	ElemType data;

	struct LNode *next;

}LNode,*LinkList;

//链表初始化
int initList_L(LinkList* head_i){

	*head_i = (LinkList)malloc(sizeof(LNode));
	
	(*head_i)->next = NULL;
	
	if ((*head_i) != NULL){
		return 1;
		
	}

	return 0;
}
//添加结点
int addNode(LinkList* list){
	
	LNode* headNode = *list;
	
	if (headNode->next == NULL){
		ElemType e = { "xiaoming", 12, 3333 };
		LNode* tmp = (LNode*)malloc(sizeof(LNode));
		tmp->next = NULL;
		tmp->data = e;
		headNode->next = tmp;
		return 1;
	}
	

	while (headNode){

		if (!headNode->next){
			ElemType e = { "xiaoming", 12, 3333 };
			LNode* tmp = (LNode*)malloc(sizeof(LNode));
			tmp->next = NULL;
			tmp->data = e;
			headNode->next = tmp;
			return 1;
		}

		headNode = headNode->next;
	}

		

	return 0;
}

//打印链表内的结点
void printfNode(LinkList list){
	LNode* node = list->next;
	
	while (node){

		ElemType elem = node->data;
		printf("%s\n%d\n%d\n",elem.name,elem.age,elem.phoneNum);

		node = node->next;
	}

}

//清空结点
int clearList(LinkList * list_c){

	LNode* head_c = *list_c;

	//LNode* nextNode = head_c->next;
	LNode** nextNode = &(*list_c)->next;
	while (*nextNode){
		LNode* temp = (*nextNode)->next;
		free(*nextNode);
		*nextNode = NULL;
		nextNode = &temp;
		
	}

	/*while ((*list_c)->next){
		LNode* temp = (*list_c)->next->next;
		free((*list_c)->next);
		(*list_c)->next = NULL;
		(*list_c)->next = temp;

	}*/


	return 1;
}
//LinkList*  initList_Ls(LinkList* list){
//	
//	LNode* newNode = (LNode*)malloc(sizeof(LNode));
//	return list;
//}
int main(){


	LinkList head = NULL;
	int ms = initList_L(&head);
	if (!ms){
		//puts("初始化失败");
		perror("初始化失败");
		return 0;
	}
	else{
		puts("初始化成功！");
	}
	addNode(&head);
	printfNode(head);
	clearList(&head);
	printfNode(head);
	return 0;
}
