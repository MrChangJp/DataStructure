#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>



//��ԭ������ɾ��Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO(1)
int removeElement(int* nums, int numsSize, int val){

	int realIndex = 0;
	int i = 0;
	for (; i < numsSize; i++){
		if (nums[i] != val){
			nums[realIndex++] = nums[i];
		}
	}
	return realIndex;
}
//��ԭ������ɾ��Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�ΪO(1)
void test1(){
	int nums[] = { 3, 2, 2, 3 }, val = 3;
	int sz = sizeof(nums) / sizeof(nums[0]);
	removeElement(&nums, sz, val);
}

int main(){
	test1();
	return 0;
}