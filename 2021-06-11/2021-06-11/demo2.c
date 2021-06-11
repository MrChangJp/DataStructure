#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include"chainStack.h"

void test2(){
	LinkedList linkedList;
	InitStack(&linkedList);
	
	Push(&linkedList, 22);
	Push(&linkedList, 33);
	Push(&linkedList, 44);
	Push(&linkedList, 55);
	PrintStack(&linkedList);
	printf("Get Pop :%d\n", GetPop(&linkedList));
	Pop(&linkedList);
	PrintStack(&linkedList);
	Pop(&linkedList);
	PrintStack(&linkedList);
	Pop(&linkedList);
	PrintStack(&linkedList);
	Pop(&linkedList);
	PrintStack(&linkedList);
	Pop(&linkedList);
	PrintStack(&linkedList);

}
int main(){
	test2();
	return 0;
}