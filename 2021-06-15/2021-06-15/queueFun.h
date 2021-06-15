#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define QUE_VAL_TYPE int
#define QUE_MAX_SIZE 6


typedef struct QueueList{

	QUE_VAL_TYPE* base;
	int front;
	int rear;

}QueueList;

void InitQueList(QueueList* qList);
int QueLength(const QueueList* qList);
void QueListPush(QueueList* qList, QUE_VAL_TYPE elem);
void PrintQueList(const QueueList* qList);
void QueListPop(QueueList* qList);
QUE_VAL_TYPE GetFront(QueueList* qList);