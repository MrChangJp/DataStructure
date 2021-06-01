#define _CRT_SECURE_NO_WARNINGS 10

#include<stdio.h>
//不用加减乘除做加法
void test7(){

	int a = 100;
	int b = 22131;

	int sum = 0;
	do{
		
		int tempCarryBit = (unsigned int)((a&b) << 1);
		a = a^b;
		b = tempCarryBit;

	} while (b);





}

//不用加减乘除做加法
int main(){
	test7();
	return 0;
}





 struct ListNode {
     int val;
     struct ListNode *next;
 };



struct ListNode* reverseList(struct ListNode* head){
	if (!head){
		return NULL;
	}
	if (!head->next){
		return head;
	}
	struct ListNode* n1 = NULL; struct ListNode* n2 = NULL; struct ListNode* n3 = NULL;
	n2 = head;
	n3 = head->next;
	while (n2){

		n2->next = n1;

		n1 = n2;
		n2 = n3;
		if (n3){
			n3 = n3->next;
		}

	}
}
