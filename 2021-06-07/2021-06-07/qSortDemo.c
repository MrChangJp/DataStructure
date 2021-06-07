#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
#include<assert.h>

void swapFunc(char* e1,char* e2,int weight){
	while (weight--){
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;

	}
}
void* qSortFunc(void* arr,int num,int weight,int (*func)(const void* e1,const void* e2)){
	char* data = (char*)arr;
	assert(arr);
	int i = 0, j = 0;
	for (; i < num; i++){
		for (; j < num - i - 1; j++){

			if (func((data + weight*j), (data + weight*(j + 1)))>0){
				swapFunc(data + weight*j, data + weight*(j + 1), weight);
			}

		}
	}


	return arr;
}

//int main(){
//
//	return 0;
//}