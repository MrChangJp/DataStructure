#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include "SListFunc.h"
#define  MAXSIZE 100
#define sqStackType int 

typedef struct sqStack{
	sqStackType* base, *top;
	sqStackType stackSize;
}SqStack;

void test4();