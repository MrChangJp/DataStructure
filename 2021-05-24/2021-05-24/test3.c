
#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
#include<assert.h>
int removeDuplicates(int* nums, int numsSize){

	int pIndex = 0;
	int i = 0;
	for (; i<numsSize; i++){
		if (nums[pIndex] != nums[i]){
			nums[++pIndex] = nums[i];
		}
	}
	return ++pIndex;
}
/*
给定两个排序后的数组 A 和 B，其中 A 的末端有足够的缓冲空间容纳 B。 编写一个方法，将 B 合并入 A 并排序。

初始化 A 和 B 的元素数量分别为 m 和 n。
*/
void merge(int* A, int ASize, int m, int* B, int BSize, int n){
	assert(A);
	assert(B);

	int aEnd = m + n-1;
	int aTrueEnd = m - 1;
	int bEnd = n - 1;

	while (bEnd >= 0 && aEnd>=0){
		if (!(aTrueEnd >= 0) ){
			A[aEnd--] = B[bEnd--];
			
		}
		if (A[aTrueEnd] < B[bEnd]){
			A[aEnd--] = B[bEnd--];
		}
		else{
			A[aEnd--] = A[aTrueEnd--];
		}






		//if (A[aTrueEnd] < B[bEnd]){
		//	A[aEnd--] = B[bEnd--];
		//}
		//else{
		//	A[aEnd--] = A[aTrueEnd];
		//	A[aTrueEnd] = B[bEnd--];
		//	if (A[aTrueEnd]<A[aTrueEnd - 1]){
		//		int tmp = A[aTrueEnd];
		//		A[aTrueEnd] = A[aTrueEnd - 1];
		//		A[aTrueEnd - 1] = tmp;
		//	}
		//}



	}

	int a1 = n - 1;

	
}
void test1(){
	int arr[] = { 1, 1, 2 };
	printf("%d\n", removeDuplicates(arr, 3));
}
void test2(){
	int A[] = { 4 ,6, 8, 0, 0, 0 }; int  m = 3, n = 3;
		int B[] = { 1, 2, 3 };
		merge(A,3,m,B,3,n);
}
void reverse(int* nums, int startIndex, int endIndex){
	if (startIndex < endIndex) {
		int times = (endIndex - startIndex) / 2;
		int i = startIndex, j = endIndex-1;
		for (; i < j; i++, j--){
			int tmp = nums[i];
			nums[i] = nums[j];
			nums[j] = tmp;
		}	
	}

}

void rotate(int* nums, int numsSize, int k){


	reverse(nums, 0, numsSize);
	reverse(nums, 0, k);
	reverse(nums, k , numsSize);



}
void test3(){
	int nums[] = { 1, 2, 3, 4, 5, 6, 7 }, k = 3;
		rotate(nums,7,k);
}

int main(){
	test3();
	return 0;
}