#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>


typedef int ListValType;

typedef struct ListNode{

	ListValType val;

	struct ListNode* next;
}ListNode;

ListNode* InitList(ListValType x);
ListNode* ListBuyNode(ListValType x);

void ListInsertNode(ListNode** list, ListValType nodeVal, ListValType x);

void PrintList(ListNode* list);
ListNode* LocateElem(ListNode* list, ListValType x);

void ListDelNode(ListNode** list, ListValType x);

void ListPushFront(ListNode** list, ListValType x);
void ListPushBack(ListNode** list, ListValType x);

void DistoryList(ListNode** list);
void ClearList(ListNode** list);

int ListLength(ListNode* list);
int EmptyList(ListNode* list);

void PrintListHead(ListNode* list);