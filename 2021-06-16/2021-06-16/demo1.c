#define _CRT_SECURE_NO_WARNINGS 10
#include "strFind.h"

void test1(){
	char arr1[] = "aabccd";
	char arr2[] = "bcc";
	char arr3[] = "abcabdabcadccab";
	GetNextArr(arr3);
	printf("子字符串的下标为：%d\n", FindStrIndexKMP(arr1, arr2));
}


int main(){
	test1();
	return 0;
}