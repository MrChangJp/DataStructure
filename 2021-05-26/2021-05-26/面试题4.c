//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//void reverse(int* nums, int startIndex, int endIndex);
//
//
//
//void rotate(int* nums, int numsSize, int k){
//	
//	//k如果比numSize小，两数求余则是k。
//	//k如果比numSize大，两数这是求余数。
//	k= k%numsSize;
//
//	reverse(nums, 0, numsSize);
//	reverse(nums, 0, k);
//	reverse(nums, k, numsSize);
//
//
//
//}
//
//void reverse(int* nums, int startIndex, int endIndex){
//	// if(endIndex-startIndex == 1)return ;
//	if ((startIndex < endIndex) && (endIndex>0)) {
//
//		int i = startIndex, j = endIndex - 1;
//		for (; i < j; i++, j--){
//			int tmp = nums[i];
//			nums[i] = nums[j];
//			nums[j] = tmp;
//		}
//	}
//
//}
////旋转数组
//int main(){
//
//	int num[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 3;
//	rotate(num,3,7);
//	return 0;
//}