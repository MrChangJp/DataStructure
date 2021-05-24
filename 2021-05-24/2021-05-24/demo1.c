//#define _CRT_SECURE_NO_WARNINGS 10
//
//#pragma once
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
////单链表数据定义
//typedef struct LElem{
//	int e1;
//	int mi;
//}LElem;
//
//////单链表结点定义
////typedef struct LNode{
////	LElem date;
////	struct LNode * next;
////}LNode, *DouLinkList;
//
////双向链表结点定义
//typedef struct LNode{
//
//	LElem date;
//	//struct LNode* pri;
//	struct LNode*next;
//}LNode, *DouLinkList;
//
//
//
////指向头结点的循环链表
//int initDouLinkList(DouLinkList* initList){
//
//	*initList = (DouLinkList)malloc(sizeof(LNode));
//
//	(*initList)->next = NULL;
////	(*initList)->pri = *initList;
//	if (*initList){
//		return 1;
//	}
//	return 0;
//}
//
////添加元素到循环链表
//int addDouLinkList(DouLinkList* initList, int num){
//
//	LElem e = { 0 };
//
//	LNode* head = *initList;
//	LNode* move = head;
//	for (int i = num; i < 6; i += 2){
//		e.e1 = i;
//		LNode* nextNode = (LNode*)malloc(sizeof(LNode));
//		nextNode->date = e;
//		nextNode->next = NULL;
//		//nextNode->pri = move;
//		//head->pri = nextNode;
//		move->next = nextNode;
//		move = nextNode;
//	}
//	return 1;
//}
////printf Node
//void printfNode(DouLinkList pList){
//
//	LNode* nextNode = pList->next;
//
//	while ( nextNode){
//
//		printf("NodeData:%d\n", nextNode->date.e1);
//		nextNode = nextNode->next;
//	}
//
//
//
//}
////检测链表长度
//int LNodeLen(DouLinkList list_l){
//	int count = 0;
//	LNode* nextNode = list_l->next;
//	while (nextNode ){
//
//		count++;
//		nextNode = nextNode->next;
//	}
//
//	return count;
//}
////合并L1,L2
//DouLinkList merge(DouLinkList* list1, DouLinkList* list2){
//	
//	LNode* l1 = NULL;
//	LNode* l2 = NULL;
//	LNode* hb = NULL;
//	if (LNodeLen(*list1) > LNodeLen(*list2)){
//		hb = *list2;
//		 l1 = (*list2)->next;
//		 l2 = (*list1);
//	}
//	else{
//		hb = *list1;
//		 l1 = (*list1)->next;
//		 l2 = (*list2);
//	}
//
//	while (l2){
//		
//		if (!(l2->next)){
//			free(12);
//			break;
//		}
//
//		if (l1->date.e1 > l2->next->date.e1){
//			//用于存储l2即将合并到l1的Node
//			LNode* tmp2 = l2->next;
//			l2->next = l2->next->next;
//
//			LNode* tmp1 = hb->next;
//			hb->next = tmp2;
//			tmp2->next = tmp1;
//
//		}
//		else{
//			while(l1){
//
//			
//				
//
//				if ((l1->next)&&(l1->next->date.e1 > l2->next->date.e1)){
//					//用于存储l2即将合并到l1的Node
//					LNode* tmp2 = l2->next;
//					l2->next = l2->next->next;
//
//					LNode* l1_Next = l1->next;
//					l1->next = tmp2;
//					tmp2->next = l1_Next;
//					break;
//				}
//				else{
//					if (!(l1->next)){
//						l1->next = l2->next;
//						free(l2);
//						l2 = NULL;
//						break;
//					}
//					
//					l1 = l1->next;
//				}
//			}
//		}
//	
//
//
//
//	}
//	list2 = NULL;
//	return hb;
//
//
//
//
//
//
//
//
//
//}
//
//int main(){
//
//	DouLinkList douLinkList1 = NULL;
//	DouLinkList douLinkList2 = NULL;
//	//指向头结点的循环链表
//	puts("--------initDouLinkList--------");
//	int num1 = initDouLinkList(&douLinkList1);
//	int num2 = initDouLinkList(&douLinkList2);
//	if (num1 += num2 == 2){
//		puts("初始化成功！");
//		//printfNode(douLinkList);
//	}
//	else{
//		puts("初始化失败！");
//	}
//	puts("--------initDouLinkListEnd--------\n");
//	num1 = num2 = 0;
//	puts("--------addDouLinkList--------");
//	num1 = addDouLinkList(&douLinkList1, 0);
//	num2 = addDouLinkList(&douLinkList2, 1);
//	if (num1 + num2 == 2){
//		puts("添加元素化成功！");
//		puts("--------douLinkList1--------");
//		printfNode(douLinkList1);
//		puts("--------douLinkList2--------");
//		printfNode(douLinkList2);
//	}
//	else{
//		puts("添加元素失败！");
//	}
//	puts("--------addDouLinkListEnd--------\n");
//
//	puts("--------merge--------");
//	DouLinkList mergeList = merge(&douLinkList1, &douLinkList2);
//	
//	if (mergeList){
//		puts("合并元素化成功！");
//		puts("--------合并后集合：--------");
//		printfNode(mergeList);
//		
//	}
//	else{
//		puts("合并元素失败！");
//	}
//	puts("--------mergeEnd--------\n");
//	
//
//
//	return 0;
//}