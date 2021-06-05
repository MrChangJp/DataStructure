//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//
////合并两个有序数组
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//
//	if (n<1){
//		return;
//	}
//	if (m == 0 && n == 1){
//		nums1[0] = nums2[0];
//	}
//
//	if (m + n >= 2){
//
//		int nums1NewEndIndex = m + n - 1;
//		int nums1EndIndex = m - 1;
//		int nums2EndIndex = n - 1;
//
//		int i = 0;
//		while ((nums1NewEndIndex >= 0)){
//
//			if (nums1EndIndex<0){
//				nums1[nums1NewEndIndex--] = nums2[nums2EndIndex--];
//				continue;
//			}
//
//			if (nums2[nums2EndIndex]>nums1[nums1EndIndex]){
//				if (!nums2EndIndex){
//					nums1[nums1NewEndIndex] = nums2[nums2EndIndex];
//					break;
//				}
//				nums1[nums1NewEndIndex--] = nums2[nums2EndIndex--];
//
//			}
//			else {
//				nums1[nums1NewEndIndex--] = nums1[nums1EndIndex--];
//			}
//
//		}
//
//
//	}
//}
//int main(){
//
//	return 0;
//}
