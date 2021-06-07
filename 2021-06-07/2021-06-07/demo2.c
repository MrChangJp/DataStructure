#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

void* rrr(void* desc, void* src, void* desc1, void* src2){}


void* memcpyFunc(void* desc, void* src, int size){
	assert(desc);
	assert(src);
	char* descHead = desc;
	while (size--){
		
		
			*(char*)desc = *(char*)src;
		
		
		++(char*)desc;
		++(char*)src;
	}

	return descHead;
}

char* test14(void* dest, void* src, int size){

	assert(dest);
	assert(src);

	while (size--){
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++*(char*)src;
	}


}

void test3(){

	char arr1[] = {1,2,3,4,5};
	char arr2[] = { 11, 21, 31, 4, 5 };

	memcpyFunc(arr1+1, arr1, sizeof(int)* 2);
	perror("´íÎó");
	//memcpyFunc(arr1[2], arr1[0], sizeof(int)* 2);

}



int main(){
	test3();
	return 0;
}

