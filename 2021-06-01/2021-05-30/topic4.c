#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
void swap(int* arr1, int startIndex, int endIndex);
//旋转数组
void test6(){
	int num[] = { 1, 2, 3, 4, 5, 6, 7 };
	int k = 3;
	int sz = sizeof(num) / sizeof(num[0]);
	k = k % sz;

	swap(num,0,sz);
	swap(num, 0, k);
	swap(num, k, sz);

}

void swap(int* arr1,int startIndex,int endIndex){
	endIndex--;
	int temp = 0;
	while (startIndex < endIndex){
		temp = arr1[startIndex];
		arr1[startIndex] = arr1[endIndex];
		arr1[endIndex] = temp;
		startIndex++; endIndex--;
	}

}
//旋转数组
//int main(){
//	test6();
//	return 0;
//}