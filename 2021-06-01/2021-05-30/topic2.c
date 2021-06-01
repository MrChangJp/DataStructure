#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
////删除有序数组中的重复项
void test4(){

	int arr[] = {1,1,2,2,3,3,4,4,5,5,5};
	int trueIndex = 0;
	int moveIndex = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);

	while (moveIndex < sz){

		if (arr[trueIndex] != arr[moveIndex]){
			arr[++trueIndex] = arr[moveIndex];
		}

		moveIndex++;

	}
	trueIndex++;
	for (int i = 0; i < trueIndex; i++){
		printf("%d\n", arr[i]);
	}
	
}
//
//int main(){
//	test4();
//	return 0;
//}