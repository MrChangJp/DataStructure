//#define _CRT_SECURE_NO_WARNINGS 10
//
////Ðý×ªÊý×é
//void rotate(int* nums, int numsSize, int k){
//	//     if(numsSize <=1) return;
//	//     if(numsSize<k){
//	//         // if(k%2 != 0 ){
//	//         //     k = 1;
//	//         // }
//	//     }
//
//	//    if(k == 0||(k==2 && numsSize <=2)) return;
//
//	k = k%numsSize;
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