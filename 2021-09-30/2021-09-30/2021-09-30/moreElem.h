#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include"LinkedList.h"

typedef struct PNode{

	float coef;
	int expn;
	int length;
	struct PNode* next;

}PNode,*Polynomial;

Status InitPoly(Polynomial* ls);
PNode* BuyNode(float coef,int expn);

PNode* AddPoly(Polynomial a, Polynomial b);

void PrintfPNOde(Polynomial ls);