//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//#define MAXSIZE 100;
//#define SVALTYPE Money
//
#define  MAXSIZE 100
typedef struct ArrayList{
	int* top, *base;
	int size;

}ArrayList;
//typedef struct{
//	int val;
//}Money;
//
//typedef struct{
//	Money* top,
//		 * base;
//	int size;
//}SqStack;
//
//void InitStack(SqStack* sList);
//void Push(SqStack* sList, SVALTYPE e1);
//void PrintStack(SqStack* sList);
//void EmpytStack(SqStack* sList);
//int StackLength(SqStack* sList);
//SVALTYPE GetTop(SqStack* sList);
//SVALTYPE* Pop(SqStack* sList);
//void ClearStack(SqStack* sList);
//
//void DestoryStack(SqStack* sList);