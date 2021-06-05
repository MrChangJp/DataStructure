//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
////合并两个数组
//void merge(int* A, int ASize, int m, int* B, int BSize, int n){
//	int aEnd = m + n - 1;
//	int aTrueEnd = m - 1;
//	int bEnd = n - 1;
//
//	while (bEnd >= 0 && aEnd >= 0){
//		if (!(aTrueEnd >= 0)){
//			A[aEnd--] = B[bEnd--];
//
//		}
//		if (aTrueEnd<0) continue;
//		if ((A[aTrueEnd] < B[bEnd])){
//			A[aEnd--] = B[bEnd--];
//		}
//		else{
//			A[aEnd--] = A[aTrueEnd--];
//		}
//	}
//}
//
////int main(){
////
////	return 0;
////}