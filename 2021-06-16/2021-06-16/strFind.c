#define _CRT_SECURE_NO_WARNINGS 10
#pragma once
#include "strFind.h"

int StrLength(char* str){
	assert(str);
	int length = 0;
	while (*str++){
		length++;
	}
	return length;
}
//穷举型
int FindStrIndex(char* s1, char* s2){

	int s1Index = 0;
	int s2Index = 0;

	int s1Len = StrLength(s1);
	int s2Len = StrLength(s2);

	while (s1Index <s1Len && s2Index <s2Len){
		
		if (s1[s1Index] == s2[s2Index]){
			s1Index++;
			s2Index++;
		}
		else{
			s1Index = s1Index - s2Index +1;
			s2Index = 0;
		}

	}
	if (s2Index >= s2Len){
		return s1Index - s2Index+1;
	}
	return -1;

}

//KMP算法计算next数组的算法：
int* GetNextArr(char* str){
	int strLen = StrLength(str);
	int* arr = (int*)malloc(sizeof(int)*strLen);
	int i = 1, j = 0;
	arr[1] = 0;
	arr[0] = 0;
	while (i<strLen-1){

		if (str[i] == str[j]){
			i++; j++;
			arr[i] = j;

		}
		else{
			
			i++;
			j = arr[j];
			arr[i] = j;
		}
		

	}
	return arr;
}

//KMP型
int FindStrIndexKMP(char* s1, char* s2){

	int s1Index = 0;
	int s2Index = 0;

	int s1Len = StrLength(s1);
	int s2Len = StrLength(s2);
	int* next = GetNextArr(s2);
	while (s1Index <s1Len && s2Index <s2Len){

		if (s1[s1Index] == s2[s2Index]){
			s1Index++;
			s2Index++;
		}
		else{
			s2Index = next[s2Index];
		}
		if (!s2Index){
			s1Index++;
		}

	}
	if (s2Index >= s2Len){
		return s1Index - s2Index + 1;
	}
	return -1;

}