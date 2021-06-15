#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include "queueFun.h"
#define GetIndex(x,y) ((x+y) % QUE_MAX_SIZE)

void InitQueList(QueueList* qList){
	qList->base = (QUE_VAL_TYPE*)malloc(sizeof(QUE_VAL_TYPE)*QUE_MAX_SIZE);
	if (qList->base){
		qList->front = qList->rear = 0;
	}
	else{
		perror("���г�ʼ��ʧ�ܣ�");
	}

}

int QueLength(const QueueList* qList){

	int front = qList->front;
	int rear = qList->rear;

	return (rear - front + QUE_MAX_SIZE) % QUE_MAX_SIZE;

}

void QueListPush(QueueList* qList, QUE_VAL_TYPE elem){

	if ((qList->rear + 1) % QUE_MAX_SIZE == qList->front){
		puts("���������������ͷţ�");
		return;
	}

	qList->base[GetIndex((qList->rear++),0)] = elem;

}

void PrintQueList(const QueueList* qList){

	int frontIndex = qList->front;
	int length = QueLength(qList);
	printf("����>>> ");
	int i = 0;
	while (i<length){
		printf("%d ", qList->base[GetIndex(qList->front , i++)]);
	}
	puts(">>>��β");

}

void QueListPop(QueueList* qList){
	if (qList->front == qList->rear){
		puts("��������Ԫ�ؿ�ɾ��");
		return;
	}
	qList->front = (qList->front + 1) % QUE_MAX_SIZE;

}

QUE_VAL_TYPE GetFront(QueueList* qList){

	if (qList->front == qList->rear){

		return -1;
	}
	else{
		return qList->base[qList->front];
	}

}