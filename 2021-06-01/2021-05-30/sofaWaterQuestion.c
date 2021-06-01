#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>

int test1(int money){
	int count = 0;

	int nullBottle = money;
	int drink = money;

	while (nullBottle >= 2){

		drink += nullBottle/2;
		nullBottle = nullBottle / 2 + nullBottle % 2;

	}



	return count = drink;
}



/*
求一共能喝多少瓶汽水，
一共20元，一元一瓶，
两瓶空瓶换一瓶汽水。
*/
//void main(){
//	int s = test1(20);
//}