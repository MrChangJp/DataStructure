#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAXSIZE 100
#define VALTYPE int

typedef struct {
	int* top, *base;
	int listSize;
	VALTYPE data;
}SqStack;

int* BuyStackNode();

void InitStack(SqStack* stackList);


void Push(SqStack* stackList, VALTYPE x);

void PrintStack(SqStack* stackList);

int StackLength(SqStack* stackList);

void GetTop(SqStack* stackList);
void Pop(SqStack* stackList);

void EmptyStack(SqStack* stackList);
void ClearStack(SqStack* stackList);
void DestoryStack(SqStack* stackList);