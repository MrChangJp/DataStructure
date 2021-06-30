#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "moreElem.h"

PNode* BuyNode(float coef, int expn){

	PNode* node = (PNode*)malloc(sizeof(PNode));
	if (!node) perror("内存申请失败！");
	node->coef = coef;
	node->expn = expn;
	node->next = NULL;
	node->length = 0;

	return node;

}

Status InitPoly(Polynomial* ls){
	assert(ls);
	puts("请输入系数和指数，中间用逗号隔开！输入0,0退出！");

	PNode* head = BuyNode(0,0);
	PNode* curHead = head;
	PNode* curHeadPriv = head;
	while (1){

		float coef = 0;
		int expn = 0;
		scanf("%f,%d",&coef,&expn);
		if (coef == 0 &&expn == 0){
			puts("退出！");
			break;
		}

		PNode* node = BuyNode(coef, expn);

		curHead = head->next;
		curHeadPriv = head;
		while (curHead){

			if (curHead->expn > expn){
				
				
					node->next = curHeadPriv->next;
					curHeadPriv->next = node;
					++curHead->length;
				
				break;
			}
			else if (curHead->expn == expn){
				curHead->coef += coef;
				++curHead->length;
				break;
			}
			else{
				curHeadPriv = curHead;
				curHead = curHead->next;
			}

			/*if (curHead)
			curHeadPriv = curHead;*/
		}





		if (!curHead){
			curHeadPriv->next = node;
		}


		


	}

	*ls = head->next;
	return OK;

}

PNode* AddPoly(Polynomial a, Polynomial b){

	
	PNode* newNode = NULL;


	if (a->expn == b->expn){
		a->coef += b->coef;
		PNode* tmp = b->next;
		free(b);
		b = tmp;
		newNode = a;
		a = a->next;
	}
	else if (a->expn < b->expn){
		newNode = a;
		a = a->next;
	}
	else{
		newNode = b;
		b = b->next;
	}

	PNode* curNode = newNode;

	while (a&&b){

		if (a->expn == b->expn){
			a->coef += b->coef;
			PNode* tmp = b->next;
			free(b);
			b = tmp;
			curNode->next = a;
			a = a->next;
		}
		else if (a->expn < b->expn){
			curNode->next = a;
			a = a->next;
		}
		else{
			curNode->next = b;
			b = b->next;
		}

		curNode = curNode->next;
	}

	curNode->next = a ? a : b;

	return newNode;





}

void PrintfPNOde(Polynomial *ls){
	
	PNode* n = *ls;
	while (n){
		printf("%s%.1fX~%d", (n->coef) >= 0 ?  " + " : " ", n->coef, n->expn);
		n = n->next;
	}
	puts("");
}