//#define _CRT_SECURE_NO_WARNINGS 10
//
//#include<stdio.h>
//
//int FindNum(const int* arr,int sz){
//	int fun_x = 0;
//	int i = 0;
//	for (; i < sz; i++){
//		fun_x ^= arr[i];
//	}
//
//	return fun_x;
//}
//
////问题：找到数组中只出现一次的数。
//int main(){
//
//	int arr[] = { 4, 2, 4, 8, 7, 2,  8, 9, 7 };
//	//数字的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//
//	x = FindNum(arr,sz);
//
//	printf("只出现一次的数是：%d\n",x);
//	
//
//	return 0;
//}