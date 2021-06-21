//#define _CRT_SECURE_NO_WARNINGS 10
//#include<stdio.h>
//#include<stdlib.h>
//
//int GetLength1(char* arr){
//
//	int count = 0;
//
//	while (*arr){
//		count++;
//		arr++;
//	}
//
//	return count;
//
//}
//
//int* GetNextArr1(char* arr){
//
//	int len = GetLength(arr);
//	int* next = (int*)malloc(sizeof(int)*len);
//	int i = 0;
//	int j = -1;
//	next[0] = -1;
//
//	while (i < len){
//
//		if (j == -1 ||arr[i] == arr[j]){
//			i++; j++;
//
//
//			/*if (arr[i] != arr[j]){
//				next[i] = j;
//			}
//			else{
//				next[i] = next[j];
//			}*/
//
//			next[i] = j;
//			
//		}
//		else{
//			
//			
//			j = next[j];
//			
//		}
//
//	}
//	return next;
//
//}
//
//int* GetNextValArr1(char* arr){
//	int len = GetLength(arr);
//	int* next = (int*)malloc(sizeof(int)*len);
//	int i = 0;
//	int j = -1;
//	next[0] = -1;
//
//	while (i < len){
//
//		if (j == -1 || arr[i] == arr[j]){
//			i++; j++;
//
//
//			if (arr[i] != arr[j]){
//				next[i] = j;
//			}
//			else{
//				next[i] = next[j];
//			}
//
//			/*next[i] = j;*/
//
//		}
//		else{
//			
//			j = next[j];
//
//		}
//
//	}
//	return next;
//}
//
//
//int GetStrIndex1(char* arr1,char* arr2){
//	int i = 0;
//	int j = 0;
//	int len1 = GetLength(arr1);
//	int len2 = GetLength(arr2);
//	/*len1 -= len2;*/
//	int* nextArr = GetNextValArr(arr2);
//
//	while (i < len1 && j < len2){
//		
//		if (j == -1||arr1[i] == arr2[j]){
//		/*	if (arr1[i] != arr2[j]){
//				i++;
//			}
//			else{
//
//			i++; j++;
//			}*/
//			i++;j++;
//		}
//		else{
//			j = nextArr[j];
//		}
//
//	}
//
//	if (!j < len2){
//		return i - j + 1;
//	}
//	else{
//		return -1;
//	}
//	
//}
//
//void test1(){
//	
//	printf("Str Index : %d",GetStrIndex1("AAABAAAAAE","AAAAAE"));
//
//}
//
