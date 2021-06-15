#define _CRT_SECURE_NO_WARNINGS 10
#include "stackFunc.h"
#include"linkedList.h"
#include"queueFun.h"
#include "QueLinked.h"

void test1(){

	SqStack sList;


	InitStack(&sList);
	Push(&sList,1);
	Push(&sList, 2);
	Push(&sList, 3);
	Push(&sList, 4);
	Push(&sList, 5);
	Push(&sList, 6);
	PrintStack(&sList);
	GetTop(&sList);
	Pop(&sList);
	PrintStack(&sList);
	printf("栈内元素个数：%d\n", StackLength(&sList));
	EmptyStack(&sList);
	ClearStack(&sList);
	EmptyStack(&sList);
	DestoryStack(&sList);
	EmptyStack(&sList);
}

void test2(){
	LinkedList* list;
	InitLinkList(&list);
	LinkedPush(&list,1);
	LinkedPush(&list, 2);
	LinkedPush(&list, 3);
	LinkedPush(&list, 4);
	PrintfLinked(&list);
	PopLinked(&list);
	PopLinked(&list);
	PopLinked(&list);
	PopLinked(&list);
	PopLinked(&list);
	PrintfLinked(&list);
}

void test3(){

	QueueList ql;
	InitQueList(&ql);
	QueListPush(&ql, 1);
	QueListPush(&ql, 2);
	QueListPush(&ql, 3);
	QueListPush(&ql, 4);
	QueListPush(&ql, 5);

	printf("Queue Length：%d\n", QueLength(&ql));
	PrintQueList(&ql);
	QueListPop(&ql);
	QueListPop(&ql);
	QueListPop(&ql);
	//QueListPop(&ql);
	//QueListPop(&ql);
	//QueListPop(&ql);
	//QueListPop(&ql);
	//QueListPop(&ql);
	PrintQueList(&ql);
	/*QueListPush(&ql, 6);
	PrintQueList(&ql);
	QueListPush(&ql, 7);
	PrintQueList(&ql);*/

	printf("Queue Front：%d\n", GetFront(&ql));

}

void test4(){
	QueLink ql;
	InitQue(&ql);
	LinkQuePush(&ql,1);
	LinkQuePush(&ql, 2);
	QueLinkPop(&ql);
	PrintQueLinked(&ql);
	LinkQuePush(&ql, 3);
	printf("Get Front:%d\n", GetQueFront(&ql));
	LinkQuePush(&ql, 4);
	PrintQueLinked(&ql);
	DestoryLinkQue(&ql);
	PrintQueLinked(&ql);


}

main(){
	test4();
}