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
��һ���ܺȶ���ƿ��ˮ��
һ��20Ԫ��һԪһƿ��
��ƿ��ƿ��һƿ��ˮ��
*/
//void main(){
//	int s = test1(20);
//}