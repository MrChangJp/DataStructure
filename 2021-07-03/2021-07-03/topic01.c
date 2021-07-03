#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define ELEMTYPE int
#define MAXSIZE 10
typedef struct{

	int top[2], bot[2];
	ELEMTYPE* V;
	int m;


}DblStack;

void InitStack(DblStack* ds){

	ds->V = (ELEMTYPE*)malloc(sizeof(ELEMTYPE));
	if (!ds->V) return;
	ds->top[0] = -1;
	ds->top[1] = MAXSIZE;

}

int Empty(DblStack* ds,int i){

	if (!ds || ds->top[i] == -1 || ds->top[i] == MAXSIZE){
		return 1;
	}
	return 0;
}

int FullArr(DblStack* ds){
	//if (ds->top[0] + 1 == ds->top[1] || ds->top[0] == ds->top[1]){
	if (ds->top[0] + 1 == ds->top[1] && ds->top[0] == ds->top[1]){
		return 1;
	}
	
	return 0;
	


}

int pushArr(DblStack* ds, int i,ELEMTYPE e){

	

	if (!FullArr(ds)){
		if (i == 0){

		ds->V[++ds->top[i]] = e;
		}
		else{
			ds->V[--ds->top[i]] = e;
		}
		return 1;
	}
	else{
		return 0;
		

	}
	

}

int PopArr(DblStack* ds, int i){

	if (ds->top[i] == -1 || ds->top[i] == MAXSIZE){
		return 0;
	}
	if (i == 0){
	--ds->top[i];

	}
	else{
		++ds->top[i];
	}
	return 1;

}

test9(){
	DblStack d;
	InitStack(&d);
	while (1){
		puts("请输入需要存入的栈（0为一栈，1为二栈）");
		int n = 0;
		scanf("%d", &n);
		getchar();
		int num = 0;
		if (n == 0 || n == 1){
			scanf("%d", &num);
			pushArr(&d, n, num);
			
		}
		
		else{
			puts("输入有误！请重新输入！");
		}
	}

}

int main(){

	test9();
	return 0;
}
