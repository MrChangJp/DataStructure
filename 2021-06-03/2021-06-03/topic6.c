#define _CRT_SECURE_NO_WARNINGS 10
#include<stdio.h>



struct Node {
    int val;
    struct Node *next;
    struct Node *random;
};


struct Node* copyRandomList(struct Node* head) {
	
	struct Node* cur = head;

	while (cur){

		struct Node* copyNode = (struct Node*)malloc(sizeof(struct Node));
		copyNode->next = NULL;
		copyNode->random = NULL;
		copyNode->val = cur->val;

		copyNode->next = cur->next;
		copyNode->random = cur->random;

		cur->next = copyNode;

		cur = copyNode->next;




	}



}

int main(){

//	struct Node* = {}

	return 0;
}