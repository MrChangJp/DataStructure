#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>

//��ԭ������ɾ��Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO(1)
int test3(){
	int arr[] = {1,2,4,6,8,9,5,3};
	int trueIndex = 0;
	int findIndex = 0;
	int num = 5;
	int sz = sizeof(arr) / sizeof(arr[0]);

	while (findIndex < sz){

		if (arr[findIndex] != num){
			arr[trueIndex] = arr[findIndex];
			trueIndex++;
		}




		findIndex++;
	}


}

//int main(){
//
//
//	test3();
//
//	return 0;
//}