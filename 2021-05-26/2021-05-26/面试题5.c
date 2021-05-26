#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>


//不用加减乘除做加法
int add(int a, int b){
	int ab = 0;

	while (b){
		//第一次运算的含义：求出两数之和（无进制求和）
		//第二次以及第二次以后运算的含义：将原数与进位数相加（无进位相加）。
		ab = (a^b);
		//求出进制位的位置，然后将其左移1位，表示向前进一。
		b = (unsigned int)(a&b) << 1;
		//将无进制位保存到a中，以便于下次迭代运算。
		a = ab;
		
 	}
	return a;
}



//不用加减乘除做加法
int main(){

	add(1,2);

	return 0;
}