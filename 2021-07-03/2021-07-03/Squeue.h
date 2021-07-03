#pragma once

#include<stdio.h>
#include<stdlib.h>

#define MAXSIZE 15
#define ELEMTYPE int
typedef struct SQList{

	ELEMTYPE* data;
	int front;
	int rear;

}SQList;

typedef enum Status{
	FALSE = 0,
	ERROR = -1,
	OK = 1
}Status;

Status InitSQueue(SQList* ls);
Status AddQueue(SQList* ls, ELEMTYPE e);
Status RmQueue(SQList* ls);
int QueLength(SQList* ls);

Status GetFront(SQList* ls, ELEMTYPE* e);