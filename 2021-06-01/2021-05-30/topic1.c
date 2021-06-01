#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>

//在原数组中删除元素val，要求时间复杂度为O(n),空间复杂度为O(1)
int test3(){
	int arr[] = {1,2,4,6,8,9,5,3};
	int trueIndex = 0;
	int findIndex = 0;
	int num = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);

	while (findIndex < sz){

		if (arr[findIndex] != num){
			arr[trueIndex] = arr[findIndex];
			trueIndex++;
		}




		findIndex++;
	}


}

//int main(){
//
//
//	test3();
//
//	return 0;
//}