#define _CRT_SECURE_NO_WARNINGS 10
#include "demo3.h"

void InitStack(SqStack* s){
	//SqStack* s = 
	s->base = (int*)malloc(sizeof(int)*MAXSIZE);
	if (s->base){
		s->top = s->base;
		s->stackSize = MAXSIZE;
	}

}

void DestoryStack(SqStack* s){
	assert(s);
	if (s->top){
		free(s->top);
		s->base = s->top = NULL;
	}
}

void StackEmpty(SqStack* s){
	assert(s);
	if (s->stackSize){
		printf("ջ��Ϊ��\n");
	}
	else{
		printf("ջΪ��\n");
	}
}

int StackLength(SqStack* s){
	assert(s);
	return s->base - s->top;
}

void Push(SqStack* s, sqStackType e){
	assert(s);
	*s->base++ = e;

	
	
}

sqStackType GetTop( SqStack* s){
	assert(s);
	if (!StackLength(s)){
		perror("ջ����ֵ��");
		return 0;
	}
	return *(s->base-1);
	
}

void ClearStack( SqStack* s){
	assert(s);
	if (s->top){
		s->base = s->top;
	}
	*(s->top) = 0;
}
void Pop(SqStack* s){
	assert(s);
	if (s->base != s->top){
		s->base--;
	}
	else{
		perror("ջ����ֵ!");
	}
}

void test4(){
	SqStack sqList;
	InitStack(&sqList);
	StackEmpty(&sqList);
	//DestoryStack(&sqList);
	Push(&sqList,33);
	Push(&sqList, 22);
	Push(&sqList, 11);
	printf("SqStack length��%d\n",StackLength(&sqList));
	printf("SqStack Top��%d\n", GetTop(&sqList));
	ClearStack(&sqList);
	printf("SqStack length��%d\n", StackLength(&sqList));
	Pop(&sqList);
}

int main(){
	test4();
}