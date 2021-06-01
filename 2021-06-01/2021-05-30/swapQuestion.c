#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>
/*
交换数组中奇偶数的位置。
所有奇数在前，偶数在后
*/
void test2(){

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int startIndex = 0;
	int endeIndex = sz - 1;
	int tmp = 0;
	while (startIndex < endeIndex){

		if (arr[startIndex] % 2 == 0) {
			startIndex++;
			continue;
		}
		if (arr[endeIndex] % 2 != 0) {
			endeIndex--;
			continue;
		}
		tmp = arr[startIndex];
		arr[startIndex] = arr[endeIndex];
		arr[endeIndex] = tmp;

	}

}


//int main(){
//	//test2();
//
//	char a = 127;
//	printf("a=%d\n", a);
//	printf("a=%x\n", a);
//	char b = 5;
//	char d = a + b;
//	int c = b + a;
//	printf("%d\n", (char)(b + a));
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}