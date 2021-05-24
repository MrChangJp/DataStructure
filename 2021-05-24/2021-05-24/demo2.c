//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
////返回值为右移后遇到1的位置。
//size_t deffBitIndex(int num){
//	int i = 1;
//	int index = 0;
//	for (; i <= 32; i++){
//		
//		if (num & 1){
//			return index;
//		}
//		index++;
//		num >>= 1;
//		
//	}
//	return index;
//}
//
//int FindIndex(int num,int time){
//	int bl = 0;
//	for (int i = 1; i <= time; i++){
//		num >>= 1;
//
//	}
//	return num & 1;
//}
//
////数组中只出现两次的具体解决函数
////list: 数据数组。
////num : 数组中数据的个数。
//void FindTwoNum(const int* list, int num, int* x, int* y){
//	//数组元素依次异或得出的结果（结果为两个只出现一次的数的异或结果）
//	int xorResult = 0;
//	for (int i = 0; i < num; i++){
//		xorResult ^= list[i];
//	}
//	//该方法主要功能是计算xorResult的差异位。
//	size_t defBitIndexNum = deffBitIndex(xorResult);
//
//	for (int j = 0; j < num; j++){
//		//依据差异位将数组中的元素根据差异位与数据元素二进制表示下该位“按位与”的结果是否真进行分组，
//		//并直接根据组进行异或
//		if (FindIndex(list[j], defBitIndexNum)){
//			*x ^= list[j];
//			
//		}
//		else{
//			*y ^= list[j];
//		}
//	}
//}
//
////题目：找出数组中只出现两次的数
//int main(){
//	//只出现一次的数为：3和9
//	int arr[] = { 9, 4, 2, 4, 8, 7, 2, 8, 7, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0, y = 0;
//	//因为C语言无法返回两个变量，所以直接传址过去。
//	FindTwoNum(arr, sz, &x, &y);
//	printf("数字一：%d\n数字二：%d\n",x,y);
//	return 0;
//}