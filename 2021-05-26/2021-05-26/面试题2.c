//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
////删除有序数组中的重复项
//int removeDuplicates(int* nums, int numsSize){
//	if ((numsSize>0) && (numsSize == 0 || numsSize == 1)){
//		return    numsSize;
//	}
//
//	if (numsSize>0){
//		int realArrIndex = 0;
//		int i = 0;
//		for (; i < numsSize; i++){
//			if (nums[realArrIndex] != nums[i]){
//				nums[++realArrIndex] = nums[i];
//			}
//		}
//		return realArrIndex + 1;
//	}
//	return 0;
//	
//}
//
//void test1(){
//	int nums[] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	removeDuplicates(nums,sz);
//}
//
//
//int main(){
//	test1();
//	return 0;
//}