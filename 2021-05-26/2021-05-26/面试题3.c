#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
//合并两个有序数组
void merge(int* nums1, int m, int* nums2,  int n){

	if (n<1){
		return;
	}
	if (m == 0 && n == 1){
		nums1[0] = nums2[0];
	}

	if (m + n >= 2){

		int nums1NewEndIndex = m + n - 1;
		int nums1EndIndex = m - 1;
		int nums2EndIndex = n - 1;

		int i = 0;
		while ((nums1NewEndIndex >= 0)){

			if (nums1EndIndex<0){
				nums1[nums1NewEndIndex--] = nums2[nums2EndIndex--];
				continue;
			}

			if (nums2[nums2EndIndex]>nums1[nums1EndIndex]){
				if (!nums2EndIndex){
					nums1[nums1NewEndIndex] = nums2[nums2EndIndex];
					break;
				}
				nums1[nums1NewEndIndex--] = nums2[nums2EndIndex--];

			}
			else {
				nums1[nums1NewEndIndex--] = nums1[nums1EndIndex--];
			}

		}


	}
}



//合并两个有序数组
/*
	思路：
	倒叙排放，将最大的数据放到最后一位，然后一次类推，

*/
int main(){
	int nums1[] = { 0,  1, 1, 2,  3, 4 };
	int nums2[] = { 0,  1, 2, 2, 3, 3, 4 };
	//	int sz = sizeof(nums) / sizeof(nums[0]);
	merge(nums1,6,nums2,7);
	return 0;
}