#define _CRT_SECURE_NO_WARNINGS 10
#include <stdio.h>
#include<stdlib.h>

int GetLength(char* str){

	int count = 0;

	while (*str){
		count++;
		str++;
	}

	return count;

}

int* GetNextArr(char* str){
	int len = GetLength(str);
	int* nextArr = (int*)malloc(sizeof(int)*len);
	int i = 0, j = -1;
	nextArr[0] = -1; 

	while (i<len){

		if (j == -1 || str[i] == str[j]){
			i++; j++;
			if (str[i] != str[j]){
				nextArr[i] = j;
			}
			else{
				nextArr[i] = nextArr[j];
				

			}
		}
		else{
			j = nextArr[j];
		}

	}

	return nextArr;


}

int GetStrIndex(char* str1,char* str2){

	int len1 = GetLength(str1);
	int len2 = GetLength(str2);

	int i = 0, j = -1;

	int* nextArr = GetNextArr(str2);

	while (i < len1&&j < len2){

		if (j == -1 || str1[i] == str2[j]){
			i++; j++;
		}
		else{
			j = nextArr[j];
		}

	}

	if (j >= len2){	
		return i - j+1;
	}
	else{
		return -1;
	}

	
}

void test2(){

	printf("Str Index :%d\n", GetStrIndex("ABCABCDABCEDABCCAB","ABCC"));

}

//int main(){
//	test2();
//	return 0;
//}