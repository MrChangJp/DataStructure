#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

#define LINKDATATYPE int
typedef struct LinkedList{
	struct LinkedList* top;
	LINKDATATYPE data;
}LinkedList;

void InitStack(LinkedList* lList);
void Push(LinkedList* lList, LINKDATATYPE elem);
void PrintStack(const LinkedList* lList);
LINKDATATYPE GetPop(const LinkedList* lList);
void Pop( LinkedList* lList);