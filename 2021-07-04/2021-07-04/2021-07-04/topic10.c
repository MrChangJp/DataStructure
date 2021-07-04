#include <stdio.h>
#include <stdlib.h>


typedef struct LinkedList{

	int data;
	struct QueLList* next;

}*LinkedList, LNode;

//置空队列、判断队列是否为空、入队和出队等算法
void InitLinkedList(LinkedList* ls);
int MAXList(LinkedList ls);
int ListLength(LinkedList* ls);
double ListFulkAvg(LinkedList ls);

void InitLinkedList(LinkedList* ls){

	*ls = (LinkedList)malloc(sizeof(LNode));
	(*ls)->next = NULL;

}

int MAXList(LinkedList ls){
	

	if (!ls->next) return ls->data;

	else{

		int max = MAXList(ls->next);
		return ls->data > max ? ls->data : max;

	}


}

int ListLength(LinkedList ls){

	if (!ls->next) return 1;
	else{
		return 1 + ListLength(ls->next);
	}

}

double ListFulkAvg(LinkedList ls,double sum ,int n ){

	if (!ls->next) {

		sum += ls->data;

		return ListFulkAvg(ls,sum,n+1);
	}
	else{
		double avg = (sum + ls->data) / (n+1);
		return avg;
	}
}


test11(){



}

int main(){
	test11();
	return  0;
}