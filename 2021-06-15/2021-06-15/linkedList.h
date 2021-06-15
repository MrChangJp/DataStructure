#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#define LINKED_VAL_TYPE int


//typedef struct Node{
//	int a;
//}Node;

typedef struct LinkedList{
	struct LinkedList* next;
	int data;
}LinkedList;

void InitLinkList(LinkedList** list);
void LinkedPush(LinkedList** list, LINKED_VAL_TYPE elem);
LinkedList* BuyLinkedNode();

void PrintfLinked(LinkedList** list);

void PopLinked(LinkedList** list);