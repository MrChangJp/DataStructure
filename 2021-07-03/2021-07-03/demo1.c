#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include"Squeue.h"
#include "LQueue.h"
#include "topic1.h"
#include "danceParnter.h"
test1(){
	ELEMTYPE el = 0;
	SQList ls;
	InitSQueue(&ls);
	AddQueue(&ls,1);
	AddQueue(&ls, 12);
	AddQueue(&ls, 13);
	AddQueue(&ls, 14);
	AddQueue(&ls, 15);
	AddQueue(&ls, 16);
	AddQueue(&ls, 17);
	AddQueue(&ls, 18);
	GetFront(&ls, &el);
	printf("Queue Front ��%d\n", el);
	printf("Queue Length ��%d\n", QueLength(&ls));
	RmQueue(&ls);
	RmQueue(&ls);
	RmQueue(&ls);
	GetFront(&ls, &el);
	printf("Queue Front ��%d\n", el);
	printf("Queue Length ��%d\n", QueLength(&ls));
	
	GetFront(&ls, &el);
	printf("Queue Front ��%d\n", el);

}
test2(){
	ELEMTYPE e = 0;
	LinkQueue lq;
	InitLQueue(&lq);
	EnLQueue(&lq,1);
	EnLQueue(&lq, 12);
	EnLQueue(&lq, 13);
	EnLQueue(&lq, 14);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	EnLQueue(&lq, 15);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	DeLQueue(&lq);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	DeLQueue(&lq);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	DeLQueue(&lq);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	GetLHead(&lq, &e);
	printf("Get Head��%d\n", e);
	
}

void conversion(int num){
	SList ls;
	InitListT(&ls);
	while (num){

		int modedNum = num % 8;
		ListPushT(&ls, modedNum);
		num = num / 8;



	}

	while (ls.top != ls.base){
		int n = 0;
		ListPppT(&ls);
		printf("%d", n);
	};
	puts("");






}
test3(){
	//���Ƶ�ת��
	/*SList ls;
	InitListT(&ls);
	ListPushT(&ls,1);
	ELEMTYPE e = 0;
	ListPppT(&ls,&e);*/


	conversion(1024);

}


Status Matching(){

	//���ŵ�ƥ��

	SList ls;
	InitListT(&ls);

	puts("����������");
	char c = '#';
	scanf("%c",&c);
	int b = 0;
	scanf("%c", &b);
	int flag = 1;
	while (c != '#'&&flag){

		switch (c){
		case '(' || '[' :
			ListPushT(&ls, c);
			break;
		case ')':
			if (ls.base != ls.top && ls.data[ls.top] == ')'){
				ListPppT(&ls);
				
			}
			else{
				flag = 0;
				
			}
			break;

		case ']':
			if (ls.base != ls.top && ls.data[ls.top] == ']'){
				ListPppTs(&ls);

			}
			else{
				flag = 0;

			}
			break;
		}


		puts("����������");
		scanf("%c", &c);
		getchar();
		
	}

	if (flag)return OK;
	else  return ERROR;


}

test4(){
	Matching();
}



test5(){

	FILE* file = fopen("test.txt","r");

	int a = getc(file);
	printf("%c", a);

}

void DanceParnter(Dancer d [],int num){

	DQue man;
	DQue woman;
	InitDQue(&man);
	InitDQue(&woman);
	int i = 0;
	for (; i < num; i++){
		if (d[i].sex == 'F'){
			AddDQue(&man, d[i]);
		}
		else if (d[i].sex == 'N'){
			AddDQue(&woman, d[i]);
		}
	}
	int conut = 1;
	while (!QueEmpty(&man) && !QueEmpty(&woman)){
		Dancer f;
		GetQHead(&man, &f);
		Dancer n;
		GetQHead(&woman, &n);
		printf("Team %d -->  Man Name:%s\tWoman Name:%s\n", conut++, f.name, n.name);
		DeDQue(&man);
		DeDQue(&woman);
		
	}

	while (!QueEmpty(&man)){
		Dancer n;
		GetQHead(&man, &n);
		printf("Odd Man Name:%s\n",  n.name);
		DeDQue(&man);
	}

	while (!QueEmpty(&woman)){
		Dancer n;
		GetQHead(&woman, &n);
		printf("Odd Woman Name:%s\n", n.name);
		DeDQue(&woman);
	}


/*
		AddDQue(D
		DeDQue(DQ
		GetQHead(*/
}

test6(){

	Dancer d [20] = { 
		{"С��", 'F'},
		{"С��1", 'N'},
		{"С��2", 'F'},
		{"С��3", 'F'},
		{"С��4", 'N'},
		{"С��5", 'F'},
		{"С��6", 'N'},
		{"С��7", 'N'},
		{"С��8", 'F'},
		{ "С��9", 'F' },
		{ "С��10", 'N' },
		{ "С��11", 'N' },
		{ "С��12", 'F' },
		{ "С��13", 'N' },
		{ "С��14", 'N' },
		{ "С��15", 'F' },
		{ "С��16", 'F' },
		{ "С��17", 'F' },
		{ "С��18", 'F' },
		{ "С��19", 'F' },

	};


	DanceParnter(d,20);
}

test7(){




}

//int main(){
//	test7();
//	return 0;
//}