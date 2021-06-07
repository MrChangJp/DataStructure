#pragma once
#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int LTDataType;
struct ListNode  {

	LTDataType val;
	struct ListNode* priv;
	struct ListNode* next;

};
//struct ListNode* InitList(LTDataType x);
struct ListNode* InitList();
void InsertNode(struct ListNode* list, LTDataType x);
struct ListNode* findNode(struct ListNode *list, LTDataType x);

void ListPrintf(struct ListNode *list);

void DelNode(struct ListNode* list,  LTDataType x);

void ClearList(struct ListNode* list);
void DestoryList(struct ListNode** list);
void ModifyNode(struct ListNode** list, struct ListNode node);

void ListPushFront(struct ListNode* list, LTDataType x);
void ListPushBack(struct ListNode* list, LTDataType x);

void ListPopFront(struct ListNode* list);
void ListPopBack(struct ListNode* list);

void NodeErase(struct ListNode* list);