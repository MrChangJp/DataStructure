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
////���⣺�ҵ�������ֻ����һ�ε�����
//int main(){
//
//	int arr[] = { 4, 2, 4, 8, 7, 2,  8, 9, 7 };
//	//���ֵ�Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int x = 0;
//
//	x = FindNum(arr,sz);
//
//	printf("ֻ����һ�ε����ǣ�%d\n",x);
//	
//
//	return 0;
//}