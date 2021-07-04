#include "topic6.h"

void InitLList(QueLList* ls){

	if (!*ls){
		return;
	}

	QueLList l = BuyNode();
	if (!l){
		return;
	}
	l->base = l;
	l->data = -1;
	*ls = l;

}

QueLList BuyNode(){
	return  (QueLList)malloc(sizeof(Node));
}


void AddQue(QueLList* ls, ELEMTYPE e){

	if (!ls || (*ls)->base == NULL){
		return;
	}
	Node* node = BuyNode();
	//Node* bot = (*ls)->base;
	node->data = e;
	node->base = (*ls)->base	;
	(*ls)->base = node;
	(*ls) = (*ls)->base;


}
void DelQue(QueLList* ls){

	if (!ls || (*ls)->base == NULL){
		return ;
	}
	Node* headNode = (*ls)->base;
	if (headNode == (*ls)){
		return ;
	}

	Node* tmp = headNode->base;
	headNode->base = tmp->base;
	free(tmp);
	;
}
int EmptyQue(QueLList* ls){
	if (!*ls || (*ls)->base == (*ls)->base->base){
		return 1;
	}
	return 0;
}
void ClearQue(QueLList* ls){

	if (EmptyQue(ls)){
		return;
	}
	Node* head = (*ls)->base;
	while (head->base != head){
		Node* tmp = head->base;
		head->base = tmp->base;
		head = tmp->base;
		free(tmp);
	}

}
