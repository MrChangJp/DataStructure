#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>

////合并两个有序数组
void test5(){

	int arr1[] = { 2, 3, 6, 7, 9 ,0,0,0,0,0};
	int arr2[] = { 1, 4, 5, 8, 10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	int arr1EndIndex = sz - 1;
	int arr1Index = 5 - 1;
	int arr2EndIndex = (sizeof(arr2) / sizeof(arr2[0]))-1;

	while (arr1EndIndex >= 0){

		if (arr1Index < 0){
			arr1[arr1EndIndex--] = arr2[arr2EndIndex--];
			
			continue;
		}
		if (arr2EndIndex < 0){
			break;
		}

		if (arr1[arr1Index] < arr2[arr2EndIndex]){
			arr1[arr1EndIndex--] = arr2[arr2EndIndex--];
		}else{
			arr1[arr1EndIndex--] = arr1[arr1Index--];

		}
		

	}




}

//int main(){
//	test5();
//	return 0;
//}